
@interface ATXGenericFileBasedCache : NSObject {
    NSString * _cacheFilePath;
    NSString * _debugName;
    NSObject<OS_os_log> * _loggingHandle;
}

@property (nonatomic, readonly, copy) NSString *cacheFilePath;

- (void).cxx_destruct;
- (id)cacheFilePath;
- (void)evict;
- (id)init;
- (id)initWithCacheFilePath:(id)arg1 loggingHandle:(id)arg2 debugName:(id)arg3;
- (id)readSecureCodedObjectWithMaxValidAge:(double)arg1 allowableClasses:(id)arg2 error:(id*)arg3;
- (id)readWithMaxValidAge:(double)arg1 error:(id*)arg2;
- (bool)storeData:(id)arg1 error:(id*)arg2;
- (bool)storeSecureCodedObject:(id)arg1 error:(id*)arg2;

@end
