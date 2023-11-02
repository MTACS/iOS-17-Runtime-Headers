
@interface HFDiskCache : HFCache <HFCacheDelegate> {
    NSURL * _directoryURL;
    <HFDiskCacheDelegate> * _diskCacheDelegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSURL *directoryURL;
@property (nonatomic, readonly) <HFDiskCacheDelegate> *diskCacheDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_createCacheEntriesFromFilesOnDisk;
- (void)cache:(id)arg1 didEvictObject:(id)arg2 forKey:(id)arg3 cost:(unsigned long long)arg4;
- (void)createCacheEntriesFromFilesOnDisk;
- (id)directoryURL;
- (id)diskCacheDelegate;
- (id)initWithCacheDirectoryURL:(id)arg1 diskCacheDelegate:(id)arg2;

@end
