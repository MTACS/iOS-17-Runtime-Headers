
@interface HUContainedServicesGridViewController_legacy : HUServiceGridViewController <HUDetailsPresentationDelegateHost, HUPresentationDelegate, HUServiceGridItemManagerDelegate> {
    <HUPresentationDelegate> * _presentationDelegate;
    bool  _presentedModally;
    bool  _requiresPresentingViewControllerDismissal;
    HFItem<HUServiceContainerItem><NSCopying> * _serviceContainerItem;
    <HUContainedServiceGridViewControllerDelegate_legacy> * _serviceGridDelegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <HUPresentationDelegate> *presentationDelegate;
@property (getter=isPresentedModally, nonatomic) bool presentedModally;
@property (nonatomic) bool requiresPresentingViewControllerDismissal;
@property (nonatomic, readonly, copy) HFItem<HUServiceContainerItem><NSCopying> *serviceContainerItem;
@property (nonatomic) <HUContainedServiceGridViewControllerDelegate_legacy> *serviceGridDelegate;
@property (readonly) Class superclass;

+ (id)itemManagerWithServiceContainerItem:(id)arg1 shouldGroupByRoom:(bool)arg2 mediaItem:(id)arg3 valueSource:(id)arg4;

- (void).cxx_destruct;
- (void)_done:(id)arg1;
- (void)_edit:(id)arg1;
- (void)_updateRightBarButtons;
- (void)configureCell:(id)arg1 forItem:(id)arg2;
- (id)detailsViewControllerForPresentationCoordinator:(id)arg1 item:(id)arg2;
- (id)finishPresentation:(id)arg1 animated:(bool)arg2;
- (bool)hasDetailsActionForPresentationCoordinator:(id)arg1 item:(id)arg2;
- (id)initWithItemManager:(id)arg1;
- (id)initWithServiceContainerItem:(id)arg1;
- (id)initWithServiceContainerItem:(id)arg1 isPresentedModally:(bool)arg2 valueSource:(id)arg3;
- (bool)isPresentedModally;
- (void)itemManagerDidUpdate:(id)arg1;
- (id)layoutOptionsForSection:(long long)arg1;
- (id)presentationDelegate;
- (bool)requiresPresentingViewControllerDismissal;
- (id)serviceContainerItem;
- (id)serviceGridDelegate;
- (void)setPresentationDelegate:(id)arg1;
- (void)setPresentedModally:(bool)arg1;
- (void)setRequiresPresentingViewControllerDismissal:(bool)arg1;
- (void)setServiceGridDelegate:(id)arg1;
- (void)viewDidLoad;

@end
