
@protocol EKDateTimeCellDelegate <NSObject>

@required

- (void)dateTimeCell:(EKDateTimeCell *)arg1 dateChanged:(NSDate *)arg2;
- (void)dateTimeCellBeganEditing:(EKDateTimeCell *)arg1;
- (void)dateTimeCellDateTapped:(EKDateTimeCell *)arg1;
- (void)dateTimeCellEndedEditing:(EKDateTimeCell *)arg1;
- (void)dateTimeCellTimeTapped:(EKDateTimeCell *)arg1;

@end
