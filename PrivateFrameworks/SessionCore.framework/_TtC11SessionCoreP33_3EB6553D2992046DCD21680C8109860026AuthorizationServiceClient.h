
@interface _TtC11SessionCoreP33_3EB6553D2992046DCD21680C8109860026AuthorizationServiceClient : NSObject <ACActivityAuthorizationXPCServer> {
    void authorizationManager;
    void cancellables;
    void connection;
}

- (void).cxx_destruct;
- (bool)areActivitiesEnabledForBundleIdentifier:(id)arg1;
- (bool)areActivitiesEnabledForCurrentProcess;
- (bool)areFrequentPushesEnabledForBundleIdentifier:(id)arg1;
- (bool)areFrequentPushesEnabledForCurrentProcess;
- (id)init;
- (bool)setActivitiesAuthorizationForBundleIdentifier:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (bool)setFrequentPushesEnabledForBundleIdentifier:(id)arg1 options:(id)arg2 error:(id*)arg3;

@end
