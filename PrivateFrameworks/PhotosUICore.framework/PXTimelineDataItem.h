
@interface PXTimelineDataItem : NSObject {
    PHAssetCollection * _assetCollection;
    PXTimelineCrop * _suggestedCrop;
}

@property (nonatomic, retain) PHAssetCollection *assetCollection;
@property (nonatomic, retain) PXTimelineCrop *suggestedCrop;

- (void).cxx_destruct;
- (id)assetCollection;
- (id)initWithAssetCollection:(id)arg1 suggestedCrop:(id)arg2;
- (void)setAssetCollection:(id)arg1;
- (void)setSuggestedCrop:(id)arg1;
- (id)suggestedCrop;

@end
