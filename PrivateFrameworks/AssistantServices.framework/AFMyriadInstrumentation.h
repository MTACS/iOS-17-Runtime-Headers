
@interface AFMyriadInstrumentation : NSObject {
    CDASchemaCDAScoreBoosters * _currentBoost;
    CDASchemaCDAScoreBoosters * _previousBoosts;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, readonly) CDASchemaCDAScoreBoosters *currentBoost;

- (void).cxx_destruct;
- (id)_boostTypeAsString:(unsigned char)arg1;
- (id)_createSchemaClientEvent:(id)arg1;
- (void)_logRequestLinkMessageRequestId:(id)arg1 cdaId:(id)arg2;
- (void)_sendAndLogClientEvent:(id)arg1 stState:(int)arg2 atTimestamp:(unsigned long long)arg3;
- (id)currentBoost;
- (void)getPreviousBoostsWithCompletion:(id /* block */)arg1;
- (id)init;
- (void)logCDADeviceStateActivityEnded:(int)arg1 withCdaId:(id)arg2 withTimestamp:(unsigned long long)arg3;
- (void)logCDADeviceStateActivityStartedOrChanged:(int)arg1 withTrigger:(int)arg2 withCdaId:(id)arg3 withTimestamp:(unsigned long long)arg4;
- (void)logCDAElectionAdvertisingEnded:(int)arg1 withCdaId:(id)arg2 withTimestamp:(unsigned long long)arg3;
- (void)logCDAElectionAdvertisingEnding:(int)arg1 withCdaId:(id)arg2 withTimestamp:(unsigned long long)arg3;
- (void)logCDAElectionAdvertisingStarted:(int)arg1 withCdaId:(id)arg2 withTimestamp:(unsigned long long)arg3;
- (void)logCDAElectionAdvertisingStarting:(int)arg1 withDelay:(float)arg2 withInterval:(float)arg3 withCdaId:(id)arg4 withTimestamp:(unsigned long long)arg5;
- (void)logCDAElectionDecisionMade:(int)arg1 withDecision:(int)arg2 withPreviousDecision:(int)arg3 timeSincePreviousDecision:(unsigned long long)arg4 withWinningDevice:(id)arg5 withThisDevice:(id)arg6 withParticipants:(id)arg7 withRawScore:(unsigned int)arg8 withBoost:(id)arg9 withCdaId:(id)arg10 currentRequestId:(id)arg11 withTimestamp:(unsigned long long)arg12;
- (void)logCDAElectionDecisionMadeDebug:(int)arg1 withCrossDeviceArbitrationAllowed:(bool)arg2 advertisementData:(id)arg3 withDeviceGroup:(unsigned int)arg4 withCdaId:(id)arg5 withTimestamp:(unsigned long long)arg6;
- (void)logCDAElectionTimerEnded:(int)arg1 withCdaId:(id)arg2 withTimestamp:(unsigned long long)arg3;
- (void)resetCurrentBoost;
- (void)updateBoost:(unsigned char)arg1 value:(unsigned int)arg2;
- (void)updateIsTrump:(bool)arg1 withReason:(int)arg2;

@end
