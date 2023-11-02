
@interface HDOTAFeatureAvailabilityManager : NSObject <HDHealthDaemonReadyObserver> {
    HDDaemon * _daemon;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableDictionary * _lock_factorFileCache;
    NSObject<OS_os_log> * _loggingCategory;
    HKObserverSet * _observers;
    NSObject<OS_dispatch_queue> * _queue;
    TRIClient * _trialClient;
    <TRINotificationToken> * _trialToken;
    id /* block */  _unitTest_daemonReadyObserverDidFinish;
    NSString * _unitTest_factorPath;
    NSUserDefaults * _unitTest_legacyDisableAndExpiryDefaults;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *factorPackID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, copy) id /* block */ unitTest_daemonReadyObserverDidFinish;
@property (nonatomic, readonly, copy) NSDictionary *unitTest_factorFileCache;
@property (nonatomic, copy) NSString *unitTest_factorPath;
@property (nonatomic, retain) NSUserDefaults *unitTest_legacyDisableAndExpiryDefaults;

- (void).cxx_destruct;
- (id)_fileURLForFileNamed:(id)arg1 factorPath:(id)arg2;
- (void)_unitTest_refreshClientAndNotifyObservers;
- (void)daemonReady:(id)arg1;
- (void)dealloc;
- (id)disableAndExpiryConditionsDictionaryWithError:(id*)arg1;
- (bool)downloadImmediatelyWithError:(id*)arg1;
- (void)downloadWithCompletion:(id /* block */)arg1;
- (id)factorPackID;
- (id)featureAvailabilityInfoForFeature:(id)arg1 error:(id*)arg2;
- (id)initWithDaemon:(id)arg1;
- (void)registerObserver:(id)arg1 queue:(id)arg2;
- (void)setUnitTest_daemonReadyObserverDidFinish:(id /* block */)arg1;
- (void)setUnitTest_factorPath:(id)arg1;
- (void)setUnitTest_legacyDisableAndExpiryDefaults:(id)arg1;
- (id /* block */)unitTest_daemonReadyObserverDidFinish;
- (id)unitTest_factorFileCache;
- (id)unitTest_factorPath;
- (id)unitTest_legacyDisableAndExpiryDefaults;
- (void)unregisterObserver:(id)arg1;

@end
