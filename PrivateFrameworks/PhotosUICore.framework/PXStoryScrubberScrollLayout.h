
@interface PXStoryScrubberScrollLayout : PXGLayout <PXChangeObserver, PXGScrollLayoutDelegate, PXGSolidColorSource> {
    <PXStoryTimeline> * _displayedTimeline;
    unsigned int  _firstPageSpriteIndex;
    bool  _isUpdating;
    PXStoryModel * _model;
    id  _modelChangeOrigin;
    long long  _numberOfPages;
    struct { 
        long long firstSegmentIdentifier; 
        double secondSegmentMixFactor; 
        long long secondSegmentIdentifier; 
    }  _presentedScrubberPosition;
    struct { 
        unsigned long long needsUpdate; 
        unsigned long long updated; 
        bool isPerformingUpdate; 
        bool willPerformUpdate; 
    }  _updateFlags;
    PXStoryViewModel * _viewModel;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) <PXStoryTimeline> *displayedTimeline;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PXStoryModel *model;
@property (nonatomic, readonly) id modelChangeOrigin;
@property (nonatomic) long long numberOfPages;
@property (nonatomic) struct { long long x1; double x2; long long x3; } presentedScrubberPosition;
@property (readonly) Class superclass;
@property (nonatomic, readonly) PXStoryViewModel *viewModel;

- (void).cxx_destruct;
- (void)_invalidateContent;
- (void)_invalidateCurrentScrollPosition;
- (void)_invalidateDisplayedTimeline;
- (void)_invalidateModelScrubberPosition;
- (void)_invalidatePages;
- (void)_invalidatePresentedScrubberPosition;
- (struct CGPoint { double x1; double x2; })_offsetFromFirstPageForScrollingToPosition:(struct { long long x1; double x2; long long x3; })arg1 visibleRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)_updateContent;
- (void)_updateCurrentScrollPosition;
- (void)_updateDisplayedTimeline;
- (void)_updateModelScrubberPosition;
- (void)_updatePages;
- (void)_updatePresentedScrubberPosition;
- (void)adjustScrollTargetContentOffset:(inout struct CGPoint { double x1; double x2; }*)arg1 withVelocity:(struct CGPoint { double x1; double x2; })arg2;
- (id)colorAtIndex:(unsigned int)arg1 inLayout:(id)arg2;
- (id)createAnchorForScrollingToPosition:(struct { long long x1; double x2; long long x3; })arg1;
- (void)didUpdate;
- (id)displayedTimeline;
- (id)init;
- (id)initWithViewModel:(id)arg1 model:(id)arg2;
- (id)model;
- (id)modelChangeOrigin;
- (long long)numberOfPages;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (struct { long long x1; double x2; long long x3; })presentedScrubberPosition;
- (void)referenceSizeDidChange;
- (void)scrollLayoutDidEndScrolling:(id)arg1;
- (void)scrollLayoutDidScroll:(id)arg1;
- (void)scrollLayoutWillBeginScrolling:(id)arg1;
- (void)scrollLayoutWillEndScrolling:(id)arg1 withVelocity:(struct CGPoint { double x1; double x2; })arg2 targetContentOffset:(inout struct CGPoint { double x1; double x2; }*)arg3 currentContentOffset:(struct CGPoint { double x1; double x2; })arg4;
- (void)setDisplayedTimeline:(id)arg1;
- (void)setNumberOfPages:(long long)arg1;
- (void)setPresentedScrubberPosition:(struct { long long x1; double x2; long long x3; })arg1;
- (void)update;
- (id)viewModel;
- (void)visibleRectDidChange;
- (void)willUpdate;

@end
