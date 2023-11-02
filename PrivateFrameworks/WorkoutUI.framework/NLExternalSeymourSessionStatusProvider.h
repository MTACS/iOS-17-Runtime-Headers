
@interface NLExternalSeymourSessionStatusProvider : NSObject <NLExternalSeymourSessionStatusObservable, NLExternalSeymourSessionStatusProviding> {
    void appBundleIdentifier;
    void eventHub;
    void isExternalSessionActive;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  lastUpdateTimestamp;
    void observers;
    void sessionClient;
    void subscriptionToken;
}

@property (nonatomic) bool externalSessionActive;
@property (nonatomic, retain) id observers;

- (void).cxx_destruct;
- (void)addObserver:(id)arg1;
- (bool)externalSessionActive;
- (id)init;
- (id)initWithDependenciesWrapper:(id)arg1 appBundleIdentifier:(id)arg2;
- (void)notifyObservers;
- (id)observers;
- (void)removeObserver:(id)arg1;
- (void)setExternalSessionActive:(bool)arg1;
- (void)setObservers:(id)arg1;
- (void)updateStatus;

@end
