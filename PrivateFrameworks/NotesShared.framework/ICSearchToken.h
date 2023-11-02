
@interface ICSearchToken : NSObject {
    _CSSuggestionToken * _csToken;
    NSString * _iconImageName;
    NSString * _subQueryString;
    unsigned long long  _suggestionType;
    NSString * _title;
}

@property (nonatomic, readonly) NSArray *availableScopes;
@property (nonatomic, retain) _CSSuggestionToken *csToken;
@property (nonatomic, retain) NSString *iconImageName;
@property (nonatomic, readonly) NSString *scopeName;
@property (nonatomic, readonly) unsigned long long selectedScopeIndex;
@property (nonatomic, readonly) NSString *subQueryString;
@property (nonatomic, readonly) unsigned long long suggestionType;
@property (nonatomic, readonly) NSString *title;

+ (id)iconImageNameForCSToken:(id)arg1;
+ (id)iconImageNameForSuggestionType:(unsigned long long)arg1;
+ (unsigned long long)suggestionTypeOfFirstItemInTokens:(id)arg1;

- (void).cxx_destruct;
- (id)availableScopes;
- (id)csToken;
- (bool)hasMultipleScopes;
- (id)iconImageName;
- (id)initWithCSSuggestionToken:(id)arg1;
- (id)initWithTitle:(id)arg1 subQueryString:(id)arg2 suggestionType:(unsigned long long)arg3;
- (id)scopeName;
- (unsigned long long)selectedScopeIndex;
- (void)setCsToken:(id)arg1;
- (void)setIconImageName:(id)arg1;
- (id)subQueryString;
- (unsigned long long)suggestionType;
- (id)title;

@end
