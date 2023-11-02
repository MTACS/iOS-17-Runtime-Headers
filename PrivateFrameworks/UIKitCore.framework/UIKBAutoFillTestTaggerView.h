
@interface UIKBAutoFillTestTaggerView : UIView <UIPickerViewDataSource, UIPickerViewDelegate> {
    UIKBAutoFillTestTagRequest * _currentRequest;
    <UIKBAutoFillTestTaggerViewDelegate> * _delegate;
    UIBarButtonItem * _doneBarButtonItem;
    UIBarButtonItem * _nextBarButtoItem;
    UIPickerView * _pickerView;
    UIBarButtonItem * _previousBarButtonItem;
    NSArray * _tagRequests;
    UILabel * _titleLabel;
    UIToolbar * _toolbar;
    UIVisualEffectView * _visualEffectView;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <UIKBAutoFillTestTaggerViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSArray *tagRequests;

- (void).cxx_destruct;
- (void)_doneBarButtonAction:(id)arg1;
- (id)_formTypes;
- (void)_nextBarButtonAction:(id)arg1;
- (void)_performTagRequest:(id)arg1;
- (void)_previousBarButtonAction:(id)arg1;
- (id)_textFieldTypes;
- (void)_updateTitle;
- (void)_updateToolbarButtons;
- (id)delegate;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (double)pickerView:(id)arg1 rowHeightForComponent:(long long)arg2;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (void)setDelegate:(id)arg1;
- (void)setTagRequests:(id)arg1;
- (id)tagRequests;

@end
