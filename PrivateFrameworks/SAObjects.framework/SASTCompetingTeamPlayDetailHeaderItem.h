
@interface SASTCompetingTeamPlayDetailHeaderItem : AceObject <SASTTemplateItem>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) SAUIDecoratedText *firstTeam;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SAUIDecoratedText *secondTeam;
@property (readonly) Class superclass;

+ (id)competingTeamPlayDetailHeaderItem;
+ (id)competingTeamPlayDetailHeaderItemWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)firstTeam;
- (id)groupIdentifier;
- (id)secondTeam;
- (void)setFirstTeam:(id)arg1;
- (void)setSecondTeam:(id)arg1;

@end
