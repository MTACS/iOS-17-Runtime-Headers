
@interface PGTripHighlightSharingSuggester : PGAbstractSuggester <PGSuggester>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool lastSuggestionWasColliding;
@property (readonly) Class superclass;

+ (id)suggestionSubtypes;
+ (id)suggestionTypes;

- (id)suggestionsWithOptions:(id)arg1 progress:(id /* block */)arg2;

@end
