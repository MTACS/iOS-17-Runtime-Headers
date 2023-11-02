
@interface SearchUICompletionStringModel : NSObject {
    NSString * _displayedText;
    bool  _hasMarkedText;
    unsigned long long  _queryId;
    bool  _searchFieldHasTokens;
}

@property (nonatomic, readonly) NSString *displayedText;
@property (nonatomic, readonly) bool hasMarkedText;
@property (nonatomic, readonly) unsigned long long queryId;
@property (nonatomic, readonly) bool searchFieldHasTokens;

- (void).cxx_destruct;
- (id)displayedText;
- (bool)hasMarkedText;
- (id)initWithTypedString:(id)arg1 hasTokens:(bool)arg2 queryId:(unsigned long long)arg3 hasMarkedText:(bool)arg4;
- (unsigned long long)queryId;
- (bool)searchFieldHasTokens;

@end
