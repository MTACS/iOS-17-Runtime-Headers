
@interface SASTCompetingTeamPlayDetailItem : AceObject <SASTTemplateItem>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool firstEntity;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SAUIDecoratedText *playDetail;
@property (readonly) Class superclass;

+ (id)competingTeamPlayDetailItem;
+ (id)competingTeamPlayDetailItemWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (bool)firstEntity;
- (id)groupIdentifier;
- (id)playDetail;
- (void)setFirstEntity:(bool)arg1;
- (void)setPlayDetail:(id)arg1;

@end
