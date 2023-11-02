
@interface HUSoftwareUpdateRecentUpdatesViewController : HUItemTableViewController <HUPresentationDelegateHost> {
    <HUPresentationDelegate> * _presentationDelegate;
    HUSoftwareUpdateItemModuleController * _softwareUpdateItemModuleController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HUSoftwareUpdateRecentUpdatesItemManager *itemManager;
@property (nonatomic) <HUPresentationDelegate> *presentationDelegate;
@property (nonatomic, retain) HUSoftwareUpdateItemModuleController *softwareUpdateItemModuleController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithHome:(id)arg1;
- (id)initWithItemManager:(id)arg1 tableViewStyle:(long long)arg2;
- (id)itemModuleControllers;
- (id)presentationDelegate;
- (void)setPresentationDelegate:(id)arg1;
- (void)setSoftwareUpdateItemModuleController:(id)arg1;
- (id)softwareUpdateItemModuleController;
- (void)viewDidLoad;

@end
