
@interface PXCMMAssetPreparationOptions : NSObject {
    bool  _publishAsOriginal;
    bool  _publishLivePhotoAsStill;
    bool  _removeLocationData;
}

@property (nonatomic) bool publishAsOriginal;
@property (nonatomic) bool publishLivePhotoAsStill;
@property (nonatomic) bool removeLocationData;

- (id)init;
- (bool)publishAsOriginal;
- (bool)publishLivePhotoAsStill;
- (bool)removeLocationData;
- (void)setPublishAsOriginal:(bool)arg1;
- (void)setPublishLivePhotoAsStill:(bool)arg1;
- (void)setRemoveLocationData:(bool)arg1;

@end
