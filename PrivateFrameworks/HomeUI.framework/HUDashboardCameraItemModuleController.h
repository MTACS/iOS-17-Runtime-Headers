
@interface HUDashboardCameraItemModuleController : HUItemModuleController <HUCameraControllerDelegate, HUItemModuleItemPresenting> {
    HUCameraController * _cameraController;
    long long  _cameraPresentationStyle;
    NSMapTable * _mapTable;
}

@property (nonatomic, retain) HUCameraController *cameraController;
@property (nonatomic) long long cameraPresentationStyle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMapTable *mapTable;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_cameraItemFor:(id)arg1;
- (id)_cellLayoutOptions;
- (id)_detailsViewControllerForCameraItem:(id)arg1;
- (void)_logInteractionEventOfType:(unsigned long long)arg1 withItem:(id)arg2;
- (id)_presentCameraPlayerViewControllerForCameraItem:(id)arg1;
- (id)_presentCameraPlayerViewControllerForCameraItem:(id)arg1 cameraClip:(id)arg2 animated:(bool)arg3;
- (id)_presentCameraPlayerViewControllerForCameraItem:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 animated:(bool)arg4;
- (id)_presentCameraPlayerViewControllerForCameraItem:(id)arg1 withConfiguration:(id)arg2;
- (id)_sourceViewForPresentingCameraItem:(id)arg1;
- (id)cameraController;
- (long long)cameraPresentationStyle;
- (Class)collectionCellClassForItem:(id)arg1;
- (void)configureCell:(id)arg1 forItem:(id)arg2;
- (id)detailsViewControllerForCameraItem:(id)arg1;
- (void)didDismissCameraController:(id)arg1 forProfile:(id)arg2;
- (unsigned long long)didSelectItem:(id)arg1;
- (void)disableCameraSnapshotsForCells:(id)arg1;
- (void)enableCameraSnapshotsForCells:(id)arg1;
- (id)initWithModule:(id)arg1 cameraPresentationStyle:(long long)arg2;
- (id)mapTable;
- (id)presentCameraPlayerViewControllerForHomeKitObject:(id)arg1 cameraClip:(id)arg2 animated:(bool)arg3;
- (id)presentCameraPlayerViewControllerForHomeKitObject:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 animated:(bool)arg4;
- (id)presentItem:(id)arg1 destination:(unsigned long long)arg2 animated:(bool)arg3;
- (void)setCameraController:(id)arg1;
- (void)setCameraPresentationStyle:(long long)arg1;
- (void)setMapTable:(id)arg1;
- (id)targetViewForDismissingCameraProfile:(id)arg1;

@end
