
@interface SXVideoComponentVisibilityMonitor : SXVisibilityMonitor <SXScrollObserving>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)didScroll;
- (void)scrollingDidStop;
- (void)scrollingWillStart;

@end
