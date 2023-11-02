
@protocol DMTWiFiPrimitives <NSObject>

@required

- (void)cancelJoiningWiFi;
- (void)disassociateWiFiNetworkWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)joinWiFiNetworkWithCredential:(void *)arg1 timeout:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: DMTNetworkCredential *, double, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (bool)wifiInterfacesAvailable;
- (NSString *)wifiNetworkName;

@end
