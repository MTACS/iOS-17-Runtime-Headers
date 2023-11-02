
@protocol HFDiskCacheDelegate <NSObject>

@optional

- (void)diskCache:(HFDiskCache *)arg1 didEvictFileFromDisk:(NSURL *)arg2 forUniqueIdentifier:(NSUUID *)arg3;
- (bool)diskCache:(HFDiskCache *)arg1 shouldAddExistingFileToCache:(NSURL *)arg2;
- (NSUUID *)diskCache:(HFDiskCache *)arg1 uniqueIdentifierForExistingFile:(NSURL *)arg2;

@end
