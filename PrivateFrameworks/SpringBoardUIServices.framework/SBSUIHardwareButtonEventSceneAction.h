
@interface SBSUIHardwareButtonEventSceneAction : BSAction

@property (nonatomic, readonly) long long buttonEventType;

- (long long)buttonEventType;
- (id)initWithButtonEventType:(long long)arg1 timeout:(double)arg2 withResponseHandler:(id /* block */)arg3;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (void)sendResponse:(id)arg1;
- (id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3;

@end
