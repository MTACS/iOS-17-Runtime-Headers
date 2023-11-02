
@interface SGCuratedChangeNotificationsAddressBookListener : SGCuratedChangeNotificationsBaseListener {
    <NSObject> * _notificationCenterToken;
    NSObject<OS_dispatch_queue> * _notificationQueue;
}

- (void).cxx_destruct;
- (void)startListening;
- (void)stopListening;

@end
