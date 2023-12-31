
@interface PLPTPUtilities : NSObject

+ (void)enumerateAvailableSidecarFilesOnAsset:(id)arg1 usingBlock:(id /* block */)arg2;
+ (void)enumerateAvailableSidecarFilesOnAsset:(id)arg1 withFileManager:(id)arg2 usingBlock:(id /* block */)arg3;
+ (id)pathForSidecar:(id)arg1 onAsset:(id)arg2;
+ (bool)shouldExpungeAsset:(id)arg1;
+ (bool)shouldExpungeAsset:(id)arg1 withFileManager:(id)arg2;

@end
