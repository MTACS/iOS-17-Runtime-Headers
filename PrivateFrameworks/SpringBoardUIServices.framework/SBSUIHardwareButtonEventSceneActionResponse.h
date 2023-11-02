
@interface SBSUIHardwareButtonEventSceneActionResponse : BSActionResponse

@property (nonatomic, readonly) long long buttonEventHandlingResult;

- (long long)buttonEventHandlingResult;
- (id)initWithButtonEventHandlingResult:(long long)arg1 error:(id)arg2;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;

@end
