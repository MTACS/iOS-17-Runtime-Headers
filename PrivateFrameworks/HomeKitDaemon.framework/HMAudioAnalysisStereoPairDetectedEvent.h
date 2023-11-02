
@interface HMAudioAnalysisStereoPairDetectedEvent : NSObject {
    HMDAppleMediaAccessory * _accessory;
    HMAudioAnalysisEventBulletin * _event;
    NSUUID * _notificationUUID;
    unsigned long long  _state;
}

@property (copy) HMDAppleMediaAccessory *accessory;
@property (copy) HMAudioAnalysisEventBulletin *event;
@property (copy) NSUUID *notificationUUID;
@property unsigned long long state;

- (void).cxx_destruct;
- (id)accessory;
- (id)event;
- (id)initWithEventBulletin:(id)arg1 accessory:(id)arg2 notificationUUID:(id)arg3;
- (id)notificationUUID;
- (void)setAccessory:(id)arg1;
- (void)setEvent:(id)arg1;
- (void)setNotificationUUID:(id)arg1;
- (void)setState:(unsigned long long)arg1;
- (unsigned long long)state;

@end
