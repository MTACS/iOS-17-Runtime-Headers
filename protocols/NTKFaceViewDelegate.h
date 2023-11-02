
@protocol NTKFaceViewDelegate <NSObject>

@required

- (bool)faceView:(NTKFaceView *)arg1 wantsToDismissPresentedViewControllerAnimated:(bool)arg2;
- (NSArray *)faceViewAllVisibleComplicationsForCurrentConfiguration;
- (NSString *)faceViewComplicationAppIdentifierForSlot:(NSString *)arg1;
- (NTKComplicationController *)faceViewComplicationControllerForSlot:(NSString *)arg1;
- (NTKComplication *)faceViewComplicationForSlot:(NSString *)arg1;
- (bool)faceViewComplicationIsEmptyForSlot:(NSString *)arg1;
- (NSArray *)faceViewComplicationSlots;
- (NSArray *)faceViewComplicationSlotsHiddenByEditOption:(NTKEditOption *)arg1;
- (void)faceViewDidChangePaddingForStatusBar;
- (void)faceViewDidChangeStatusBarOverrideColor:(bool)arg1;
- (void)faceViewDidChangeWantsStatusBarIconShadow;
- (void)faceViewDidHideOrShowComplicationSlot;
- (void)faceViewDidReloadSnapshotContentViews;
- (id)faceViewDidRequestCustomDataForKey:(NSString *)arg1;
- (void)faceViewDidScrubToDate:(NSDate *)arg1 forced:(bool)arg2;
- (void)faceViewDidUpdateCustomData:(id)arg1 forKey:(NSString *)arg2;
- (NTKEditOption *)faceViewEditOptionThatHidesAllComplications;
- (void)faceViewRequestedLaunchFromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)faceViewShouldIgnoreSnapshotImages;
- (void)faceViewUpdatedResourceDirectory:(NSString *)arg1 wantsToTransferOwnership:(bool)arg2;
- (void)faceViewWantsComplicationKeylineFramesReloaded;
- (void)faceViewWantsCustomKeylineFramesReloadedForEditMode:(long long)arg1;
- (NTKFaceColorPalette *)faceViewWantsFaceColorPalette;
- (void)faceViewWantsStatusBarHidden:(bool)arg1 animated:(bool)arg2;
- (void)faceViewWantsToPresentViewController:(UIViewController *)arg1;
- (void)faceViewWantsUnadornedSnapshotViewRemoved;
- (NSString *)faceViewWidgetIdentifierForSlot:(NSString *)arg1;
- (void)faceViewWillEnterTimeTravel;
- (void)faceViewWillExitTimeTravel;
- (void)faceViewWillUnloadSnapshotContentViews;

@end
