
@interface CNACTStewieFacade : NSObject <CNACTStewieFacade, CTStewieStateMonitorDelegate> {
    CNTimestamped * _avocetMemo;
    CoreTelephonyClient * _coreTelephonyClient;
    CNTimestamped * _emergencyMemo;
    CTStewieStateMonitor * _stateMonitor;
}

@property (readonly) NSArray *avocetTerms;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSArray *emergencyTerms;
@property (readonly) unsigned long long hash;
@property (readonly) bool isAvocetEnabled;
@property (readonly) bool isEmergencyEnabled;
@property (readonly) Class superclass;

+ (double)ageOfMemo:(id)arg1;
+ (bool)isMemoValid:(id)arg1;
+ (bool)isMessagesApp;
+ (id)localizedAvocetPhrases;
+ (id)localizedEmergencyPhrases;

- (void).cxx_destruct;
- (id)avocetTerms;
- (id)description;
- (id)emergencyTerms;
- (id)init;
- (id)initWithCoreTelephonyClient:(id)arg1 stateMonitor:(id)arg2;
- (bool)isAvocetEnabled;
- (bool)isEmergencyEnabled;
- (id)numbers;
- (void)startMonitoring;
- (void)stateChanged:(id)arg1;
- (bool)withLock_isAvocetEnabled;
- (bool)withLock_isEmergencyEnabled;

@end
