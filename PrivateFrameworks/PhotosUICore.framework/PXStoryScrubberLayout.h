
@interface PXStoryScrubberLayout : PXGSplitLayout <PXChangeObserver, PXGViewSource> {
    NSNumber * _alphaOverride;
    PXStoryScrubberContentLayout * _contentLayout;
    NSDate * _currentSkipSegmentActionDate;
    unsigned short  _focusGuideContentVersion;
    unsigned int  _focusGuideSpriteIndex;
    bool  _isUpdatingWantsVisible;
    NSDate * _lastScrubbedDate;
    PXStoryModel * _mainModel;
    PXStoryScrubberScrollLayout * _scrollLayout;
    struct { 
        unsigned long long needsUpdate; 
        unsigned long long updated; 
        bool isPerformingUpdate; 
        bool willPerformUpdate; 
    }  _updateFlags;
    PXStoryViewModel * _viewModel;
}

@property (nonatomic, retain) NSNumber *alphaOverride;
@property (nonatomic, retain) PXStoryScrubberContentLayout *contentLayout;
@property (nonatomic, retain) NSDate *currentSkipSegmentActionDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned short focusGuideContentVersion;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSDate *lastScrubbedDate;
@property (nonatomic, retain) PXStoryModel *mainModel;
@property (nonatomic, retain) PXStoryScrubberScrollLayout *scrollLayout;
@property (readonly) Class superclass;
@property (nonatomic, readonly) PXStoryViewModel *viewModel;

- (void).cxx_destruct;
- (void)_invalidateFocusGuide;
- (void)_invalidateLastScrubbedDate;
- (void)_invalidateMainModel;
- (void)_invalidateSkipSegmentActionDate;
- (void)_invalidateSublayouts;
- (void)_invalidateSublayoutsAlpha;
- (void)_invalidateVisibilityFraction;
- (void)_invalidateWantsVisible;
- (void)_loadSublayoutsIfNeeded;
- (void)_loadTVSublayoutsIfNeeded;
- (bool)_shouldEnableFocusGuide;
- (void)_updateFocusGuide;
- (void)_updateLastScrubbedDate;
- (void)_updateMainModel;
- (void)_updateSkipSegmentActionDate;
- (void)_updateSublayouts;
- (void)_updateSublayoutsAlpha;
- (void)_updateVisibilityFraction;
- (void)_updateWantsVisible;
- (bool)allowsRepeatedSublayoutsUpdates;
- (void)alphaDidChange;
- (id)alphaOverride;
- (id)axSpriteIndexes;
- (id)contentLayout;
- (id)currentSkipSegmentActionDate;
- (void)didUpdate;
- (unsigned short)focusGuideContentVersion;
- (void)getDetailedPresentedPlacement:(id)arg1 forItemReference:(id)arg2;
- (id)init;
- (id)initWithViewModel:(id)arg1;
- (id)lastScrubbedDate;
- (id)mainModel;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (id)preferredFocusLayouts;
- (void)referenceDepthDidChange;
- (void)referenceSizeDidChange;
- (id)scrollLayout;
- (void)setAlphaOverride:(id)arg1;
- (void)setContentLayout:(id)arg1;
- (void)setCurrentSkipSegmentActionDate:(id)arg1;
- (void)setDetailedPlacementOverride:(id)arg1 forItemReference:(id)arg2;
- (void)setFocusGuideContentVersion:(unsigned short)arg1;
- (void)setLastScrubbedDate:(id)arg1;
- (void)setMainModel:(id)arg1;
- (void)setScrollLayout:(id)arg1;
- (void)update;
- (Class)viewClassForSpriteAtIndex:(unsigned int)arg1 inLayout:(id)arg2;
- (id)viewModel;
- (id)viewUserDataForSpriteAtIndex:(unsigned int)arg1 inLayout:(id)arg2;
- (void)willUpdate;

@end
