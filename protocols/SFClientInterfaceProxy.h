
@protocol SFClientInterfaceProxy <NSObject>

@optional

- (void)proxyHaveNOIs:(NSSet *)arg1 tornDown:(bool)arg2;
- (void)proxyUpdateNOI:(NWNetworkOfInterest *)arg1 keyPath:(NSString *)arg2 change:(NSDictionary *)arg3;

@end
