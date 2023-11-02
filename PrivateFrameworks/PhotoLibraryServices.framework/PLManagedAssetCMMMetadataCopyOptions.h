
@interface PLManagedAssetCMMMetadataCopyOptions : NSObject {
    bool  _shouldCopyLocationData;
    bool  _shouldCopySpatialOverCaptureResources;
    bool  _shouldCopyTitleDescriptionAndKeywords;
}

@property (nonatomic) bool shouldCopyLocationData;
@property (nonatomic) bool shouldCopySpatialOverCaptureResources;
@property (nonatomic) bool shouldCopyTitleDescriptionAndKeywords;

- (void)setShouldCopyLocationData:(bool)arg1;
- (void)setShouldCopySpatialOverCaptureResources:(bool)arg1;
- (void)setShouldCopyTitleDescriptionAndKeywords:(bool)arg1;
- (bool)shouldCopyLocationData;
- (bool)shouldCopySpatialOverCaptureResources;
- (bool)shouldCopyTitleDescriptionAndKeywords;

@end
