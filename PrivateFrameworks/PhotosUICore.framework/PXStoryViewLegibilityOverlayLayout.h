
@interface PXStoryViewLegibilityOverlayLayout : PXGLayout <PXChangeObserver, PXGSolidColorSource> {
    NSNumber * _alphaOverride;
    unsigned int  _bottomGradientDimmingSpriteIndex;
    unsigned short  _gradientResizableCapInsetsIndex;
    unsigned int  _solidDimmingSpriteIndex;
    unsigned int  _topGradientDimmingSpriteIndex;
    struct { 
        unsigned long long needsUpdate; 
        unsigned long long updated; 
        bool isPerformingUpdate; 
        bool willPerformUpdate; 
    }  _updateFlags;
    PXStoryViewModel * _viewModel;
}

@property (nonatomic, retain) NSNumber *alphaOverride;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) PXStoryViewModel *viewModel;

- (void).cxx_destruct;
- (void)_invalidateContent;
- (void)_updateContent;
- (id)alphaOverride;
- (id)axSpriteIndexes;
- (id)colorAtIndex:(unsigned int)arg1 inLayout:(id)arg2;
- (void)getDetailedPresentedPlacement:(id)arg1 forItemReference:(id)arg2;
- (id)imageConfigurationAtIndex:(unsigned int)arg1 inLayout:(id)arg2;
- (id)init;
- (id)initWithViewModel:(id)arg1;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (void)referenceSizeDidChange;
- (void)setAlphaOverride:(id)arg1;
- (void)setDetailedPlacementOverride:(id)arg1 forItemReference:(id)arg2;
- (void)update;
- (id)viewModel;

@end
