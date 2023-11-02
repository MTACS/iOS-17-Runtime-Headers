
@interface AAAppSessionManager : NSObject {
    void appSessionManager;
}

- (void).cxx_destruct;
- (void)appSessionDidTerminate;
- (id)createSessionManager;
- (void)endAppSession:(id /* block */)arg1;
- (id)init;
- (id)initWithTrackingConsent:(id)arg1;
- (void)startAppSession;

@end
