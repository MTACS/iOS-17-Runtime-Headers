
@interface _DDUIiOSPresentedNotification : NSObject {
    DDUIApplicationInfo * _applicationInfo;
    id /* block */  _completion;
    NSString * _notificationID;
    NSString * _remoteDeviceIdentifier;
}

@property (nonatomic, retain) DDUIApplicationInfo *applicationInfo;
@property (nonatomic, copy) id /* block */ completion;
@property (nonatomic, retain) NSString *notificationID;
@property (nonatomic, retain) NSString *remoteDeviceIdentifier;

- (void).cxx_destruct;
- (id)applicationInfo;
- (id /* block */)completion;
- (id)notificationID;
- (id)remoteDeviceIdentifier;
- (void)setApplicationInfo:(id)arg1;
- (void)setCompletion:(id /* block */)arg1;
- (void)setNotificationID:(id)arg1;
- (void)setRemoteDeviceIdentifier:(id)arg1;

@end
