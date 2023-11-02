
@protocol SBAlertItemPresenter <NSObject>

@required

- (bool)canPresentMultipleAlertItemsSimultaneously;
- (void)dismissAlertItem:(void *)arg1 animated:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 7: SBAlertItem *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)presentAlertItem:(void *)arg1 animated:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 7: SBAlertItem *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (bool)presentsAlertItemsModally;

@optional

- (void)windowSceneDidConnect:(SBWindowScene *)arg1 withSharedModalAlertItemPresenter:(SBSharedModalAlertItemPresenter *)arg2;
- (void)windowSceneDidDisconnect:(SBWindowScene *)arg1;

@end
