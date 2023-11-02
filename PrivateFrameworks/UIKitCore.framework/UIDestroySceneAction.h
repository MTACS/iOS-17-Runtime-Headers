
@interface UIDestroySceneAction : BSAction

@property (nonatomic, readonly) bool destroySceneSession;
@property (nonatomic, readonly) NSSet *persistedIdentifiers;
@property (nonatomic, readonly) unsigned long long preferredAnimationType;
@property (getter=isUserOriginatedRequest, nonatomic, readonly) bool userOriginatedRequest;

- (long long)UIActionType;
- (bool)destroySceneSession;
- (id)initWithPersistedIdentifiers:(id)arg1 preferredAnimationType:(unsigned long long)arg2 callbackQueue:(id)arg3 completion:(id /* block */)arg4;
- (id)initWithPersistedIdentifiers:(id)arg1 preferredAnimationType:(unsigned long long)arg2 forDestroyingSession:(bool)arg3 callbackQueue:(id)arg4 completion:(id /* block */)arg5;
- (id)initWithPersistedIdentifiers:(id)arg1 preferredAnimationType:(unsigned long long)arg2 forDestroyingSession:(bool)arg3 userOriginatedRequest:(bool)arg4 callbackQueue:(id)arg5 completion:(id /* block */)arg6;
- (id)initWithPreferredAnimationType:(unsigned long long)arg1 callbackQueue:(id)arg2 completion:(id /* block */)arg3;
- (bool)isUserOriginatedRequest;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (id)persistedIdentifiers;
- (unsigned long long)preferredAnimationType;

@end
