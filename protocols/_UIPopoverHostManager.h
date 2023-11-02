
@protocol _UIPopoverHostManager <NSObject>

@required

- (void)closePopoverWithIdentifier:(NSString *)arg1 configuration:(_UIPopoverHostManagerPopoverCloseConfiguration *)arg2;
- (NSString *)createPopoverWithConfiguration:(_UIPopoverHostManagerPopoverCreationConfiguration *)arg1;
- (bool)shouldOccludeDuringPresentationForPopoverWithIdentifier:(NSString *)arg1;
- (void)updatePopoverWithIdentifier:(NSString *)arg1 configuration:(_UIPopoverHostManagerPopoverUpdateConfiguration *)arg2;
- (bool)useDefaultPreferredAnimationControllerForDismissalWithPopoverWithIdentifier:(NSString *)arg1;
- (bool)useDefaultPreferredAnimationControllerForPresentationWithPopoverWithIdentifier:(NSString *)arg1;
- (bool)useDefaultPresentationViewForPopoverWithIdentifier:(NSString *)arg1;

@optional

- (unsigned long long)arrowDirectionForPopoverWithIdentifier:(NSString *)arg1;
- (void)detachPopoverWithIdentifier:(void *)arg1 fromPoint:(void *)arg2 withCompletionCallback:(void *)arg3; // needs 3 arg types, found 7: NSString *, struct CGPoint { double x1; double x2; }, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (bool)popoverWithIdentifier:(NSString *)arg1 shouldAttemptDismissWhenWindowSceneUpdatesEffectiveGeometry:(UIWindowScene *)arg2;
- (void)updateSupportsDetach:(bool)arg1 forPopoverWithIdentifier:(NSString *)arg2;
- (void)updateUserInterfaceStyle:(long long)arg1 forPopoverWithIdentifier:(NSString *)arg2;

@end
