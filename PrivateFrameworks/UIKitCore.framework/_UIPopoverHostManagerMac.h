
@interface _UIPopoverHostManagerMac : NSObject <_UIPopoverHostManager>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)closePopoverWithIdentifier:(id)arg1 configuration:(id)arg2;
- (id)createPopoverWithConfiguration:(id)arg1;
- (void)detachPopoverWithIdentifier:(id)arg1 fromPoint:(struct CGPoint { double x1; double x2; })arg2 withCompletionCallback:(id /* block */)arg3;
- (id)popoverSceneForPopoverWithIdentifier:(id)arg1;
- (bool)shouldOccludeDuringPresentationForPopoverWithIdentifier:(id)arg1;
- (void)updatePopoverWithIdentifier:(id)arg1 configuration:(id)arg2;
- (void)updateSupportsDetach:(bool)arg1 forPopoverWithIdentifier:(id)arg2;
- (void)updateUserInterfaceStyle:(long long)arg1 forPopoverWithIdentifier:(id)arg2;
- (bool)useDefaultPreferredAnimationControllerForDismissalWithPopoverWithIdentifier:(id)arg1;
- (bool)useDefaultPreferredAnimationControllerForPresentationWithPopoverWithIdentifier:(id)arg1;
- (bool)useDefaultPresentationViewForPopoverWithIdentifier:(id)arg1;

@end
