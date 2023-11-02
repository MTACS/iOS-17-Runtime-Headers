
@protocol DBDashboardWorkspaceEntityPresenting <DBEventHandling>

@required

- (void)activateSceneWithSettings:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 6: NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)backgroundSceneWithCompletion:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)deactivateSceneWithReasonMask:(unsigned long long)arg1;
- (void)foregroundSceneWithSettings:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 6: NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (NSString *)identifier;
- (void)invalidatePresentationViewForIdentifier:(NSString *)arg1;
- (UIView *)presentationViewWithIdentifier:(NSString *)arg1;
- (bool)presentsFullScreen;
- (bool)presentsUnderStatusBar;

@end
