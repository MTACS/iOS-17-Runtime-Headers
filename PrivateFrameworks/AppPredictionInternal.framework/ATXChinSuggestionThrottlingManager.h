
@interface ATXChinSuggestionThrottlingManager : NSObject {
    unsigned long long  _debuggingRequestSequenceNumber;
    NSUserDefaults * _defaults;
    double  _maxWallClockTimeCredits;
    ATXChinSuggestionRequest * _pendingRequest;
    NSObject<OS_dispatch_queue> * _requestManagementQueue;
    NSObject<OS_dispatch_queue> * _requestProcessingQueue;
    bool  _requestProcessingQueueInUse;
    double  _wallClockTimeCreditsReplenishingRate;
}

- (void).cxx_destruct;
- (void)_acceptOrRejectPendingRequestIfExists;
- (void)_acceptPendingRequest;
- (void)_rejectPendingRequest;
- (id)init;
- (void)logAcceptedEventToCoreAnalytics;
- (void)logReceivedEventToCoreAnalytics;
- (void)logRejectedEventToCoreAnalytics;
- (void)logWallClockTimeToCoreAnalytics:(double)arg1;
- (double)now;
- (void)replenishWallClockTimeCredits;
- (void)scheduleRequest:(id)arg1;
- (void)setTimestampWallClockTimeCreditsLastReplenished:(double)arg1;
- (void)setWallClockTimeCredits:(double)arg1;
- (double)timestampWallClockTimeCreditsLastReplenished;
- (double)wallClockTimeCredits;

@end
