
@interface SXVideoPlayerVisibilityMonitor : NSObject <SXVisibilityMonitoring> {
    NSMutableArray * _didAppearBlocks;
    NSMutableArray * _didDisappearBlocks;
    SXVisibilityMonitor * _visibilityMonitor;
    NSMutableArray * _visiblePercentageBlocks;
    NSMutableArray * _willAppearBlocks;
    NSMutableArray * _willDisappearBlocks;
}

@property (nonatomic, readonly) bool appeared;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSMutableArray *didAppearBlocks;
@property (nonatomic, readonly) NSMutableArray *didDisappearBlocks;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) id object;
@property (nonatomic, readonly) unsigned long long state;
@property (readonly) Class superclass;
@property (nonatomic, retain) SXVisibilityMonitor *visibilityMonitor;
@property (nonatomic, readonly) double visiblePercentage;
@property (nonatomic, readonly) NSMutableArray *visiblePercentageBlocks;
@property (nonatomic, readonly) NSMutableArray *willAppearBlocks;
@property (nonatomic, readonly) NSMutableArray *willDisappearBlocks;

- (void).cxx_destruct;
- (bool)appeared;
- (void)configureVisibilityMonitor:(id)arg1;
- (id)didAppearBlocks;
- (id)didDisappearBlocks;
- (id)initWithVisibilityMonitor:(id)arg1;
- (id)object;
- (void)onDidAppear:(id /* block */)arg1;
- (void)onDidDisappear:(id /* block */)arg1;
- (void)onVisiblePercentageChange:(id /* block */)arg1;
- (void)onWillAppear:(id /* block */)arg1;
- (void)onWillDisappear:(id /* block */)arg1;
- (void)setVisibilityMonitor:(id)arg1;
- (unsigned long long)state;
- (id)visibilityMonitor;
- (double)visiblePercentage;
- (id)visiblePercentageBlocks;
- (id)willAppearBlocks;
- (id)willDisappearBlocks;

@end
