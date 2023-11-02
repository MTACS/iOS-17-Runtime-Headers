
@interface SAVolumeSizer : NSObject

+ (void)computeSizeOfVolumeAtURL:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)computeSizeOfVolumeAtURL:(id)arg1 options:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
+ (bool)isInternalVolume:(id)arg1;

@end
