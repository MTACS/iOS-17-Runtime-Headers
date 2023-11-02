
@interface UIPrintRangeView : UIView <UIPickerViewDataSource, UIPickerViewDelegate, UITableViewDataSource, UITableViewDelegate> {
    UIPickerView * _fromPicker;
    UIView * _pickerView;
    double  _pickerWidth;
    UIPrintInfo * _printInfo;
    NSArray * _savedMultiPageRanges;
    UITableView * _tableView;
    UIPickerView * _toPicker;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIPickerView *fromPicker;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIView *pickerView;
@property (nonatomic) double pickerWidth;
@property (nonatomic, retain) UIPrintInfo *printInfo;
@property (nonatomic, retain) NSArray *savedMultiPageRanges;
@property (readonly) Class superclass;
@property (nonatomic, retain) UITableView *tableView;
@property (nonatomic, retain) UIPickerView *toPicker;

- (void).cxx_destruct;
- (void)dealloc;
- (id)fromPicker;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 printInfo:(id)arg2;
- (void)loadViews;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)pickerView;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (double)pickerView:(id)arg1 widthForComponent:(long long)arg2;
- (double)pickerWidth;
- (id)printInfo;
- (void)reloadTableView;
- (id)savedMultiPageRanges;
- (void)setFromPicker:(id)arg1;
- (void)setPickerView:(id)arg1;
- (void)setPickerWidth:(double)arg1;
- (void)setPrintInfo:(id)arg1;
- (void)setSavedMultiPageRanges:(id)arg1;
- (void)setTableView:(id)arg1;
- (void)setToPicker:(id)arg1;
- (id)tableView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)toPicker;
- (void)updatePageRangeView;

@end
