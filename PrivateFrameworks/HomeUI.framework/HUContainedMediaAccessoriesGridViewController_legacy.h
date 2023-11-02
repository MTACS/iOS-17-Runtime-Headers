
@interface HUContainedMediaAccessoriesGridViewController_legacy : HUServiceGridViewController <HUDetailsPresentationDelegateHost, HUPresentationDelegate, HUServiceGridItemManagerDelegate> {
    <HUContainedMediaAccessoriesGridViewControllerDelegate_legacy> * _mediaAccessoryGridDelegate;
    HFMediaAccessoryItem * _mediaAccessoryItem;
    <HUPresentationDelegate> * _presentationDelegate;
    bool  _presentedModally;
    bool  _requiresPresentingViewControllerDismissal;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <HUContainedMediaAccessoriesGridViewControllerDelegate_legacy> *mediaAccessoryGridDelegate;
@property (nonatomic, readonly, copy) HFMediaAccessoryItem *mediaAccessoryItem;
@property (nonatomic) <HUPresentationDelegate> *presentationDelegate;
@property (getter=isPresentedModally, nonatomic) bool presentedModally;
@property (nonatomic) bool requiresPresentingViewControllerDismissal;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_done:(id)arg1;
- (void)_edit:(id)arg1;
- (void)_updateRightBarButtons;
- (id)detailsViewControllerForPresentationCoordinator:(id)arg1 item:(id)arg2;
- (id)finishPresentation:(id)arg1 animated:(bool)arg2;
- (bool)hasDetailsActionForPresentationCoordinator:(id)arg1 item:(id)arg2;
- (id)initWithAccessoryContainerItem:(id)arg1;
- (id)initWithMediaAccessoryContainerItem:(id)arg1 isPresentedModally:(bool)arg2 valueSource:(id)arg3;
- (bool)isPresentedModally;
- (void)itemManagerDidUpdate:(id)arg1;
- (id)layoutOptionsForSection:(long long)arg1;
- (id)mediaAccessoryGridDelegate;
- (id)mediaAccessoryItem;
- (id)presentationDelegate;
- (bool)requiresPresentingViewControllerDismissal;
- (void)setMediaAccessoryGridDelegate:(id)arg1;
- (void)setPresentationDelegate:(id)arg1;
- (void)setPresentedModally:(bool)arg1;
- (void)setRequiresPresentingViewControllerDismissal:(bool)arg1;
- (void)viewDidLoad;

@end
