
@interface PXPhotoKitDuplicateAssetActionPerformer : PXPhotoKitAssetActionPerformer {
    long long  _action;
    PXPhotoKitDuplicateActionController * _duplicateActionController;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _stillImageTime;
}

@property (nonatomic) long long action;
@property (nonatomic, retain) PXPhotoKitDuplicateActionController *duplicateActionController;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } stillImageTime;

+ (bool)canPerformOnAsset:(id)arg1 inAssetCollection:(id)arg2 person:(id)arg3;
+ (id)createPreviewActionWithTitle:(id)arg1 image:(id)arg2 handler:(id /* block */)arg3;
+ (id)localizedTitleForUseCase:(unsigned long long)arg1 actionManager:(id)arg2;
+ (id)systemImageNameForActionManager:(id)arg1;

- (void).cxx_destruct;
- (long long)action;
- (id)duplicateActionController;
- (void)performBackgroundTask;
- (void)performUserInteractionTask;
- (void)setAction:(long long)arg1;
- (void)setDuplicateActionController:(id)arg1;
- (void)setStillImageTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })stillImageTime;

@end
