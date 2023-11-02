
@interface WKDataListSuggestionsPicker : WKDataListSuggestionsControl <UIPickerViewDataSource, UIPickerViewDelegate> {
    struct RetainPtr<WKDataListSuggestionsPickerView> { 
        void *m_ptr; 
    }  _pickerView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithInformation:(void*)arg1 inView:(id)arg2;
- (void)invalidate;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (void)showSuggestionsDropdown:(void*)arg1 activationType:(unsigned char)arg2;
- (void)updateWithInformation:(void*)arg1;

@end
