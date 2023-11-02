
@interface PXStoryPagedScrollContentLayout : PXGLayout <PXChangeObserver, PXGSolidColorSource> {
    <PXStoryTimeline> * _displayedTimeline;
    unsigned int  _firstPageSpriteIndex;
    double  _interpageSpacing;
    PXStoryModel * _model;
    long long  _numberOfPages;
    struct { 
        unsigned long long needsUpdate; 
        unsigned long long updated; 
        bool isPerformingUpdate; 
        bool willPerformUpdate; 
    }  _postUpdateFlags;
    double  _presentedPageWidth;
    struct { 
        long long firstSegmentIdentifier; 
        double secondSegmentMixFactor; 
        long long secondSegmentIdentifier; 
    }  _presentedScrollPosition;
    struct { 
        unsigned long long needsUpdate; 
        unsigned long long updated; 
        bool isPerformingUpdate; 
        bool willPerformUpdate; 
    }  _updateFlags;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) <PXStoryTimeline> *displayedTimeline;
@property (readonly) unsigned long long hash;
@property (nonatomic) double interpageSpacing;
@property (nonatomic, readonly) PXStoryModel *model;
@property (nonatomic) long long numberOfPages;
@property (nonatomic) double presentedPageWidth;
@property (nonatomic) struct { long long x1; double x2; long long x3; } presentedScrollPosition;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_invalidateContent;
- (void)_invalidateDisplayedTimeline;
- (void)_invalidatePages;
- (void)_invalidatePresentedScrollPosition;
- (struct CGPoint { double x1; double x2; })_offsetFromFirstPageForScrollingToPosition:(struct { long long x1; double x2; long long x3; })arg1 visibleRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)_updateContent;
- (void)_updateDisplayedTimeline;
- (void)_updatePages;
- (void)_updatePresentedScrollPosition;
- (void)adjustScrollTargetContentOffset:(inout struct CGPoint { double x1; double x2; }*)arg1 withVelocity:(struct CGPoint { double x1; double x2; })arg2;
- (id)colorAtIndex:(unsigned int)arg1 inLayout:(id)arg2;
- (id)createAnchorForScrollingToPosition:(struct { long long x1; double x2; long long x3; })arg1;
- (id)displayedTimeline;
- (id)init;
- (id)initWithModel:(id)arg1;
- (double)interpageSpacing;
- (id)model;
- (long long)numberOfPages;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (double)presentedPageWidth;
- (struct { long long x1; double x2; long long x3; })presentedScrollPosition;
- (void)referenceSizeDidChange;
- (void)setDisplayedTimeline:(id)arg1;
- (void)setInterpageSpacing:(double)arg1;
- (void)setNumberOfPages:(long long)arg1;
- (void)setPresentedPageWidth:(double)arg1;
- (void)setPresentedScrollPosition:(struct { long long x1; double x2; long long x3; })arg1;
- (unsigned int)spriteIndexForObjectReference:(id)arg1 options:(unsigned long long)arg2 updatedObjectReference:(out id*)arg3;
- (void)update;
- (void)visibleRectDidChange;

@end
