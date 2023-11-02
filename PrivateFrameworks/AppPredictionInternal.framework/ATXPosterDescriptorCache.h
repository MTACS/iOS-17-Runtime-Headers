
@interface ATXPosterDescriptorCache : NSObject {
    ATXGenericFileBasedCache * _fileCache;
    _PASLock * _lock;
    NSObject<OS_dispatch_queue> * _outputQueue;
}

@property (nonatomic, readonly, copy) NSSet *allDescriptors;
@property (nonatomic, readonly, copy) NSDictionary *descriptors;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_readDescriptorsFromDisk;
- (void)_writeDescriptorsToDisk:(id)arg1;
- (id)allDescriptors;
- (id)descriptors;
- (id)init;
- (id)initWithPath:(id)arg1;
- (void)registerObserver:(id)arg1;
- (void)unregisterObserver:(id)arg1;
- (void)updateDescriptors:(id)arg1;

@end
