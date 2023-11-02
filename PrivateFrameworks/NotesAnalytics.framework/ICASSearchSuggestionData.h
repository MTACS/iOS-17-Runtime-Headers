
@interface ICASSearchSuggestionData : NSObject <AADataEventType> {
    ICASSearchSuggestionType * _searchSuggestionType;
}

@property (nonatomic, readonly) ICASSearchSuggestionType *searchSuggestionType;

+ (id)dataName;

- (void).cxx_destruct;
- (id)initWithSearchSuggestionType:(id)arg1;
- (id)searchSuggestionType;
- (id)toDict;

@end
