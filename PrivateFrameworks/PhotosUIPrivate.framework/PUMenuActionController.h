
@interface PUMenuActionController : NSObject <PUAssetActionPerformerDelegate> {
    PUAssetActionPerformer * __activeActionPerformer;
    PUBrowsingSession * _browsingSession;
    <PUMenuActionControllerDelegate> * _delegate;
    struct { 
        bool didDismissWithActionIdentifier; 
        bool preventRevealInMomentAction; 
    }  _delegateRespondsTo;
    PXActionManager * _photosUICoreActionManager;
    UIViewController * _presentingViewController;
    <PXRegionOfInterestProvider> * _regionOfInterestProvider;
}

@property (setter=_setActiveActionPerformer:, nonatomic, retain) PUAssetActionPerformer *_activeActionPerformer;
@property (nonatomic, readonly) NSArray *actions;
@property (nonatomic, retain) PUBrowsingSession *browsingSession;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PUMenuActionControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PXActionManager *photosUICoreActionManager;
@property (nonatomic) UIViewController *presentingViewController;
@property (nonatomic) <PXRegionOfInterestProvider> *regionOfInterestProvider;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_activeActionPerformer;
- (id)_contextMenuActionWithTitle:(id)arg1 image:(id)arg2 attributes:(unsigned long long)arg3 actionHandler:(id /* block */)arg4;
- (id)_copyMenuElement;
- (void)_executeActionPerformer:(id)arg1;
- (void)_notifyDelegateOfAction:(id)arg1;
- (void)_performFavoriteAction:(bool)arg1;
- (void)_performSimpleActionWithType:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;
- (void)_promptTrashActionConfirmationForAsset:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)_setActiveActionPerformer:(id)arg1;
- (id)actions;
- (bool)assetActionPerformer:(id)arg1 dismissViewController:(id)arg2 completionHandler:(id /* block */)arg3;
- (bool)assetActionPerformer:(id)arg1 presentViewController:(id)arg2;
- (id)browsingSession;
- (id)contextMenuActionIfAvailableForActionType:(unsigned long long)arg1;
- (id)debugActions;
- (id)delegate;
- (id)photosUICoreActionManager;
- (id)presentingViewController;
- (id)regionOfInterestProvider;
- (void)setBrowsingSession:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPhotosUICoreActionManager:(id)arg1;
- (void)setPresentingViewController:(id)arg1;
- (void)setRegionOfInterestProvider:(id)arg1;
- (id)undoManagerForAssetActionPerformer:(id)arg1;

@end
