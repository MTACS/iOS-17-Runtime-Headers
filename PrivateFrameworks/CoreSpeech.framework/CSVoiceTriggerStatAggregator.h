
@interface CSVoiceTriggerStatAggregator : NSObject <CSDigitalZeroReporting> {
    NSMutableDictionary * _falseWakePhraseDictionary;
    unsigned long long  _lastAggTimeFalseWakeUp;
    unsigned long long  _numFalseWakeUp;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSMutableDictionary *falseWakePhraseDictionary;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long lastAggTimeFalseWakeUp;
@property (nonatomic) unsigned long long numFalseWakeUp;
@property (readonly) Class superclass;

+ (id)sharedAggregator;

- (void).cxx_destruct;
- (id)falseWakePhraseDictionary;
- (id)init;
- (unsigned long long)lastAggTimeFalseWakeUp;
- (void)logAOPFirstPassTriggerWakeupLatency:(float)arg1;
- (void)logFalseWakeUp:(bool)arg1 withPhrase:(id)arg2;
- (void)logSecondPassResult:(int)arg1 eventInfo:(id)arg2 triggerAPWakeUp:(bool)arg3;
- (void)logTimeBasedTriggerLengthSampleCountStatistics:(unsigned long long)arg1 withAOPVTTriggerLengthSampleCount:(unsigned long long)arg2;
- (unsigned long long)numFalseWakeUp;
- (void)reportDigitalZerosWithAudioZeroRun:(float)arg1;
- (void)setFalseWakePhraseDictionary:(id)arg1;
- (void)setLastAggTimeFalseWakeUp:(unsigned long long)arg1;
- (void)setNumFalseWakeUp:(unsigned long long)arg1;

@end
