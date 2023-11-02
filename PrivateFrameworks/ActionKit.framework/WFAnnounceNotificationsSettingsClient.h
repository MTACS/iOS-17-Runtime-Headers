
@interface WFAnnounceNotificationsSettingsClient : WFSettingsClient {
    BBSettingsGateway * _settingsGateway;
}

@property (nonatomic, retain) BBSettingsGateway *settingsGateway;

+ (void)createClientWithCompletionHandler:(id /* block */)arg1;

- (void).cxx_destruct;
- (void)getStateWithCompletionHandler:(id /* block */)arg1;
- (id)initWithGateway:(id)arg1;
- (void)setSettingsGateway:(id)arg1;
- (void)setState:(bool)arg1 completionHandler:(id /* block */)arg2;
- (id)settingsGateway;

@end
