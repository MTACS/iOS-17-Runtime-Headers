
@protocol MSPSenderETAControllerDelegate <NSObject>

@required

- (void)invalidateActiveHandlesForSenderController:(MSPSenderETAController *)arg1;
- (void)senderController:(MSPSenderETAController *)arg1 didInvalidateSharedTripWithError:(NSError *)arg2;
- (void)senderController:(MSPSenderETAController *)arg1 didStartSharingWithGroupIdentifier:(NSString *)arg2;

@end
