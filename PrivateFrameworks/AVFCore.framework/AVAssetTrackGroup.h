
@interface AVAssetTrackGroup : NSObject <NSCopying> {
    AVAssetTrackGroupInternal * _assetTrackGroup;
}

@property (nonatomic, readonly) NSArray *trackIDs;

- (id)_assetComparisonToken;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (unsigned long long)hash;
- (id)init;
- (id)initWithAsset:(id)arg1 trackIDs:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)trackIDs;

@end
