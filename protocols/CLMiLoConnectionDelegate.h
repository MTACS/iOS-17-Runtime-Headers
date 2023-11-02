
@protocol CLMiLoConnectionDelegate <NSObject>

@optional

- (void)miLoConnection:(CLMiLoConnection *)arg1 connectServiceDidFailWithServiceIdentifier:(NSUUID *)arg2 withError:(NSError *)arg3;
- (void)miLoConnection:(CLMiLoConnection *)arg1 createServiceDidFailWithError:(NSError *)arg2;
- (void)miLoConnection:(CLMiLoConnection *)arg1 deleteServiceDidFailForServiceWithIdentifier:(NSUUID *)arg2 withError:(NSError *)arg3;
- (void)miLoConnection:(CLMiLoConnection *)arg1 didCompleteClientRequest:(NSUUID *)arg2 withError:(NSError *)arg3;
- (void)miLoConnection:(CLMiLoConnection *)arg1 didCompleteObservationWithMetaInformation:(CLMiLoFingerprintMetaInfo *)arg2;
- (void)miLoConnection:(CLMiLoConnection *)arg1 didCreateServiceWithServiceIdentifier:(NSUUID *)arg2;
- (void)miLoConnection:(CLMiLoConnection *)arg1 didDeleteServiceWithServiceIdentifier:(NSUUID *)arg2;
- (void)miLoConnection:(CLMiLoConnection *)arg1 didExportMiLoDatabaseWithExportDir:(NSString *)arg2 withFileName:(NSString *)arg3 withSandboxExtensionToken:(NSString *)arg4;
- (void)miLoConnection:(CLMiLoConnection *)arg1 didFindMyServicesWithServiceDescriptors:(NSArray *)arg2;
- (void)miLoConnection:(CLMiLoConnection *)arg1 didGetGenericEventNotificationWithEventType:(unsigned long long)arg2 withDescription:(NSString *)arg3 withError:(NSError *)arg4;
- (void)miLoConnection:(CLMiLoConnection *)arg1 didUpdateMiLoConnectionStatus:(CLMiLoConnectionStatus *)arg2;
- (void)miLoConnection:(CLMiLoConnection *)arg1 didUpdatePrediction:(CLMiLoPrediction *)arg2;
- (void)miLoConnection:(CLMiLoConnection *)arg1 didUpdateServiceStatus:(CLMiLoServiceStatus *)arg2;
- (void)miLoConnection:(CLMiLoConnection *)arg1 disconnectServiceDidFailWithServiceIdentifier:(NSUUID *)arg2 withError:(NSError *)arg3;
- (void)miLoConnection:(CLMiLoConnection *)arg1 queryMiLoConnectionStatusDidFailWithError:(NSError *)arg2;
- (void)miLoConnection:(CLMiLoConnection *)arg1 queryServiceDidFailWithError:(NSError *)arg2;

@end
