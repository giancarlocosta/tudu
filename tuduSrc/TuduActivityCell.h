//
//  TuduActivityCell.h
//  Tudu
//

#import "TuduBaseTextCell.h"
@protocol TuduActivityCellDelegate;

@interface TuduActivityCell : TuduBaseTextCell

/*!Setter for the activity associated with this cell */
@property (nonatomic, strong) PFObject *activity;

/*!Set the new state. This changes the background of the cell. */
- (void)setIsNew:(BOOL)isNew;

@end


/*!
 The protocol defines methods a delegate of a PAPBaseTextCell should implement.
 */
@protocol TuduActivityCellDelegate <TuduBaseTextCellDelegate>
@optional

/*!
 Sent to the delegate when the activity button is tapped
 @param activity the PFObject of the activity that was tapped
 */
- (void)cell:(TuduActivityCell *)cellView didTapEventButton:(PFObject *)event;

@end