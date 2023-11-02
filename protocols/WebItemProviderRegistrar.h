
@protocol WebItemProviderRegistrar <NSObject>

@required

- (void)registerItemProvider:(NSItemProvider *)arg1;

@optional

- (NSData *)dataForClient;
- (<NSItemProviderWriting> *)representingObjectForClient;
- (NSString *)typeIdentifierForClient;

@end
