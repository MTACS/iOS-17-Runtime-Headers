
@protocol _UISceneUIWindowHosting <NSObject>

@required

+ (bool)_hostsWindows;

- (NSArray *)_allWindowsIncludingInternalWindows:(bool)arg1 onlyVisibleWindows:(bool)arg2;
- (void)_attachWindow:(UIWindow *)arg1;
- (<UICoordinateSpace> *)_coordinateSpace;
- (void)_detachWindow:(UIWindow *)arg1;
- (long long)_interfaceOrientation;
- (UIScreen *)_screen;
- (void)_screenDidChangeFromScreen:(UIScreen *)arg1 toScreen:(UIScreen *)arg2;
- (UIStatusBarManager *)_statusBarManager;
- (UITraitCollection *)_traitCollection;
- (void)_updateVisibleWindowOrderWithTest:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, bool, id /* block */, UIWindow *, void*
- (void)_windowUpdatedProperties:(UIWindow *)arg1;
- (void)_windowUpdatedVisibility:(UIWindow *)arg1;

@end
