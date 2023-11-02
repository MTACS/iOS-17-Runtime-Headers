
@interface SBSUIHandleDeviceLockSceneActionResponse : BSActionResponse

@property (nonatomic, readonly) long long deviceLockHandlingResult;

- (long long)deviceLockHandlingResult;
- (id)initWithDeviceLockHandlingResult:(long long)arg1 error:(id)arg2;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;

@end
