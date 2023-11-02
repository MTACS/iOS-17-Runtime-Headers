
@interface HUDashboardCameraItemModule : HFItemModule {
    HFCameraItemProvider * _cameraItemProvider;
    HUDashboardContext * _context;
}

@property (nonatomic, retain) HFCameraItemProvider *cameraItemProvider;
@property (nonatomic, retain) HUDashboardContext *context;
@property (nonatomic, readonly) HMHome *home;
@property (nonatomic, readonly) HMRoom *room;

- (void).cxx_destruct;
- (id)_reorderableHomeKitItemListKey;
- (id)buildItemProviders;
- (id)buildSectionsWithDisplayedItems:(id)arg1;
- (id)cameraItemProvider;
- (id)context;
- (id)home;
- (id)initWithContext:(id)arg1 itemUpdater:(id)arg2;
- (id)room;
- (void)setCameraItemProvider:(id)arg1;
- (void)setContext:(id)arg1;

@end
