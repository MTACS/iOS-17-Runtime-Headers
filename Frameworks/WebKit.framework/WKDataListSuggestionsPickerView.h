
@interface WKDataListSuggestionsPickerView : UIPickerView <WKFormControl> {
    WKDataListSuggestionsControl * _control;
}

@property (nonatomic) WKDataListSuggestionsControl *control;

- (void).cxx_destruct;
- (id)control;
- (void)controlBeginEditing;
- (void)controlEndEditing;
- (id)controlView;
- (void)setControl:(id)arg1;

@end
