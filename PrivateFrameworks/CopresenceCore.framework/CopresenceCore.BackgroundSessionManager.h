
@interface CopresenceCore.BackgroundSessionManager : NSObject {
    void delegate;
    void featureFlags;
    void mockIDSGroupSessionProvider;
    void personalPresenceControllerProvider;
    void presenceControllerProvider;
    void presenceSessions;
    void queue;
    void serviceProvider;
    void sessionSuspensionControllerProvider;
    void sessions;
}

- (void).cxx_destruct;
- (id)init;

@end
