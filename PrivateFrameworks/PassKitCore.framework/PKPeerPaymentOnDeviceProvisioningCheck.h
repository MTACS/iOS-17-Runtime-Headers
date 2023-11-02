
@interface PKPeerPaymentOnDeviceProvisioningCheck : NSObject

+ (bool)_hasPeerPaymentPassProvisionedForAccount:(id)arg1 passLibraryDataProvider:(id)arg2;
+ (id)_peerPaymentPassForAccount:(id)arg1 passLibraryDataProvider:(id)arg2;
+ (bool)peerPaymentPassIsProvisionedOnDeviceForAccount:(id)arg1;
+ (bool)peerPaymentPassIsProvisionedOnDeviceForAccount:(id)arg1 passLibraryDataProvider:(id)arg2;

@end
