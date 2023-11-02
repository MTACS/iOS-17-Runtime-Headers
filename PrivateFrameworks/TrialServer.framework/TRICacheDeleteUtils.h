
@interface TRICacheDeleteUtils : NSObject

+ (id)getFreeDiskSpace;
+ (id)getPurgeableDiskSpace;
+ (bool)hasSufficientDiskSpaceForDownload:(unsigned long long)arg1;

@end
