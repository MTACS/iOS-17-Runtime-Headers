
@interface NCNotificationMutableSystemSettings : NCNotificationSystemSettings

@property (nonatomic) unsigned long long listDisplayStyleSetting;
@property (getter=isScheduledDeliveryEnabled, nonatomic) bool scheduledDeliveryEnabled;
@property (getter=shouldScheduledDeliveryShowNextSummary, nonatomic) bool scheduledDeliveryShowNextSummary;
@property (nonatomic, copy) NSArray *scheduledDeliveryTimes;
@property (getter=isScheduledDeliveryUninitialized, nonatomic) bool scheduledDeliveryUninitialized;

- (void)setListDisplayStyleSetting:(unsigned long long)arg1;
- (void)setScheduledDeliveryEnabled:(bool)arg1;
- (void)setScheduledDeliveryShowNextSummary:(bool)arg1;
- (void)setScheduledDeliveryTimes:(id)arg1;
- (void)setScheduledDeliveryUninitialized:(bool)arg1;

@end
