
@interface ANAnalytics : NSObject <ANAnalyticsDailyDelegate> {
    <ANAnalyticsAssistantProtocol> * _assistant;
    <ANAnalyticsDailyProtocol> * _dailyReporter;
    <ANAnalyticsSystemProtocol> * _system;
}

@property (readonly) <ANAnalyticsAssistantProtocol> *assistant;
@property (readonly) <ANAnalyticsDailyProtocol> *dailyReporter;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly) <ANAnalyticsSystemProtocol> *system;

+ (id)shared;

- (void).cxx_destruct;
- (void)announcementEntryAgeLimit:(id)arg1 timeExceeded:(double)arg2 context:(id)arg3;
- (void)announcementFinishedPlaying:(id)arg1 withTime:(double)arg2 ofGroupCount:(long long)arg3 context:(id)arg4;
- (void)announcementPlayed:(id)arg1 withTime:(double)arg2 deadlineViolation:(double)arg3 playbackSource:(unsigned long long)arg4 ofGroupCount:(long long)arg5 context:(id)arg6;
- (void)announcementReceived:(id)arg1 withTime:(double)arg2 receiveTimeType:(unsigned long long)arg3 context:(id)arg4;
- (void)announcementSent:(id)arg1 inHome:(id)arg2 withError:(long long)arg3 withTime:(double)arg4 sendType:(unsigned long long)arg5 ofGroupCount:(long long)arg6 context:(id)arg7;
- (void)announcementsExpired:(id)arg1 ofGroupCount:(long long)arg2 context:(id)arg3;
- (void)announcementsStorageAgeLimit:(id)arg1 context:(id)arg2;
- (id)assistant;
- (void)dailyReport:(id)arg1 withPayload:(id)arg2;
- (void)dailyReportComplete;
- (void)dailyReportError:(long long)arg1;
- (id)dailyReporter;
- (void)error:(long long)arg1;
- (void)error:(long long)arg1 context:(id)arg2;
- (id)initWithSystem:(id)arg1 assistant:(id)arg2 dailyReporter:(id)arg3;
- (void)playbackAction:(unsigned long long)arg1 fromSource:(unsigned long long)arg2 context:(id)arg3;
- (void)recordReachableHomes:(id)arg1;
- (id)system;

@end
