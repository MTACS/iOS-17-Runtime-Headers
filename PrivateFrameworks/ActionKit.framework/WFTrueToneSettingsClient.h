
@interface WFTrueToneSettingsClient : WFSettingsClient {
    CBAdaptationClient * _adaptationClient;
    CBClient * _brightnessClient;
}

@property (nonatomic, readonly) CBAdaptationClient *adaptationClient;
@property (nonatomic, readonly) CBClient *brightnessClient;

+ (void)createClientWithCompletionHandler:(id /* block */)arg1;

- (void).cxx_destruct;
- (id)adaptationClient;
- (id)brightnessClient;
- (void)getStateWithCompletionHandler:(id /* block */)arg1;
- (id)initWithBrightnessClient:(id)arg1 adaptationClient:(id)arg2;
- (void)setState:(bool)arg1 completionHandler:(id /* block */)arg2;

@end
