
@interface CSVoiceTriggerStatistics : NSObject <CSVoiceTriggerDelegate> {
    unsigned long long  _consecutiveFalseFirstPassTriggersPerHour;
    unsigned long long  _consecutivePHSRejects;
    unsigned long long  _consecutiveVTRejects;
    unsigned long long  _firstPassTriggerCount;
    NSObject<OS_dispatch_source> * _hourPowerTimer;
    double  _lastPHSReject;
    NSObject<OS_dispatch_queue> * _queue;
    unsigned long long  _triggerCount;
    NSMutableDictionary * _vtDailyMetadata;
    bool  _vtDailyMetadataIsStale;
    NSMutableArray * _vtEstimationStatistics;
    bool  _vtEstimationStatisticsAreStale;
}

@property unsigned long long consecutivePHSRejects;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property double lastPHSReject;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (int)_convertToFirstPassSource:(id)arg1;
- (void)clearFalseFirstPassTriggersPerHour;
- (void)clearFirstPassTriggerCount;
- (void)clearTriggerCount;
- (unsigned long long)consecutivePHSRejects;
- (unsigned long long)firstPassTriggerCount;
- (double)getLastPHSRejectTime;
- (unsigned long long)getPHSRejectCount;
- (unsigned long long)getVTRejectCount;
- (id)getVoiceTriggerDailyMetadata;
- (id)getVoiceTriggerStatistics;
- (void)increaseFalseFirstPassTriggersPerHour;
- (void)increaseTriggerCount;
- (void)incrementFirstPassTriggerCount;
- (void)incrementPHSRejectCount;
- (void)incrementVTRejectCount;
- (id)init;
- (double)lastPHSReject;
- (void)resetPHSRejectCount;
- (void)resetVTEstimationStatistics;
- (void)setConsecutivePHSRejects:(unsigned long long)arg1;
- (void)setLastPHSReject:(double)arg1;
- (unsigned long long)triggerCount;
- (void)updateVTEstimationStatistics:(id)arg1;
- (void)voiceTriggerDidDetectKeyword:(id)arg1 deviceId:(id)arg2;
- (void)voiceTriggerDidDetectNearMiss:(id)arg1 deviceId:(id)arg2;
- (void)voiceTriggerDidDetectSpeakerReject:(id)arg1;
- (void)voiceTriggerDidRejected:(id)arg1 deviceId:(id)arg2;

@end
