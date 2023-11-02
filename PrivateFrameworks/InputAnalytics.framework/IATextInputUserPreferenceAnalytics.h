
@interface IATextInputUserPreferenceAnalytics : NSObject {
    IATextInputUserPreferenceServer * _server;
}

@property (nonatomic, retain) IATextInputUserPreferenceServer *server;

- (void).cxx_destruct;
- (id)init;
- (id)initWithEventHandler:(id /* block */)arg1;
- (void)reportStateForUserPreference:(long long)arg1;
- (void)reportStateForUserPreferences:(id)arg1;
- (id)server;
- (void)setServer:(id)arg1;

@end
