
@interface SBAlertItemPresenterWindowSceneResolver : NSObject {
    NSMapTable * _modalAlertPresenters;
    SBWindowSceneManager * _windowSceneManager;
}

@property (nonatomic, readonly, retain) NSMapTable *modalAlertPresenters;
@property (nonatomic, readonly, retain) SBWindowSceneManager *windowSceneManager;

- (void).cxx_destruct;
- (id)initWithSharedModalAlertItemPresenter:(id)arg1 windowSceneManager:(id)arg2;
- (id)modalAlertPresenters;
- (id)resolvedSharedModalAlertItemPresenterForAlertItem:(id)arg1;
- (void)windowSceneDidConnect:(id)arg1 withSharedModalAlertItemPresenter:(id)arg2;
- (void)windowSceneDidDisconnect:(id)arg1;
- (id)windowSceneManager;

@end
