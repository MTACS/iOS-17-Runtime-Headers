
@protocol TSPresentable

@required

- (void)presenterDidAppear:(id <TSPresenterType>)arg1;
- (void)presenterDidDisappear:(id <TSPresenterType>)arg1;
- (void)presenterWillAppear:(id <TSPresenterType>)arg1;
- (void)presenterWillDisappear:(id <TSPresenterType>)arg1;

@end
