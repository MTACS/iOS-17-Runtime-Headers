
@protocol CLIdentifiableClientProtocol <NSObject>

@required

- (NSString *)identityToken;
- (CLLocationManager *)manager;
- (void)setIdentityToken:(NSString *)arg1;
- (void)setManager:(CLLocationManager *)arg1;
- (void)setStorageToken:(NSData *)arg1;
- (void)setWeakClient:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, <CLIdentifiableClientProtocol> *, id /* block */, void*
- (NSData *)storageToken;
- (void)updateIdentityToken:(NSString *)arg1 withStorageToken:(NSData *)arg2;
- (id /* block */)weakClient:(void *)arg1; // needs 1 arg types, found 4: id /* block */, void*, id, SEL

@end
