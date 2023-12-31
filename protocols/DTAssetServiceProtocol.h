
@protocol DTAssetServiceProtocol <DTXAllowedRPC>

@required

- (id)registerApplicationIdentifier:(NSString *)arg1 manifest:(NSData *)arg2;
- (NSNumber *)startServer;
- (NSNumber *)startServerForApplicationWithDevicePath:(NSString *)arg1;

@end
