
@interface PXFeedViewScrollLayout : PXGScrollLayout <PXGScrollLayoutDelegate> {
    PXFeedContentLayout * _feedContentLayout;
    bool  _isClearingLastVisibleAreaAnchoringInformation;
    struct { 
        unsigned long long needsUpdate; 
        unsigned long long updated; 
        bool isPerformingUpdate; 
        bool willPerformUpdate; 
    }  _updateFlags;
    PXFeedViewModel * _viewModel;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) PXFeedContentLayout *feedContentLayout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) PXFeedViewModel *viewModel;

- (void).cxx_destruct;
- (void)_invalidateAnchorForVisibleArea;
- (void)_invalidateContentSize;
- (void)_invalidateScrollParameters;
- (void)_updateAnchorForVisibleArea;
- (void)_updateContentSize;
- (void)_updateScrollParameters;
- (void)clearLastVisibleAreaAnchoringInformation;
- (unsigned long long)contentChangeTrend;
- (id)feedContentLayout;
- (id)init;
- (id)initWithViewModel:(id)arg1 displayingFeedContentLayout:(id)arg2;
- (id)itemPlacementControllerForItemReference:(id)arg1;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (void)referenceSizeDidChange;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })safeAreaInsets;
- (void)scrollLayoutWillEndScrolling:(id)arg1 withVelocity:(struct CGPoint { double x1; double x2; })arg2 targetContentOffset:(inout struct CGPoint { double x1; double x2; }*)arg3 currentContentOffset:(struct CGPoint { double x1; double x2; })arg4;
- (long long)scrollableAxis;
- (long long)sublayoutIndexForObjectReference:(id)arg1 options:(unsigned long long)arg2 updatedObjectReference:(out id*)arg3;
- (void)update;
- (id)viewModel;

@end
