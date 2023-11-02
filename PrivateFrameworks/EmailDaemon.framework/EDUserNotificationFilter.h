
@interface EDUserNotificationFilter : NSObject {
    <EMBlockedSenderReader> * _blockedSenderReader;
    <EMVIPReader> * _vipReader;
}

@property (nonatomic, readonly) <EMBlockedSenderReader> *blockedSenderReader;
@property (nonatomic, readonly) <EMVIPReader> *vipReader;

- (void).cxx_destruct;
- (bool)_messageNeedsNotification:(id)arg1;
- (id)blockedSenderReader;
- (id)initWithBlockedSenderReader:(id)arg1 vipReader:(id)arg2;
- (id)messagesNeedingNotification:(id)arg1;
- (id)vipReader;

@end
