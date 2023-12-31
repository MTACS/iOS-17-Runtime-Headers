
@interface PKFixedAmountWrapperView : UIView {
    UIPickerView * _pickerView;
    UITableView * _tableView;
}

@property (nonatomic, retain) UIPickerView *pickerView;
@property (nonatomic, retain) UITableView *tableView;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)pickerView;
- (void)setPickerView:(id)arg1;
- (void)setTableView:(id)arg1;
- (id)tableView;

@end
