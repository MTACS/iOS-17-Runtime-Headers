
@interface PXCuratedLibraryLayoutSpecManager : PXFeatureSpecManager {
    NSArray * _availableThumbnailSizes;
    long long  _variant;
}

@property (nonatomic, retain) NSArray *availableThumbnailSizes;
@property (nonatomic, readonly) PXCuratedLibraryLayoutSpec *spec;
@property (nonatomic) long long variant;

- (void).cxx_destruct;
- (id)availableThumbnailSizes;
- (id)createSpec;
- (id)initWithExtendedTraitCollection:(id)arg1 options:(unsigned long long)arg2;
- (id)initWithExtendedTraitCollection:(id)arg1 options:(unsigned long long)arg2 variant:(long long)arg3;
- (void)setAvailableThumbnailSizes:(id)arg1;
- (void)setVariant:(long long)arg1;
- (bool)shouldUpdateSpecForExtendedTraitCollection:(id)arg1 change:(unsigned long long)arg2;
- (Class)specClass;
- (long long)variant;

@end
