
@interface ATXDailyNotificationsAccumulator : NSObject {
    NSArray * _allDeliveredNotifications;
}

@property (nonatomic, readonly, copy) NSArray *allDeliveredNotifications;

- (void).cxx_destruct;
- (id)allDeliveredNotifications;
- (id)init;
- (bool)successfullyAccumulatedNotificationEvents;

@end
