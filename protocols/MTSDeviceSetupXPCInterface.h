
@protocol MTSDeviceSetupXPCInterface

@required

- (void)configureDeviceWithName:(void *)arg1 room:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: NSString *, MTSDeviceSetupRoom *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)fetchRoomsInHome:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: MTSDeviceSetupHome *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)pairDeviceInHome:(void *)arg1 onboardingPayload:(void *)arg2 uuid:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 9: MTSDeviceSetupHome *, NSString *, NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)selectThreadNetworkFromScanResults:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, MTSThreadNetworkAssociation *, NSError *, void*
- (void)selectWiFiNetworkFromScanResults:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, MTSWiFiNetworkAssociation *, NSError *, void*
- (void)validateDeviceCredential:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: MTSDeviceCredential *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
