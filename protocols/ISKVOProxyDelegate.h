
@protocol ISKVOProxyDelegate <NSObject>

@required

- (void)observeChangeforKVOProxyIdentifier:(NSString *)arg1 keyPath:(NSString *)arg2 change:(NSDictionary *)arg3;

@end
