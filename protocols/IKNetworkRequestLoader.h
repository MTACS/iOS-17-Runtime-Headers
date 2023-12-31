
@protocol IKNetworkRequestLoader <NSObject>

@required

- (NSString *)identifier;
- (NSString *)parentIdentifier;
- (<IKNetworkRequestRecord> *)recordForResource:(long long)arg1 withInitiator:(long long)arg2;
- (void)setParentIdentifier:(NSString *)arg1;

@end
