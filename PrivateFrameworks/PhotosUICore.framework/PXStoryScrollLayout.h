
@interface PXStoryScrollLayout : PXGScrollLayout <PXChangeObserver, PXGScrollLayoutDelegate> {
    bool  _isUpdating;
    PXStoryModel * _model;
    id  _modelChangeOrigin;
    PXStoryPagedScrollContentLayout * _pagedScrollContentLayout;
    struct { 
        unsigned long long needsUpdate; 
        unsigned long long updated; 
        bool isPerformingUpdate; 
        bool willPerformUpdate; 
    }  _postUpdateFlags;
    bool  _scrollBeganAtTimelineEnd;
    unsigned long long  _scrollPositionUpdateReason;
    PXStoryStyleScrollContentLayout * _styleScrollContentLayout;
    <PXStoryScrollLayoutTargetContentOffsetAdjuster> * _targetContentOffsetAdjuster;
    struct { 
        unsigned long long needsUpdate; 
        unsigned long long updated; 
        bool isPerformingUpdate; 
        bool willPerformUpdate; 
    }  _updateFlags;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PXStoryModel *model;
@property (nonatomic, readonly) id modelChangeOrigin;
@property (nonatomic, readonly) PXStoryPagedScrollContentLayout *pagedScrollContentLayout;
@property (nonatomic) bool scrollBeganAtTimelineEnd;
@property (nonatomic, readonly) long long scrollPositionComparedToEnd;
@property (nonatomic, readonly) PXStoryStyleScrollContentLayout *styleScrollContentLayout;
@property (readonly) Class superclass;
@property (nonatomic, retain) <PXStoryScrollLayoutTargetContentOffsetAdjuster> *targetContentOffsetAdjuster;

- (void).cxx_destruct;
- (void)_invalidateContentScrollPositionWithReason:(unsigned long long)arg1;
- (void)_invalidateContentView;
- (void)_invalidateModelIsScrolling;
- (void)_invalidateModelScrollPosition;
- (void)_invalidatePostUpdateEntities:(unsigned long long)arg1;
- (void)_invalidateScrollDecelerationRate;
- (void)_invalidateScrollViewZPosition;
- (void)_invalidateWantsScrollView;
- (void)_updateContentScrollPosition;
- (void)_updateContentView;
- (void)_updateModelIsScrolling;
- (void)_updateModelScrollPosition;
- (void)_updateScrollDecelerationRate;
- (void)_updateScrollViewZPosition;
- (void)_updateWantsScrollView;
- (void)contentLayoutDidChange;
- (void)didUpdate;
- (id)init;
- (id)initWithModel:(id)arg1;
- (void)isScrollingDidChange;
- (id)model;
- (id)modelChangeOrigin;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (id)pagedScrollContentLayout;
- (void)referenceSizeDidChange;
- (bool)scrollBeganAtTimelineEnd;
- (void)scrollLayoutDidScroll:(id)arg1;
- (void)scrollLayoutWillBeginScrolling:(id)arg1;
- (void)scrollLayoutWillEndScrolling:(id)arg1 withVelocity:(struct CGPoint { double x1; double x2; })arg2 targetContentOffset:(inout struct CGPoint { double x1; double x2; }*)arg3 currentContentOffset:(struct CGPoint { double x1; double x2; })arg4;
- (long long)scrollPositionComparedToEnd;
- (void)setScrollBeganAtTimelineEnd:(bool)arg1;
- (void)setTargetContentOffsetAdjuster:(id)arg1;
- (id)styleScrollContentLayout;
- (id)targetContentOffsetAdjuster;
- (void)update;
- (void)willUpdate;

@end
