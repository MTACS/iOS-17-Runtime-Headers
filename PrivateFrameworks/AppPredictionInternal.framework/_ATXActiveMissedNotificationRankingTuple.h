
@interface _ATXActiveMissedNotificationRankingTuple : NSObject <NSSecureCoding> {
    ATXMissedNotificationRanking * _activeDeliveredRanking;
    ATXMissedNotificationRanking * _activeUpcomingRanking;
    ATXMissedNotificationRanking * _justCompletedRanking;
}

@property (nonatomic, readonly) ATXMissedNotificationRanking *activeDeliveredRanking;
@property (nonatomic, readonly) ATXMissedNotificationRanking *activeUpcomingRanking;
@property (nonatomic, readonly) ATXMissedNotificationRanking *justCompletedRanking;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)activeDeliveredRanking;
- (id)activeUpcomingRanking;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithActiveUpcomingRanking:(id)arg1 activeDeliveredRanking:(id)arg2 justCompletedRanking:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithPreviousTuple:(id)arg1 nextRankingEvent:(id)arg2;
- (id)justCompletedRanking;

@end
