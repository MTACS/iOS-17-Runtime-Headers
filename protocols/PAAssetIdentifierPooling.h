
@protocol PAAssetIdentifierPooling <NSObject>

@required

- (void)addAssetIdentifiers:(NSSet *)arg1;
- (void)addAssetIdentifiers:(NSSet *)arg1 accessEventCount:(unsigned long long)arg2;
- (void)drainPool;
- (void)invalidate;

@end
