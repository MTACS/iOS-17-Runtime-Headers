
@protocol DMCEnrollmentTableViewCellDataSource <NSObject>

@required

- (UITableViewCell *)cell;
- (double)cellHeight;
- (double)estimatedCellHeight;

@optional

- (double)gapToNextSection;
- (void)setEnabled:(bool)arg1;

@end
