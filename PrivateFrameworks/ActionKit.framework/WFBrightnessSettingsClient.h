
@interface WFBrightnessSettingsClient : WFSettingsClient <WFDecimalValueSetting>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)createClientWithCompletionHandler:(id /* block */)arg1;

- (void)getValueWithCompletionHandler:(id /* block */)arg1;
- (void)setValue:(float)arg1 completionHandler:(id /* block */)arg2;

@end
