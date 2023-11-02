
@protocol LPiTunesMediaUnresolvedMetadata <NSObject>

@required

- (NSArray *)assetsToFetch;
- (LPSpecializationMetadata *)resolve;

@end
