
@interface SASportsScheduleSnippet : SASportsSnippet

@property (nonatomic, copy) NSArray *matchups;

+ (id)scheduleSnippet;
+ (id)scheduleSnippetWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)matchups;
- (void)setMatchups:(id)arg1;

@end
