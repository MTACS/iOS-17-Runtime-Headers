
@interface PXPhotosDetailsAssetsSpecManager : PXFeatureSpecManager {
    unsigned long long  _detailsOptions;
}

@property (nonatomic, readonly) unsigned long long detailsOptions;
@property (nonatomic, readonly) PXPhotosDetailsAssetsSpec *spec;

- (id)createSpec;
- (unsigned long long)detailsOptions;
- (id)initWithExtendedTraitCollection:(id)arg1 detailsOptions:(unsigned long long)arg2;
- (id)initWithExtendedTraitCollection:(id)arg1 options:(unsigned long long)arg2;
- (id)initWithExtendedTraitCollection:(id)arg1 options:(unsigned long long)arg2 detailsOptions:(unsigned long long)arg3;
- (Class)specClass;

@end
