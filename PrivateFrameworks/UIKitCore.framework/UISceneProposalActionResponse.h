
@interface UISceneProposalActionResponse : BSActionResponse

@property (nonatomic, readonly, copy) NSString *persistentIdentifier;
@property (nonatomic, readonly, copy) NSString *sceneIdentifier;

+ (id)responseWithPersistentIdentifier:(id)arg1;
+ (id)responseWithSceneID:(id)arg1;

- (id)_responseWithPersistentIdentifier:(id)arg1;
- (id)initWithInfo:(id)arg1 error:(id)arg2;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (id)persistentIdentifier;
- (id)sceneIdentifier;

@end
