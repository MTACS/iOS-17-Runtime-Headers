
@interface ICASSearchSuggestionType : NSObject <AADataType> {
    long long  _searchSuggestionType;
}

@property (nonatomic, readonly) long long searchSuggestionType;

- (id)initWithSearchSuggestionType:(long long)arg1;
- (long long)searchSuggestionType;
- (id)toJsonValueAndReturnError:(id*)arg1;

@end
