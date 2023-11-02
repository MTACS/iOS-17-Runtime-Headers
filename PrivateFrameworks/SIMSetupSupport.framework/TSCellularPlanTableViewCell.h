
@interface TSCellularPlanTableViewCell : UITableViewCell {
    UITextField * _editableTextField;
}

@property (nonatomic, retain) UITextField *editableTextField;

+ (double)rowHeight;

- (void).cxx_destruct;
- (id)editableTextField;
- (id)initWithTag:(long long)arg1 delegate:(id)arg2;
- (void)setEditableTextField:(id)arg1;

@end
