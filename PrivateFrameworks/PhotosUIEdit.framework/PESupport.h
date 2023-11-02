
@interface PESupport : NSObject

+ (void)assetHasDepthEnabled:(id)arg1 queue:(id)arg2 handler:(id /* block */)arg3;
+ (bool)assetHasUnsupportedOriginalAdjustments:(id)arg1;
+ (bool)canPerformEditOnAsset:(id)arg1;
+ (id)originalAdjustmentVersionForAsset:(id)arg1;
+ (bool)photoWasTakenWithoutFlashWithImageProperties:(id)arg1;
+ (id)repairedAsShotCompositionController:(id)arg1 forCurrentCompositionController:(id)arg2;
+ (void)syncMainThread:(id /* block */)arg1;

@end
