
@protocol SBHSearchPresenterObserver <NSObject>

@optional

- (void)searchPresenterDidDismissSearch:(id <SBHSearchPresenting>)arg1;
- (void)searchPresenterDidPresentSearch:(id <SBHSearchPresenting>)arg1;
- (void)searchPresenterWillDismissSearch:(id <SBHSearchPresenting>)arg1 animated:(bool)arg2;
- (void)searchPresenterWillPresentSearch:(id <SBHSearchPresenting>)arg1 animated:(bool)arg2;

@end
