
@interface MSParsecSearchSessionQueryComponent : NSObject <EFLoggable> {
    bool  _cannedSuggestion;
    NSString * _category;
    NSString * _queryString;
    NSString * _scope;
}

@property (nonatomic, readonly) bool cannedSuggestion;
@property (nonatomic, readonly) NSString *category;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *queryString;
@property (nonatomic, readonly) NSString *scope;
@property (readonly) Class superclass;

+ (id)_structuredQueryForComponents:(id)arg1 hasCurrentMailboxScope:(bool)arg2 languages:(id)arg3;
+ (id)freeTextQueryComponentWithString:(id)arg1;
+ (id)log;
+ (id)suggestionAtomQueryComponentWithCategory:(id)arg1 scope:(id)arg2 queryString:(id)arg3 cannedSuggestion:(bool)arg4;
+ (id)userTypedQueryComponentWithString:(id)arg1 removingFreeTextTokenString:(id)arg2;
+ (id)userTypedQueryComponentWithString:(id)arg1 removingFreeTextTokens:(id)arg2;

- (void).cxx_destruct;
- (id)_structuredQueryComponentWithLanguages:(id)arg1;
- (bool)cannedSuggestion;
- (id)category;
- (id)initWithCategory:(id)arg1 scope:(id)arg2 queryString:(id)arg3 cannedSuggestion:(bool)arg4;
- (id)queryString;
- (id)scope;

@end
