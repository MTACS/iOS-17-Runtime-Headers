
@interface SASportsTeamSnippet : SASportsSnippet

@property (nonatomic, copy) NSArray *teams;

+ (id)teamSnippet;
+ (id)teamSnippetWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setTeams:(id)arg1;
- (id)teams;

@end
