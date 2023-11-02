
@interface HDHealthAppNewDeviceNotificationService : NSObject <IDSServiceDelegate> {
    IDSService * _notificationService;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) IDSService *notificationService;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)init;
- (id)notificationService;
- (bool)sendNewDeviceNotificationWithMessageKind:(long long)arg1 error:(id*)arg2;
- (void)setNotificationService:(id)arg1;

@end
