
@protocol PAAssetIdentifierPoolDelegate <NSObject>

@required

- (void)recordAccessToAssetIdentifiers:(NSSet *)arg1 withVisibilityState:(long long)arg2 accessEventCount:(unsigned long long)arg3;

@end
