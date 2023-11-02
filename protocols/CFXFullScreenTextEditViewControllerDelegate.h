
@protocol CFXFullScreenTextEditViewControllerDelegate <NSObject>

@required

- (long long)faceTrackingInterfaceOrientationForfullScreenTextEditViewController:(CFXFullScreenTextEditViewController *)arg1;
- (void)fullScreenTextEditViewController:(void *)arg1 didBeginAnimationBeforeEditingEffect:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 7: CFXFullScreenTextEditViewController *, CFXEffect *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)fullScreenTextEditViewController:(CFXFullScreenTextEditViewController *)arg1 didBeginEditingEffect:(CFXEffect *)arg2;
- (void)fullScreenTextEditViewController:(void *)arg1 didFinishAnimationAfterEditingEffect:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 7: CFXFullScreenTextEditViewController *, CFXEffect *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)fullScreenTextEditViewController:(CFXFullScreenTextEditViewController *)arg1 didFinishEditingByRemovingEffect:(CFXEffect *)arg2;
- (void)fullScreenTextEditViewController:(CFXFullScreenTextEditViewController *)arg1 didFinishEditingEffect:(CFXEffect *)arg2 withUpdatedText:(NSString *)arg3;
- (void)fullScreenTextEditViewController:(CFXFullScreenTextEditViewController *)arg1 willBeginAnimationAfterEditingEffect:(CFXEffect *)arg2 updatedText:(NSString *)arg3;
- (void)fullScreenTextEditViewController:(CFXFullScreenTextEditViewController *)arg1 willBeginAnimationBeforeEditingEffect:(CFXEffect *)arg2;

@optional

- (bool)fullScreenTextEditViewController:(CFXFullScreenTextEditViewController *)arg1 shouldDisableEditingAnimationForEffect:(CFXEffect *)arg2;

@end
