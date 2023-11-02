
@interface SASportsAthleteComparisonSnippet : SASportsAthleteSnippet

@property (nonatomic, copy) NSDictionary *comparisonItemDetails;

+ (id)athleteComparisonSnippet;
+ (id)athleteComparisonSnippetWithDictionary:(id)arg1 context:(id)arg2;

- (id)comparisonItemDetails;
- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setComparisonItemDetails:(id)arg1;

@end
