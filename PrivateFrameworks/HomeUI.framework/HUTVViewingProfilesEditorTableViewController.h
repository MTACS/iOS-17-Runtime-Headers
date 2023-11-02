
@interface HUTVViewingProfilesEditorTableViewController : HUItemTableViewController <HUItemModuleControllerHosting> {
    bool  _hideHeadersAndFooters;
    HUTVViewingProfilesDevicesModuleController * _tvpDevicesModuleController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool hideHeadersAndFooters;
@property (readonly) Class superclass;
@property (nonatomic, readonly) HUTVViewingProfilesDevicesModuleController *tvpDevicesModuleController;

- (void).cxx_destruct;
- (bool)automaticallyUpdatesViewControllerTitle;
- (bool)hideHeadersAndFooters;
- (id)initWithUserItem:(id)arg1;
- (id)itemModuleControllers;
- (id)moduleController:(id)arg1 dismissViewControllerForRequest:(id)arg2;
- (id)moduleController:(id)arg1 presentViewControllerForRequest:(id)arg2;
- (id)moduleController:(id)arg1 textFieldForVisibleItem:(id)arg2;
- (void)setHideHeadersAndFooters:(bool)arg1;
- (bool)shouldHideFooterBelowSection:(long long)arg1;
- (bool)shouldHideHeaderAboveSection:(long long)arg1;
- (id)tvpDevicesModuleController;

@end
