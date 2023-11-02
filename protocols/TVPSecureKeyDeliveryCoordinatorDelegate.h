
@protocol TVPSecureKeyDeliveryCoordinatorDelegate

@required

- (void)secureKeyDeliveryCoordinator:(TVPSecureKeyDeliveryCoordinator *)arg1 didReceiveUpdatedRentalExpirationDate:(NSDate *)arg2;
- (void)secureKeyDeliveryCoordinator:(TVPSecureKeyDeliveryCoordinator *)arg1 willFailWithError:(NSError *)arg2;
- (void)secureKeyDeliveryCoordinatorWillSucceed:(TVPSecureKeyDeliveryCoordinator *)arg1;

@optional

- (void)secureKeyDeliveryCoordinator:(TVPSecureKeyDeliveryCoordinator *)arg1 didReceiveOfflineKeyData:(NSData *)arg2 forKeyRequest:(TVPSecureKeyRequest *)arg3;
- (void)secureKeyDeliveryCoordinator:(TVPSecureKeyDeliveryCoordinator *)arg1 didReceiveUpdatedRentalExpirationDate:(NSDate *)arg2 playbackStartDate:(NSDate *)arg3;
- (void)secureKeyDeliveryCoordinator:(TVPSecureKeyDeliveryCoordinator *)arg1 didReceiveUpdatedRentalPlaybackStartDate:(NSDate *)arg2;
- (void)secureKeyDeliveryCoordinator:(TVPSecureKeyDeliveryCoordinator *)arg1 willFailWithError:(NSError *)arg2 forKeyRequest:(TVPSecureKeyRequest *)arg3;
- (void)secureKeyDeliveryCoordinatorWillSucceed:(TVPSecureKeyDeliveryCoordinator *)arg1 forKeyRequest:(TVPSecureKeyRequest *)arg2;

@end