
@interface DMCEnrollmentTableViewTextFieldCell : UITableViewCell <DMCEnrollmentTableViewCellDataSource>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)_placeHolderStringForType:(unsigned long long)arg1;
- (id)cell;
- (double)cellHeight;
- (double)estimatedCellHeight;
- (id)initWithType:(unsigned long long)arg1;
- (void)layoutSubviews;
- (id)textField;

@end
