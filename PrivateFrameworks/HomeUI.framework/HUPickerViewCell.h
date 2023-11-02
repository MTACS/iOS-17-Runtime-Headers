
@interface HUPickerViewCell : UITableViewCell <HUCellProtocol, UIPickerViewDataSource, UIPickerViewDelegate> {
    <HUPickerCellDelegate> * _delegate;
    long long  _numberOfValues;
    UIPickerView * _pickerView;
    NSIndexPath * _selectedIndexPath;
    HFItem * item;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HUPickerCellDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HFItem *item;
@property (nonatomic) long long numberOfValues;
@property (nonatomic, retain) UIPickerView *pickerView;
@property (nonatomic) <HUResizableCellDelegate> *resizingDelegate;
@property (nonatomic, readonly) NSIndexPath *selectedIndexPath;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_canSelectValueAtIndex:(long long)arg1;
- (id)delegate;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)item;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (long long)numberOfValues;
- (id)pickerView;
- (id)pickerView:(id)arg1 attributedTitleForRow:(long long)arg2 forComponent:(long long)arg3;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (void)prepareForReuse;
- (void)reloadPickerView;
- (id)selectedIndexPath;
- (void)setDelegate:(id)arg1;
- (void)setItem:(id)arg1;
- (void)setNumberOfValues:(long long)arg1;
- (void)setPickerView:(id)arg1;
- (void)setSelectedIndex:(long long)arg1 animated:(bool)arg2;
- (void)updateUIWithAnimation:(bool)arg1;

@end
