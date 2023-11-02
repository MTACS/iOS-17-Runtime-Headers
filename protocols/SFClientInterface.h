
@protocol SFClientInterface

@required

- (void)haveNOIs:(NSSet *)arg1 tornDown:(bool)arg2;
- (void)updateNOI:(NWNetworkOfInterest *)arg1 keyPath:(NSString *)arg2 change:(NSDictionary *)arg3;

@end
