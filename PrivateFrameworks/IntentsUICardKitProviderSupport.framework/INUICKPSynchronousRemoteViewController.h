
@interface INUICKPSynchronousRemoteViewController : UIViewController <CRKCardSectionViewControlling, INUICKPSynchronousRemoteViewDelegate, INUIRemoteViewControllerDelegate> {
    <INUICKPSynchronousRemoteViewControllerDelegate> * _delegate;
    <INUICKPInterfaceSectionOrganizing> * _interfaceSectionOrganizer;
    INUIRemoteViewController * _remoteViewController;
    <CRKCardSectionViewControllingDelegate> * cardSectionViewControllingDelegate;
}

@property (nonatomic, readonly, copy) NSSet *cachedRepresentedParameters;
@property (nonatomic) <CRKCardSectionViewControllingDelegate> *cardSectionViewControllingDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <INUICKPSynchronousRemoteViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <INUICKPInterfaceSectionOrganizing> *interfaceSectionOrganizer;
@property (nonatomic, retain) INUIRemoteViewController *remoteViewController;
@property (readonly) Class superclass;

+ (void)requestInstanceWithInfo:(id)arg1 configuration:(id)arg2 synchronousRemoteViewControllerDelegate:(id)arg3 reply:(id /* block */)arg4;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (id)_interaction;
- (id)_minimumSizesBySystemVersion;
- (id)cachedRepresentedParameters;
- (struct CGSize { double x1; double x2; })cachedSizeForSynchronousRemoteView:(id)arg1;
- (id)cardSectionViewControllingDelegate;
- (id)delegate;
- (id)interfaceSectionOrganizer;
- (id)interfaceSectionsForRemoteViewController:(id)arg1;
- (void)loadView;
- (id)maximumSizesBySystemVersionForRemoteViewController:(id)arg1;
- (id)minimumSizesBySystemVersionForRemoteViewController:(id)arg1;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (id)remoteViewController;
- (void)remoteViewControllerServiceDidTerminate:(id)arg1;
- (void)setCardSectionViewControllingDelegate:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setInterfaceSectionOrganizer:(id)arg1;
- (void)setRemoteViewController:(id)arg1;

@end
