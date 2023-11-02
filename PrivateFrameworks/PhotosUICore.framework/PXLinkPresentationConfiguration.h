
@interface PXLinkPresentationConfiguration : NSObject {
    NSDate * _earliestAssetDate;
    NSDate * _expirationDate;
    PHAsset * _keyAsset;
    NSDate * _latestAssetDate;
    unsigned long long  _otherItemCount;
    unsigned long long  _photoCount;
    UIImage * _placeholderImage;
    unsigned long long  _videoCount;
}

@property (nonatomic, copy) NSDate *earliestAssetDate;
@property (nonatomic, copy) NSDate *expirationDate;
@property (nonatomic, retain) PHAsset *keyAsset;
@property (nonatomic, copy) NSDate *latestAssetDate;
@property (nonatomic) unsigned long long otherItemCount;
@property (nonatomic) unsigned long long photoCount;
@property (nonatomic, retain) UIImage *placeholderImage;
@property (nonatomic) unsigned long long videoCount;

- (void).cxx_destruct;
- (id)earliestAssetDate;
- (id)expirationDate;
- (id)initWithKeyAsset:(id)arg1;
- (id)keyAsset;
- (id)latestAssetDate;
- (unsigned long long)otherItemCount;
- (unsigned long long)photoCount;
- (id)placeholderImage;
- (void)setEarliestAssetDate:(id)arg1;
- (void)setExpirationDate:(id)arg1;
- (void)setKeyAsset:(id)arg1;
- (void)setLatestAssetDate:(id)arg1;
- (void)setOtherItemCount:(unsigned long long)arg1;
- (void)setPhotoCount:(unsigned long long)arg1;
- (void)setPlaceholderImage:(id)arg1;
- (void)setVideoCount:(unsigned long long)arg1;
- (unsigned long long)videoCount;

@end
