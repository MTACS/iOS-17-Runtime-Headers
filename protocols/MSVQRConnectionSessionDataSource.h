
@protocol MSVQRConnectionSessionDataSource <NSObject>

@required

- (IDSAccount *)account;
- (NSString *)applicationProtocol;
- (NSUUID *)groupSessionIdentifier;
- (NSDictionary *)groupSessionOptions;
- (NSString *)pluginIdentifier;
- (NSString *)rpcPath;
- (IDSService *)service;
- (id /* block */)trustHandler:(void *)arg1; // needs 1 arg types, found 14: id /* block */, NSObject<OS_sec_protocol_metadata> *, NSObject<OS_sec_trust> *, NSObject<OS_dispatch_queue> *, id /* block */, void*, void, id /* block */, bool, NSError *, void*, void*, id, SEL

@end
