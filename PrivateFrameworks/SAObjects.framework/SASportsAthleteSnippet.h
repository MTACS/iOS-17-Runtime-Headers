
@interface SASportsAthleteSnippet : SASportsSnippet

@property (nonatomic, copy) NSArray *athletes;

+ (id)athleteSnippet;
+ (id)athleteSnippetWithDictionary:(id)arg1 context:(id)arg2;

- (id)athletes;
- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setAthletes:(id)arg1;

@end
