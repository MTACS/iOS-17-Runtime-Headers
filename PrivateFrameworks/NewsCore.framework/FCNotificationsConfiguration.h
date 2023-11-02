
@interface FCNotificationsConfiguration : NSObject {
    NSArray * _preSubscribedNotificationsChannelIDs;
    NSArray * _recommendedNotificationChannelIDs;
}

@property (nonatomic, readonly, copy) NSArray *preSubscribedNotificationsChannelIDs;
@property (nonatomic, readonly, copy) NSArray *recommendedNotificationChannelIDs;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithPresubscribedChannelIDs:(id)arg1 recommendedNotificationChannelIDs:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)preSubscribedNotificationsChannelIDs;
- (id)recommendedNotificationChannelIDs;

@end
