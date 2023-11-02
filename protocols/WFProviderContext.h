
@protocol WFProviderContext <NSObject>

@required

- (void)cancel;
- (<WFNetworkListRecord> *)network;
- (long long)requestedFields;

@end
