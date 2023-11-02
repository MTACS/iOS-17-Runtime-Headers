
@protocol NCSchedulerViewCellDelegate <NSObject>

@required

- (void)schedulerCell:(NCSchedulerViewCell *)arg1 didChangeTime:(NSDateComponents *)arg2;
- (void)schedulerCellButtonPressed:(NCSchedulerViewCell *)arg1;

@end
