
@interface HMDRemoteMessageNotifications : HMFObject {
    struct hmf_unfair_data_lock_s { 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } lock; 
    }  _lock;
    NSMapTable * _sessionNotificationPayloads;
}

@property (nonatomic, retain) NSMapTable *sessionNotificationPayloads;

+ (void)initialize;
+ (bool)messageExpectsNotificationResponse:(id)arg1;
+ (id)messagesWithNotificationResponses;

- (void).cxx_destruct;
- (id)_notificationPayloadsForDevice:(id)arg1;
- (void)addNotificationPayload:(id)arg1 identifier:(id)arg2 device:(id)arg3;
- (void)clearNotificationsForDevice:(id)arg1;
- (id)description;
- (id)init;
- (id)notificationPayloadWithIdentifier:(id)arg1 device:(id)arg2;
- (void)removeNotificationPayloadWithIdentifier:(id)arg1 device:(id)arg2;
- (id)sessionNotificationPayloads;
- (void)setSessionNotificationPayloads:(id)arg1;

@end
