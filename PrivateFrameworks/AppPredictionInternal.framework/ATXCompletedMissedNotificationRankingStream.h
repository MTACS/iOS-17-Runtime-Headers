
@interface ATXCompletedMissedNotificationRankingStream : NSObject {
    ATXMissedNotificationRankingBiomeStream * _rawMNREventStream;
}

- (void).cxx_destruct;
- (id)init;
- (id)initFromMissedNotificationRankingEventBiomeStream:(id)arg1;
- (id)publisherFromStartTime:(double)arg1;

@end
