
@interface SXTextTangierInteractiveCanvasController : TSWPInteractiveCanvasController {
    <SXTextTangierInteractiveCanvasControllerDataSource> * _dataSource;
    bool  _forceLayoutAndRenderOnThread;
    bool  _isScrolling;
    bool  _mightScrollToTop;
    UIScrollView * _scrollView;
    NSString * _selectedText;
}

@property (nonatomic) <SXTextTangierInteractiveCanvasControllerDataSource> *dataSource;
@property (nonatomic) bool forceLayoutAndRenderOnThread;
@property (nonatomic) bool isScrolling;
@property (nonatomic) bool mightScrollToTop;
@property (nonatomic, retain) UIScrollView *scrollView;
@property (nonatomic, copy) NSString *selectedText;

+ (void)createCanvasWithDelegate:(id)arg1 outICC:(id*)arg2 outLayerHost:(id*)arg3 iccClass:(Class)arg4 layerHostClass:(Class)arg5;

- (void).cxx_destruct;
- (id)closestRepToPoint:(struct CGPoint { double x1; double x2; })arg1 forStorage:(id)arg2;
- (id)dataSource;
- (void)endUISession;
- (bool)forceLayoutAndRenderOnThread;
- (id)hitRep:(struct CGPoint { double x1; double x2; })arg1 withGesture:(id)arg2 passingTest:(id /* block */)arg3;
- (id)i_topLevelLayersForTiling;
- (bool)isScrolling;
- (bool)mightScrollToTop;
- (bool)p_currentlyScrolling;
- (bool)p_shouldLayoutAndRenderOnThreadForcePendingLayout:(bool)arg1;
- (id)scrollView;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(bool)arg2;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (bool)scrollViewShouldScrollToTop:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (id)selectedText;
- (void)setDataSource:(id)arg1;
- (void)setForceLayoutAndRenderOnThread:(bool)arg1;
- (void)setIsScrolling:(bool)arg1;
- (void)setMightScrollToTop:(bool)arg1;
- (void)setScrollView:(id)arg1;
- (void)setSelectedText:(id)arg1;
- (void)setSelection:(id)arg1 onModel:(id)arg2 withFlags:(unsigned long long)arg3;
- (void)teardown;
- (id)topLevelRepsForHitTesting;
- (void)willEndEditingText;

@end
