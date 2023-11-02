
@protocol SBHSearchPresenterDelegate <SBHSearchPresenterObserver>

@required

- (NSArray *)searchPresentablesForPresenter:(id <SBHSearchPresenting>)arg1;

@optional

- (bool)searchPresenterCanPresent:(id <SBHSearchPresenting>)arg1;
- (double)searchTopOffsetForSearchPresenter:(id <SBHSearchPresenting>)arg1;

@end
