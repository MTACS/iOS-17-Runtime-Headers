
@interface PKSuggestionPickerCell : UICollectionViewCell <UIPickerViewDataSource, UIPickerViewDelegate> {
    UIPickerView * _pickerView;
    id /* block */  _selectionChanged;
    NSArray * _values;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ selectionChanged;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSArray *values;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (id /* block */)selectionChanged;
- (void)setSelectionChanged:(id /* block */)arg1;
- (void)setValues:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)updateSelectedValue:(id)arg1;
- (id)values;

@end
