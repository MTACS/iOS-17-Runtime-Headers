
@interface PHDuplicateDetection : NSObject

+ (bool)assetsArePendingForDuplicateMergeProcessing:(id)arg1 inPhotoLibrary:(id)arg2;
+ (void)mergeDuplicateAssetsWithLocalIdentifiers:(id)arg1 inPhotoLibrary:(id)arg2 completionHandler:(id /* block */)arg3;

@end
