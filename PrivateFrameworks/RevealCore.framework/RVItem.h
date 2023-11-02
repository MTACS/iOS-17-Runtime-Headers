
@interface RVItem : NSObject <NSSecureCoding> {
    id  _clientHints;
    NSString * _clientIdentifier;
    long long  _contactPropertyType;
    NSString * _contactPropertyValue;
    DDScannerResult * _ddResult;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _highlightRange;
    NSString * _leadingText;
    id /* block */  _lookupContextFetchingBlock;
    bool  _normalized;
    long long  _normalizedType;
    NSString * _originalSelectedText;
    RVQuery * _query;
    id /* block */  _reportAnIssueBlock;
    id /* block */  _reportAnIssueExtendedBlock;
    id /* block */  _reportAnIssueMetadataFetchingBlock;
    long long  _selectionType;
    NSString * _text;
    id /* block */  _textQueryProvider;
    NSString * _trailingText;
    long long  _type;
    NSURL * _url;
}

@property (nonatomic, retain) id clientHints;
@property (nonatomic, readonly) NSString *clientIdentifier;
@property (nonatomic, readonly) long long contactPropertyType;
@property (nonatomic, readonly) NSString *contactPropertyValue;
@property (nonatomic, readonly) DDScannerResult *ddResult;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } highlightRange;
@property (nonatomic, retain) NSString *leadingText;
@property (nonatomic, copy) id /* block */ lookupContextFetchingBlock;
@property (nonatomic, readonly) long long normalizedType;
@property (nonatomic, readonly) NSURL *normalizedURL;
@property (nonatomic, retain) NSString *originalSelectedText;
@property (nonatomic, readonly) RVQuery *query;
@property (nonatomic, copy) id /* block */ reportAnIssueBlock;
@property (nonatomic, copy) id /* block */ reportAnIssueExtendedBlock;
@property (nonatomic, copy) id /* block */ reportAnIssueMetadataFetchingBlock;
@property (nonatomic, readonly) long long selectionType;
@property (nonatomic, readonly) NSString *text;
@property (nonatomic, copy) id /* block */ textQueryProvider;
@property (nonatomic, readonly) NSString *textSearchContext;
@property (nonatomic, retain) NSString *trailingText;
@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) NSURL *url;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)clientHints;
- (id)clientIdentifier;
- (long long)contactPropertyType;
- (id)contactPropertyValue;
- (id)ddResult;
- (void)encodeWithCoder:(id)arg1;
- (id)getClientHintKey:(id)arg1 ofType:(Class)arg2;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })highlightRange;
- (id)initWithClientIdentifier:(id)arg1 rangeInContext:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithContactProperty:(long long)arg1 value:(id)arg2 rangeInContext:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (id)initWithDDResult:(id)arg1;
- (id)initWithDDResult:(id)arg1 text:(id)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (id)initWithSearchQuery:(id)arg1 rangeInContext:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)initWithText:(id)arg1 clickedIndex:(unsigned long long)arg2 selectionRanges:(id)arg3 shouldUpdateSelection:(bool*)arg4;
- (id)initWithText:(id)arg1 selectedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)initWithText:(id)arg1 selectedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 customURLParser:(id /* block */)arg3;
- (id)initWithURL:(id)arg1 rangeInContext:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)leadingText;
- (id /* block */)lookupContextFetchingBlock;
- (long long)normalizedType;
- (id)normalizedURL;
- (id)originalSelectedText;
- (id)query;
- (id /* block */)reportAnIssueBlock;
- (id /* block */)reportAnIssueExtendedBlock;
- (id /* block */)reportAnIssueMetadataFetchingBlock;
- (long long)selectionType;
- (void)setClientHints:(id)arg1;
- (void)setLeadingText:(id)arg1;
- (void)setLookupContextFetchingBlock:(id /* block */)arg1;
- (void)setOriginalSelectedText:(id)arg1;
- (void)setReportAnIssueBlock:(id /* block */)arg1;
- (void)setReportAnIssueExtendedBlock:(id /* block */)arg1;
- (void)setReportAnIssueMetadataFetchingBlock:(id /* block */)arg1;
- (void)setTextQueryProvider:(id /* block */)arg1;
- (void)setTrailingText:(id)arg1;
- (id)text;
- (id /* block */)textQueryProvider;
- (id)textSearchContext;
- (id)trailingText;
- (long long)type;
- (id)url;

@end
