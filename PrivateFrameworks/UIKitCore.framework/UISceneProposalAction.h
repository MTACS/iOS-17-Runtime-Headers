
@interface UISceneProposalAction : BSAction

@property (nonatomic, readonly, copy) BSAction *action;
@property (nonatomic, readonly, copy) NSString *persistentIdentifier;
@property (nonatomic, readonly, copy) NSString *sceneIdentifier;

- (long long)UIActionType;
- (id)action;
- (id)initWithPersistentIdentifier:(id)arg1 action:(id)arg2 queue:(id)arg3 completion:(id /* block */)arg4;
- (id)initWithSceneIdentifier:(id)arg1 action:(id)arg2 queue:(id)arg3 completion:(id /* block */)arg4;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (id)persistentIdentifier;
- (id)sceneIdentifier;

@end
