
@interface FBSSceneSnapshotRequestAction : BSAction

@property (nonatomic, readonly) FBSSceneSnapshotContext *context;
@property (nonatomic, readonly) unsigned long long type;

- (id)_initWithType:(unsigned long long)arg1 context:(id)arg2 responder:(id)arg3;
- (id)context;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (unsigned long long)type;
- (id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3;

@end
