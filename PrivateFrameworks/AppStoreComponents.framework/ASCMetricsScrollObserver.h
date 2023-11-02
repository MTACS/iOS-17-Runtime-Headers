
@interface ASCMetricsScrollObserver : NSObject <_UIScrollViewScrollObserver> {
    NSMutableSet * _appearedModelIDs;
    NSHashTable * _delegates;
    NSMutableSet * _renderedModelIDs;
    UIScrollView * _scrollView;
}

@property (nonatomic, readonly) NSMutableSet *appearedModelIDs;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } contentSize;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) NSHashTable *delegates;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSMutableSet *renderedModelIDs;
@property (nonatomic, readonly) UIScrollView *scrollView;
@property (readonly) Class superclass;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } visibleRect;

+ (id)observerForScrollView:(id)arg1;

- (void).cxx_destruct;
- (void)_observeScrollViewDidScroll:(id)arg1;
- (void)addDelegate:(id)arg1;
- (id)appearedModelIDs;
- (struct CGPoint { double x1; double x2; })centerOfView:(id)arg1;
- (struct CGSize { double x1; double x2; })contentSize;
- (void)dealloc;
- (id)delegates;
- (bool)hasModelAppeared:(id)arg1;
- (bool)hasModelRendered:(id)arg1;
- (id)initWithScrollView:(id)arg1;
- (bool)isDelegateAdded:(id)arg1;
- (void)modelDidAppear:(id)arg1;
- (void)modelDidDisappear:(id)arg1;
- (void)modelDidRender:(id)arg1;
- (void)removeDelegate:(id)arg1;
- (id)renderedModelIDs;
- (id)scrollView;
- (void)scrollViewDidScroll:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleRect;

@end
