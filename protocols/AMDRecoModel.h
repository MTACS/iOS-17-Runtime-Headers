
@protocol AMDRecoModel <NSObject>

@required

- (long long)getAssetCreationTimestamp;
- (NSString *)getId;
- (short)getVersion;

@end
