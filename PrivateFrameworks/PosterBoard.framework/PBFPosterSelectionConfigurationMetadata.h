
@interface PBFPosterSelectionConfigurationMetadata : NSObject {
    UIImage * _cachedSnapshot;
    <PBFPosterPreview> * _posterPreview;
}

@property (nonatomic, retain) UIImage *cachedSnapshot;
@property (nonatomic, retain) <PBFPosterPreview> *posterPreview;

- (void).cxx_destruct;
- (id)cachedSnapshot;
- (id)posterPreview;
- (void)setCachedSnapshot:(id)arg1;
- (void)setPosterPreview:(id)arg1;

@end
