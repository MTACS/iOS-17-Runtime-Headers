
@interface ATXEngagementTrackedDigestBiomeStream : NSObject {
    ATXCompletedDigestBiomeStream * _completedDigestStream;
    <ATXNotificationResolutionSourceProtocol> * _resolutionSource;
}

- (void).cxx_destruct;
- (id)init;
- (id)initFromCompletedDigestBiomeStream:(id)arg1;
- (id)initFromCompletedDigestBiomeStream:(id)arg1 resolutionSource:(id)arg2;
- (id)publisherFromStartTime:(double)arg1;

@end
