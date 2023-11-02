
@interface PXPhotosLayoutSpecManager : PXFeatureSpecManager {
    NSArray * _availableThumbnailSizes;
    long long  _gridStyle;
    PXPhotosHeaderCustomizationModel * _headerCustomizationModel;
    bool  _sectionHeadersEnabled;
}

@property (nonatomic, retain) NSArray *availableThumbnailSizes;
@property (nonatomic) long long gridStyle;
@property (nonatomic, readonly) PXPhotosHeaderCustomizationModel *headerCustomizationModel;
@property (nonatomic, readonly) bool sectionHeadersEnabled;
@property (nonatomic, readonly) PXPhotosLayoutSpec *spec;

- (void).cxx_destruct;
- (id)availableThumbnailSizes;
- (id)createSpec;
- (long long)gridStyle;
- (id)headerCustomizationModel;
- (id)initWithExtendedTraitCollection:(id)arg1 options:(unsigned long long)arg2;
- (id)initWithExtendedTraitCollection:(id)arg1 options:(unsigned long long)arg2 enableSectionHeaders:(bool)arg3;
- (bool)sectionHeadersEnabled;
- (void)setAvailableThumbnailSizes:(id)arg1;
- (void)setGridStyle:(long long)arg1;
- (bool)shouldUpdateSpecForExtendedTraitCollection:(id)arg1 change:(unsigned long long)arg2;
- (Class)specClass;

@end
