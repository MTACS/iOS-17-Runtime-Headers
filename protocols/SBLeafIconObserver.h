
@protocol SBLeafIconObserver <SBIconObserver>

@optional

- (void)leafIcon:(SBLeafIcon *)arg1 didAddIconDataSource:(id <SBLeafIconDataSource>)arg2;
- (void)leafIcon:(SBLeafIcon *)arg1 didChangeActiveDataSource:(id <SBLeafIconDataSource>)arg2;
- (void)leafIcon:(SBLeafIcon *)arg1 didRemoveIconDataSource:(id <SBLeafIconDataSource>)arg2;

@end
