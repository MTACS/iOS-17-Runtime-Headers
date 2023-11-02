
@protocol STDynamicActivityAttributionClientHandle <NSObject>

@required

- (struct { unsigned int x1[8]; })auditToken;
- (void)currentAttributionsDidChange:(NSArray *)arg1;

@end
