
@interface PGSharingSuggestionSource : NSObject

@property (nonatomic, readonly) NSString *details;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) double weight;

- (bool)canRunWithInput:(id)arg1;
- (bool)canRunWithOptions:(id)arg1;
- (id)description;
- (id)details;
- (id)name;
- (id)sourceDescription;
- (id)suggestedResultsForInput:(id)arg1 withOptions:(id)arg2;
- (id)suggestionResultWithPerson:(id)arg1;
- (id)suggestionResultWithPerson:(id)arg1 weight:(double)arg2;
- (id)suggestionResultsWithPersons:(id)arg1;
- (double)weight;

@end
