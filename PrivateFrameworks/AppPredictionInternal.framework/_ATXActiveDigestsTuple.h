
@interface _ATXActiveDigestsTuple : NSObject <NSSecureCoding> {
    ATXUserNotificationDigest * _activeScheduledDigest;
    ATXUserNotificationDigest * _activeUpcomingDigest;
    ATXUserNotificationDigest * _justCompletedDigest;
}

@property (nonatomic, readonly) ATXUserNotificationDigest *activeScheduledDigest;
@property (nonatomic, readonly) ATXUserNotificationDigest *activeUpcomingDigest;
@property (nonatomic, readonly) ATXUserNotificationDigest *justCompletedDigest;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)activeScheduledDigest;
- (id)activeUpcomingDigest;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithActiveUpcomingDigest:(id)arg1 activeScheduledDigest:(id)arg2 justCompletedDigest:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithPreviousTuple:(id)arg1 nextDigestEvent:(id)arg2;
- (id)justCompletedDigest;

@end
