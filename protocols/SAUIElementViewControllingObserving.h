
@protocol SAUIElementViewControllingObserving <NSObject>

@optional

- (void)elementViewControllingDidAppear:(id <SAUIElementViewControlling>)arg1;
- (void)elementViewControllingDidDisappear:(id <SAUIElementViewControlling>)arg1;
- (void)elementViewControllingWillAppear:(id <SAUIElementViewControlling>)arg1;
- (void)elementViewControllingWillDisappear:(id <SAUIElementViewControlling>)arg1;

@end
