
@protocol CSCoverSheetViewPresenting <CSCoverSheetViewControlling, CSActionHandling>

@required

- (CSAppearance *)activeAppearance;
- (CSBehavior *)activeBehavior;
- (void)conformsToCSCoverSheetViewPresenting;
- (CSPresentation *)externalPresentation;
- (void)updateAppearanceForController:(id <CSCoverSheetViewControlling>)arg1;
- (void)updateAppearanceForController:(void *)arg1 withAnimationSettings:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: <CSCoverSheetViewControlling> *, BSAnimationSettings *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)updateBehaviorForController:(id <CSCoverSheetViewControlling>)arg1;

@end
