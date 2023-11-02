
@interface SASupport : NSObject

+ (int)enableDirStatInfoForPath:(id)arg1 andGetInfo:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; }*)arg2;
+ (int)enableDirStatsForPath:(id)arg1;
+ (unsigned long long)getCloneDstreamIDForPath:(id)arg1;
+ (int)getDirStatInfoForPath:(id)arg1 info:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; }*)arg2;
+ (id)getFSPurgeableDataOnVolumes:(id)arg1;
+ (unsigned long long)getInodeIDForPath:(id)arg1;
+ (id)getLSAppRecordForBundle:(id)arg1;
+ (void)getVolSizeFromAttrList:(const char *)arg1 completionHandler:(id /* block */)arg2;
+ (bool)isAppUserVisible:(id)arg1;
+ (bool)isAppsSetUserVisible:(id)arg1;
+ (bool)isFileCloned:(const char *)arg1;
+ (bool)isFilePurgeable:(const char *)arg1;
+ (bool)isItemMountedOnSystemVolume:(id)arg1;
+ (bool)targetDeviceIsIpad;

@end
