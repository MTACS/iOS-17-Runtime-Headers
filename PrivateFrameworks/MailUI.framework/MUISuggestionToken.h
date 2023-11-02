
@interface MUISuggestionToken : NSObject {
    _CSSuggestionToken * _csToken;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _replacementRange;
    NSArray * _scopeNames;
    unsigned long long  _selectedScopeIndex;
    NSString * _title;
}

@property (nonatomic, readonly) _CSSuggestionToken *csToken;
@property (nonatomic, readonly) bool hasMultipleScopes;
@property (nonatomic, readonly) UIImage *image;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } replacementRange;
@property (nonatomic, readonly) NSString *scopeName;
@property (nonatomic, readonly) NSArray *scopeNames;
@property (nonatomic) unsigned long long selectedScopeIndex;
@property (nonatomic, readonly) NSString *title;

+ (id)csTokensFromMailSuggestionTokens:(id)arg1;
+ (id)suggestionTokenWithTitle:(id)arg1;

- (void).cxx_destruct;
- (id)csToken;
- (bool)hasMultipleScopes;
- (id)image;
- (id)initWithCSToken:(id)arg1;
- (id)initWithTitle:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })replacementRange;
- (id)scopeName;
- (id)scopeNames;
- (unsigned long long)selectedScopeIndex;
- (void)setSelectedScopeIndex:(unsigned long long)arg1;
- (id)title;

@end
