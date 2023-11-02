
@protocol HUMediaSystemEditorHelperDelegate <NSObject>

@required

- (HFMediaSystemBuilder *)mediaSystemBuilder;
- (void)mediaSystemEditorHelper:(HUMediaSystemEditorHelper *)arg1 didAbortForAccessoryNeedingUpdate:(HMAccessory *)arg2;
- (void)mediaSystemEditorHelper:(HUMediaSystemEditorHelper *)arg1 didModifyMediaSystemBuilder:(HFMediaSystemBuilder *)arg2;
- (void)mediaSystemEditorHelper:(void *)arg1 needsToPresentViewController:(void *)arg2 animated:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 8: HUMediaSystemEditorHelper *, UIViewController *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)mediaSystemEditorHelperDidBeginCommitting:(HUMediaSystemEditorHelper *)arg1;
- (void)mediaSystemEditorHelperDidEndCommitting:(HUMediaSystemEditorHelper *)arg1;
- (UIViewController *)mediaSystemHelperPresentingViewController;

@end
