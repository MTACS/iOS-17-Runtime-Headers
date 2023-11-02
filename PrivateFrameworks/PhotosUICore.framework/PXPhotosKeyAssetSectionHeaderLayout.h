
@interface PXPhotosKeyAssetSectionHeaderLayout : PXGLayout <PXChangeObserver, PXGDisplayAssetSource, PXGStringSource, PXGViewSource, PXPhotosBannerInvalidationDelegate, PXPhotosSectionedLayoutHeader> {
    PXNumberAnimator * _bannerAppearanceAnimator;
    <PXPhotosBannerProvider> * _bannerProvider;
    unsigned short  _bannerVersion;
    UIView<PXPhotosBannerView> * _bannerView;
    struct CGSize { 
        double width; 
        double height; 
    }  _bannerViewSize;
    long long  _currentBannerRequestVersion;
    PXAssetsDataSource * _dataSource;
    long long  _desiredBannerRequestVersion;
    bool  _isDisplayingBanner;
    <PXDisplayAssetFetchResult> * _keyAssetFetch;
    unsigned short  _keyAssetVersion;
    struct { 
        unsigned long long needsUpdate; 
        unsigned long long updated; 
        bool isPerformingUpdate; 
        bool willPerformUpdate; 
    }  _postUpdateFlags;
    struct PXSimpleIndexPath { 
        long long dataSourceIdentifier; 
        long long section; 
        long long item; 
        long long subitem; 
    }  _sectionIndexPath;
    bool  _shouldHideBanner;
    PXPhotosLayoutSpec * _spec;
    NSString * _title;
    NSDictionary * _titleAttributes;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _titleBaseFrame;
    unsigned short  _titleVersion;
    struct { 
        unsigned long long needsUpdate; 
        unsigned long long updated; 
        bool isPerformingUpdate; 
        bool willPerformUpdate; 
    }  _updateFlags;
    PXPhotosViewModel * _viewModel;
    bool  isInSelectMode;
    PXSelectionSnapshot * selectionSnapshot;
}

@property (nonatomic, retain) <PXPhotosBannerProvider> *bannerProvider;
@property (nonatomic, retain) UIView<PXPhotosBannerView> *bannerView;
@property (nonatomic) struct CGSize { double x1; double x2; } bannerViewSize;
@property (nonatomic, retain) PXAssetsDataSource *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isInSelectMode;
@property (nonatomic) struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; } sectionIndexPath;
@property (nonatomic, retain) PXSelectionSnapshot *selectionSnapshot;
@property (nonatomic) bool shouldHideBanner;
@property (nonatomic, retain) PXPhotosLayoutSpec *spec;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSDictionary *titleAttributes;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } titleBaseFrame;
@property (nonatomic, readonly) PXPhotosViewModel *viewModel;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_bestCropRectForAspectRatio:(double)arg1;
- (void)_bumpAssetVersion;
- (void)_bumpBannerVersion;
- (void)_bumpTitleVersion;
- (double)_floatOffset;
- (void)_invalidateAnimations;
- (void)_invalidateBannerRequest;
- (void)_invalidateBannerView;
- (void)_invalidateContent;
- (void)_invalidateContentSize;
- (void)_invalidateFloatParameters;
- (void)_invalidateKeyAssetFetch;
- (void)_invalidateTitle;
- (void)_invalidateTitleMetrics;
- (struct CGSize { double x1; double x2; })_keyAssetSize;
- (void)_loadBannerIfNecessary;
- (void)_transitionToBannerView:(id)arg1 version:(long long)arg2;
- (void)_updateAnimations;
- (void)_updateBannerView;
- (void)_updateContent;
- (void)_updateContentSize;
- (void)_updateFloatParameters;
- (void)_updateKeyAssetFetch;
- (void)_updateTitle;
- (void)_updateTitleMetrics;
- (void)appearStateDidChange;
- (id)attributedStringForSpriteAtIndex:(unsigned int)arg1 inLayout:(id)arg2;
- (id)axSpriteIndexes;
- (id)bannerProvider;
- (id)bannerView;
- (struct CGSize { double x1; double x2; })bannerViewSize;
- (id)dataSource;
- (unsigned long long)desiredPlaceholderStyleInLayout:(id)arg1;
- (void)didUpdate;
- (id)displayAssetFetchResultForSpritesInRange:(struct _PXGSpriteIndexRange { unsigned int x1; unsigned int x2; })arg1 inLayout:(id)arg2;
- (id)initWithViewModel:(id)arg1;
- (bool)isInSelectMode;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (void)photosBannerProviderInvalidateLoadedBanner:(id)arg1;
- (void)referenceSizeDidChange;
- (struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })sectionIndexPath;
- (id)selectionSnapshot;
- (void)setBannerProvider:(id)arg1;
- (void)setBannerView:(id)arg1;
- (void)setBannerViewSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setDataSource:(id)arg1;
- (void)setIsInSelectMode:(bool)arg1;
- (void)setSectionIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg1;
- (void)setSelectionSnapshot:(id)arg1;
- (void)setShouldHideBanner:(bool)arg1;
- (void)setSpec:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleAttributes:(id)arg1;
- (void)setTitleBaseFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)shouldHideBanner;
- (id)spec;
- (id)stringAtIndex:(unsigned int)arg1 inLayout:(id)arg2;
- (id)stringAttributesAtIndex:(unsigned int)arg1 inLayout:(id)arg2;
- (id)title;
- (id)titleAttributes;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })titleBaseFrame;
- (void)update;
- (long long)verticalAlignmentForStringAtIndex:(unsigned int)arg1 inLayout:(id)arg2;
- (Class)viewClassForSpriteAtIndex:(unsigned int)arg1 inLayout:(id)arg2;
- (id)viewModel;
- (id)viewUserDataForSpriteAtIndex:(unsigned int)arg1 inLayout:(id)arg2;
- (void)visibleRectDidChange;
- (void)willUpdate;

@end
