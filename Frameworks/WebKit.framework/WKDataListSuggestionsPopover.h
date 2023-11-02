
@interface WKDataListSuggestionsPopover : WKDataListSuggestionsControl {
    struct RetainPtr<WKFormRotatingAccessoryPopover> { 
        void *m_ptr; 
    }  _popover;
    struct RetainPtr<WKDataListSuggestionsViewController> { 
        void *m_ptr; 
    }  _suggestionsViewController;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)didSelectOptionAtIndex:(long long)arg1;
- (id)initWithInformation:(void*)arg1 inView:(id)arg2;
- (void)invalidate;
- (void)showSuggestionsDropdown:(void*)arg1 activationType:(unsigned char)arg2;
- (void)updateWithInformation:(void*)arg1;

@end
