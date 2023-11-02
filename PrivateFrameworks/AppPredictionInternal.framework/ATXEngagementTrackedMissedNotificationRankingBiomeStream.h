
@interface ATXEngagementTrackedMissedNotificationRankingBiomeStream : NSObject {
    ATXCompletedMissedNotificationRankingStream * _completedRankingStream;
    <ATXNotificationResolutionSourceProtocol> * _resolutionSource;
}

- (void).cxx_destruct;
- (id)init;
- (id)initFromCompletedMNRBiomeStream:(id)arg1;
- (id)initFromCompletedMNRBiomeStream:(id)arg1 resolutionSource:(id)arg2;
- (id)publisherFromStartTime:(double)arg1;

@end
