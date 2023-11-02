
@interface SUCoreSimulate : NSObject {
    int  _alterationsPerformed;
    NSDictionary * _eventAlterations;
    SUCoreSimulateEvent * _lastAlteration;
    id /* block */  _registeredCallback;
    NSObject<OS_dispatch_queue> * _simulateQueue;
    bool  _simulatorEnabled;
}

@property (nonatomic) int alterationsPerformed;
@property (nonatomic, retain) NSDictionary *eventAlterations;
@property (nonatomic, retain) SUCoreSimulateEvent *lastAlteration;
@property (nonatomic, copy) id /* block */ registeredCallback;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *simulateQueue;
@property (nonatomic, readonly) bool simulatorEnabled;

+ (id)sharedSimulator;

- (void).cxx_destruct;
- (long long)_actionFromString:(id)arg1;
- (void)_adoptAllEventAlterations:(id)arg1;
- (void)_dumpAllEventAlterations;
- (id)_eventFromLine:(id)arg1;
- (bool)_isImmediateEvent:(id)arg1;
- (bool)_isValidEvent:(id)arg1;
- (id)_locateEventForModule:(id)arg1 forIdentity:(id)arg2 withTrigger:(long long)arg3 forEvent:(id)arg4 inState:(id)arg5;
- (bool)_parseErrorCodeFromString:(id)arg1 destination:(long long*)arg2;
- (bool)_parseEventBooleanFromString:(id)arg1 destination:(long long*)arg2;
- (bool)_parseIntFromString:(id)arg1 destination:(int*)arg2;
- (bool)_parseOptionalEntriesInLineFromWords:(id)arg1 argStartAt:(int*)arg2 argEndAt:(int*)arg3 argDuration:(int*)arg4 argUntilStop:(id*)arg5 argAssetBuildVersions:(id*)arg6 argAssetProductVersions:(id*)arg7 argAssetAttributesPlist:(id*)arg8 argAssetState:(id*)arg9 argUpdateInfoPlist:(id*)arg10 argErrorDomain:(id*)arg11 argErrorCode:(long long*)arg12 argErrorRecoverable:(long long*)arg13;
- (id)_performOffQueueEvent:(id)arg1;
- (id)_performSimulatedEventAlteration:(id)arg1;
- (void)_performingAlteration:(id)arg1;
- (long long)_triggerFromString:(id)arg1;
- (void)_triggerOffQueueAlteration:(id)arg1;
- (void)adoptAllEventAlterations:(id)arg1;
- (int)alterationsPerformed;
- (id)begin:(id)arg1 atFunction:(id)arg2;
- (void)clearAllEventAlterations;
- (int)countOfAlterationsPerformed;
- (void)dumpAllEventAlterations;
- (id)end:(id)arg1 atFunction:(id)arg2;
- (id)eventAlterations;
- (id)fsm:(id)arg1 forEvent:(id)arg2 inState:(id)arg3;
- (id)generateError:(id)arg1 ofDomain:(id)arg2 withCode:(long long)arg3;
- (id)init;
- (id)lastAlteration;
- (id)lastAlterationPerformed;
- (void)registerCallbackHandler:(id /* block */)arg1;
- (id /* block */)registeredCallback;
- (void)setAlterationsPerformed:(int)arg1;
- (void)setEventAlterations:(id)arg1;
- (void)setLastAlteration:(id)arg1;
- (void)setRegisteredCallback:(id /* block */)arg1;
- (id)simulateQueue;
- (bool)simulatorEnabled;

@end
