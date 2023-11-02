
@interface SBUnlockedAlertItemPresenter : NSObject <SBAlertItemPresenter> {
    SBAlertItemPresenterWindowSceneResolver * _windowSceneResolver;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) SBAlertItemPresenterWindowSceneResolver *windowSceneResolver;

- (void).cxx_destruct;
- (bool)canPresentMultipleAlertItemsSimultaneously;
- (void)dismissAlertItem:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (id)initWithSharedModalAlertItemPresenter:(id)arg1 windowSceneManager:(id)arg2;
- (void)presentAlertItem:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (bool)presentsAlertItemsModally;
- (void)setWindowSceneResolver:(id)arg1;
- (void)windowSceneDidConnect:(id)arg1 withSharedModalAlertItemPresenter:(id)arg2;
- (void)windowSceneDidDisconnect:(id)arg1;
- (id)windowSceneResolver;

@end
