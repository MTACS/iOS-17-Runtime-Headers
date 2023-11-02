
@interface WFFlashlightSettingsClient : WFSettingsClient {
    AVFlashlight * _flashlight;
}

@property (nonatomic, readonly) AVFlashlight *flashlight;

+ (void)createClientWithCompletionHandler:(id /* block */)arg1;

- (void).cxx_destruct;
- (id)flashlight;
- (id)initWithFlashlight:(id)arg1;
- (void)toggleWithBrightnessLevel:(float)arg1 completionHandler:(id /* block */)arg2;
- (void)turnOffWithCompletionHandler:(id /* block */)arg1;
- (void)turnOnWithBrightnessLevel:(float)arg1 completionHandler:(id /* block */)arg2;

@end
