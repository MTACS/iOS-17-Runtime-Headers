
@interface STCommunicationSafetyViewModel : NSObject {
    bool  _isCommunicationSafetyAnalyticsEnabled;
    bool  _isCommunicationSafetyNotificationEnabled;
    bool  _isCommunicationSafetyReceivingRestricted;
    bool  _isCommunicationSafetySendingRestricted;
}

@property (nonatomic) bool isCommunicationSafetyAnalyticsEnabled;
@property (nonatomic) bool isCommunicationSafetyNotificationEnabled;
@property (nonatomic) bool isCommunicationSafetyReceivingRestricted;
@property (nonatomic) bool isCommunicationSafetySendingRestricted;

- (bool)isCommunicationSafetyAnalyticsEnabled;
- (bool)isCommunicationSafetyNotificationEnabled;
- (bool)isCommunicationSafetyReceivingRestricted;
- (bool)isCommunicationSafetySendingRestricted;
- (void)setIsCommunicationSafetyAnalyticsEnabled:(bool)arg1;
- (void)setIsCommunicationSafetyNotificationEnabled:(bool)arg1;
- (void)setIsCommunicationSafetyReceivingRestricted:(bool)arg1;
- (void)setIsCommunicationSafetySendingRestricted:(bool)arg1;

@end
