
@protocol PBUIPosterReplicaSourceObserver <NSObject>

@required

- (long long)effectiveStyle;
- (void)setNeedsSourceUpdate;

@end
