
@interface SUSUITestAutomationManager : NSObject {
    SUSUIUserDefaultsBasedTestSession * _currentSession;
}

@property (nonatomic, readonly) SUSUIUserDefaultsBasedTestSession *currentSession;
@property (nonatomic, readonly) bool enabled;

+ (id)sharedManager;

- (void).cxx_destruct;
- (void)addResponderDelegate:(id)arg1 forServiceType:(long long)arg2;
- (id)currentSession;
- (void)dealloc;
- (id)description;
- (bool)enabled;
- (id)init;
- (void)initialize;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)resolveStoredXCUISession:(id)arg1;
- (void)setupAutomaticTestingForStoredSession:(id)arg1;

@end
