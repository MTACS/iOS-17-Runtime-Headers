
@interface PXOneUpTipsHelper : PXTipsHelper

+ (id)actionsMenuTipID;
+ (id)infoPanelTipID;
+ (id)livePhotosTipID;
+ (id)quickCropTipID;
+ (void)setTip:(id)arg1 isPresentable:(bool)arg2;
+ (void)setTipActionPerformed:(id)arg1;
+ (void)setTipsPresentationDelegate:(id)arg1;
+ (void)signalDidQuickCrop;
+ (void)signalOneUpPhotoOpened;
+ (void)signalSyndicatedPhotosPresented;
+ (id)syndicatedPhotosTipID;

@end
