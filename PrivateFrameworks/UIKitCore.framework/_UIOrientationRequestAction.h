
@interface _UIOrientationRequestAction : BSAction

@property (nonatomic, readonly) unsigned long long policy;
@property (nonatomic, readonly) unsigned long long requestedInterfaceOrientationMask;

- (long long)UIActionType;
- (id)initWithRequestedInterfaceOrientationMask:(unsigned long long)arg1 callbackQueue:(id)arg2 completion:(id /* block */)arg3;
- (id)initWithRequestedInterfaceOrientationMask:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (id)initWithRequestedInterfaceOrientationMask:(unsigned long long)arg1 policy:(unsigned long long)arg2 callbackQueue:(id)arg3 completion:(id /* block */)arg4;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (unsigned long long)policy;
- (unsigned long long)requestedInterfaceOrientationMask;
- (id)settings:(id)arg1 valueDescriptionForFlag:(long long)arg2 object:(id)arg3 ofSetting:(unsigned long long)arg4;

@end
