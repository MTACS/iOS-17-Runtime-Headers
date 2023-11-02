
@interface PXOneUpTipsHelper_Swift : PXTipsHelper_Swift {
    void hasStartedTips;
    void oneUpActionsMenuTip;
    void oneUpInfoPanelTip;
    void oneUpLivePhotosTip;
    void oneUpQuickCropTip;
    void oneUpSyndicatedPhotosTip;
}

+ (id)actionsMenuTipID;
+ (id)infoPanelTipID;
+ (id)livePhotosTipID;
+ (id)quickCropTipID;
+ (void)setTip:(id)arg1 isPresentable:(bool)arg2;
+ (void)setTipActionPerformed:(id)arg1;
+ (void)setTipsPresentationDelegate:(id)arg1;
+ (id)shared;
+ (void)signalDidQuickCrop;
+ (void)signalOneUpPhotoOpened;
+ (void)signalSyndicatedPhotosPresented;
+ (id)syndicatedPhotosTipID;

- (void).cxx_destruct;
- (id)init;

@end
