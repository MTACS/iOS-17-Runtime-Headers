
@protocol PGPotentialUpNextMemoryProtocol <NSObject>

@required

- (bool)isBlockedByUserFeedback;
- (PHAsset *)keyAsset;
- (NSString *)keyAssetLocalIdentifier;
- (PHMemory *)memory;
- (NSString *)memoryLocalIdentifier;
- (NSString *)subtitle;
- (NSString *)title;

@end
