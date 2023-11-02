
@interface WKDataListSuggestionsControl : NSObject {
    struct WeakPtr<WebKit::WebDataListSuggestionsDropdownIOS, WTF::DefaultWeakPtrImpl> { 
        struct RefPtr<WTF::DefaultWeakPtrImpl, WTF::RawPtrTraits<WTF::DefaultWeakPtrImpl>, WTF::DefaultRefDerefTraits<WTF::DefaultWeakPtrImpl>> { 
            struct DefaultWeakPtrImpl {} *m_ptr; 
        } m_impl; 
    }  _dropdown;
    bool  _isShowingSuggestions;
    struct Vector<WebCore::DataListSuggestion, 0UL, WTF::CrashOnOverflow, 16UL, WTF::FastMalloc> { 
        struct DataListSuggestion {} *m_buffer; 
        unsigned int m_capacity; 
        unsigned int m_size; 
    }  _suggestions;
    WKContentView * _view;
}

@property (nonatomic) bool isShowingSuggestions;
@property (nonatomic) WKContentView *view;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)didSelectOptionAtIndex:(long long)arg1;
- (id)initWithInformation:(void*)arg1 inView:(id)arg2;
- (void)invalidate;
- (bool)isShowingSuggestions;
- (void)setIsShowingSuggestions:(bool)arg1;
- (void)setView:(id)arg1;
- (void)showSuggestionsDropdown:(void*)arg1 activationType:(unsigned char)arg2;
- (struct String { struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> { struct StringImpl {} *x_1_1_1; } x1; })suggestionAtIndex:(long long)arg1;
- (long long)suggestionsCount;
- (long long)textAlignment;
- (id)textSuggestions;
- (void)updateWithInformation:(void*)arg1;
- (id)view;

@end
