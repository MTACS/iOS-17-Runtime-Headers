
@interface WFNightShiftSettingsClient : WFSettingsClient {
    CBBlueLightClient * _blueLightClient;
}

@property (nonatomic, readonly) CBBlueLightClient *blueLightClient;

+ (void)createClientWithCompletionHandler:(id /* block */)arg1;

- (void).cxx_destruct;
- (id)blueLightClient;
- (void)getStateWithCompletionHandler:(id /* block */)arg1;
- (id)initWithBlueLightClient:(id)arg1;
- (void)setState:(bool)arg1 completionHandler:(id /* block */)arg2;

@end
