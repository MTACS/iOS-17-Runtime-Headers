
@interface WebElementDictionary : NSDictionary {
    NSMutableDictionary * _cache;
    bool  _cacheComplete;
    NSMutableSet * _nilValues;
    void * _result;
}

+ (void)initialize;
+ (void)initializeLookupTable;

- (id)_absoluteImageURL;
- (id)_absoluteLinkURL;
- (id)_absoluteMediaURL;
- (id)_altDisplayString;
- (id)_domNode;
- (void)_fillCache;
- (id)_isContentEditable;
- (id)_isInScrollBar;
- (id)_isLiveLink;
- (id)_isSelected;
- (id)_spellingToolTip;
- (id)_targetWebFrame;
- (id)_textContent;
- (id)_title;
- (id)_titleDisplayString;
- (id)_webFrame;
- (unsigned long long)count;
- (void)dealloc;
- (id)initWithHitTestResult:(const void*)arg1;
- (id)keyEnumerator;
- (id)objectForKey:(id)arg1;

@end
