
@interface PXStoryStyleChromeContainerLayout : PXGAbsoluteCompositeLayout <PXChangeObserver> {
    NSSet * _artworkPreloadingRecords;
    PXCArrayStore * _framesArrayStore;
    PXStoryModel * _storyModel;
    PXStoryStyleManager * _styleManager;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _styleSublayoutRange;
    struct { 
        unsigned long long needsUpdate; 
        unsigned long long updated; 
        bool isPerformingUpdate; 
        bool willPerformUpdate; 
    }  _updateFlags;
    PXStoryViewModel * _viewModel;
    PXNumberAnimator * _visibilityAnimator;
}

@property (nonatomic, retain) NSSet *artworkPreloadingRecords;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PXStoryModel *storyModel;
@property (nonatomic, retain) PXStoryStyleManager *styleManager;
@property (readonly) Class superclass;
@property (nonatomic, retain) PXStoryViewModel *viewModel;
@property (nonatomic, readonly) PXNumberAnimator *visibilityAnimator;

- (void).cxx_destruct;
- (void)_invalidateResourcePreloading;
- (void)_invalidateStoryModel;
- (void)_invalidateStyleLayouts;
- (void)_invalidateStyleLayoutsContent;
- (void)_invalidateStyleManager;
- (void)_invalidateVisibilityAnimator;
- (void)_updateResourcePreloading;
- (void)_updateStoryModel;
- (void)_updateStyleLayouts;
- (void)_updateStyleLayoutsContent;
- (void)_updateStyleManager;
- (void)_updateVisibilityAnimator:(bool)arg1;
- (id)artworkPreloadingRecords;
- (void)dealloc;
- (void)displayScaleDidChange;
- (id)init;
- (id)initWithViewModel:(id)arg1;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (void)referenceDepthDidChange;
- (void)referenceSizeDidChange;
- (void)setArtworkPreloadingRecords:(id)arg1;
- (void)setStoryModel:(id)arg1;
- (void)setStyleManager:(id)arg1;
- (void)setViewModel:(id)arg1;
- (id)storyModel;
- (id)styleManager;
- (void)update;
- (id)viewModel;
- (id)visibilityAnimator;

@end
