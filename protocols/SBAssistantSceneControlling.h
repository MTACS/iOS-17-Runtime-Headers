
@protocol SBAssistantSceneControlling <NSObject>

@required

- (void)addObserver:(id <SBAssistantSceneControllingObserver>)arg1;
- (SBAssistantRootViewController *)assistantRootViewController;
- (void)dismissAssistantViewIfNecessary;
- (void)dismissAssistantViewIfNecessaryForGestureTranslation:(struct CGPoint { double x1; double x2; })arg1 velocity:(struct CGPoint { double x1; double x2; })arg2;
- (void)dismissAssistantViewIfNecessaryWithAnimation:(long long)arg1;
- (void)dismissAssistantViewIfNecessaryWithAnimation:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 6: long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (bool)isVisible;
- (void)removeObserver:(id <SBAssistantSceneControllingObserver>)arg1;
- (SBWindow *)window;

@end
