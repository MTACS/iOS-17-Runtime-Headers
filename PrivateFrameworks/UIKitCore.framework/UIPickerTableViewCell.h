
@interface UIPickerTableViewCell : UITableViewCell {
    _UIPickerViewStyle * _style;
    UITapGestureRecognizer * _tap;
    UIPickerTableView * pickerTable;
}

@property (nonatomic) UIPickerTableView *pickerTable;
@property (nonatomic, retain) _UIPickerViewStyle *style;

- (void).cxx_destruct;
- (void)_setIsCenterCell:(bool)arg1 shouldModifyAlphaOfView:(bool)arg2;
- (void)_tapAction:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)pickerTable;
- (void)setPickerTable:(id)arg1;
- (void)setStyle:(id)arg1;
- (id)style;

@end
