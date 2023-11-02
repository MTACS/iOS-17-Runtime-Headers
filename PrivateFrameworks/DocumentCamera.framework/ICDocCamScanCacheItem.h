
@interface ICDocCamScanCacheItem : NSObject {
    NSArray * _docInfos;
    ICDocCamImageCache * _imageCache;
}

@property (nonatomic, retain) NSArray *docInfos;
@property (nonatomic, retain) ICDocCamImageCache *imageCache;

- (void).cxx_destruct;
- (void)deleteCacheImages;
- (id)docInfoForScanDataDelegate:(id)arg1;
- (id)docInfos;
- (void)doneBuildingCache;
- (id)imageCache;
- (id)imageForScanDataDelegateIdentifier:(id)arg1;
- (id)init;
- (id)initWithImageCache:(id)arg1 docInfos:(id)arg2;
- (void)setDocInfos:(id)arg1;
- (void)setImageCache:(id)arg1;

@end
