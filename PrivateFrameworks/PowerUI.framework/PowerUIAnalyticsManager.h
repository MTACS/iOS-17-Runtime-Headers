
@interface PowerUIAnalyticsManager : NSObject {
    BMSource * _engagementStreamSource;
    NSObject<OS_dispatch_queue> * _eventSubmissionQueue;
    <_DKKnowledgeQuerying> * _knowledgeStore;
    NSObject<OS_os_log> * _log;
}

@property (nonatomic, retain) BMSource *engagementStreamSource;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *eventSubmissionQueue;
@property (nonatomic, retain) <_DKKnowledgeQuerying> *knowledgeStore;
@property (nonatomic, retain) NSObject<OS_os_log> *log;

+ (int)convertTimelineStringToOBCEvent:(id)arg1;
+ (int)obcModeOfOperationToBiomeModeOfOperation:(unsigned long long)arg1;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)chargingStatisticsForSessionBetween:(id)arg1 and:(id)arg2;
- (id)chargingStatisticsSince:(id)arg1;
- (id)engagementStreamSource;
- (id)eventSubmissionQueue;
- (id)init;
- (id)knowledgeStore;
- (id)log;
- (void)printExistingEvents;
- (void)setEngagementStreamSource:(id)arg1;
- (void)setEventSubmissionQueue:(id)arg1;
- (void)setKnowledgeStore:(id)arg1;
- (void)setLog:(id)arg1;
- (id)stringFromEngagementEvent:(id)arg1;
- (bool)submitEngagementEventWithBatteryLevel:(id)arg1 targetSoC:(id)arg2 predictedEndOfCharge:(id)arg3 modeOfOperation:(int)arg4 eventType:(int)arg5;

@end
