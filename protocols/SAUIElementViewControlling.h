
@protocol SAUIElementViewControlling <SAUIElementViewControllingObservable>

@required

- (<SAElementViewProviding> *)elementViewProvider;
- (bool)handleLongPress:(UIGestureRecognizer *)arg1;
- (bool)handleTap:(UIGestureRecognizer *)arg1;

@end
