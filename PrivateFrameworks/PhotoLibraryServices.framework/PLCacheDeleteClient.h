
@interface PLCacheDeleteClient : NSObject {
    NSByteCountFormatter * _byteFormatter;
    NSObject<OS_dispatch_queue> * _cacheDeleteQueryQueue;
    NSString * _cachedVolume;
    NSObject<OS_dispatch_queue> * _callbackQueue;
    struct CacheDeleteToken { } * _currentCacheDeletePurgeToken;
    NSString * _pathForVolume;
}

@property (nonatomic, readonly) NSByteCountFormatter *byteFormatter;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *cacheDeleteQueryQueue;
@property (nonatomic, readonly) NSString *cacheDeleteVolume;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *callbackQueue;
@property (nonatomic) struct CacheDeleteToken { }*currentCacheDeletePurgeToken;
@property (nonatomic, readonly) NSString *pathForVolume;

+ (bool)hasEntitlementsForCacheDelete;

- (void).cxx_destruct;
- (void)_notifyDiskAvailabilityRequestCompletionHandler:(id /* block */)arg1 withSuccess:(bool)arg2 numBytesPurged:(long long)arg3 additionalBytesRequired:(long long)arg4 error:(id)arg5;
- (struct { long long x1; long long x2; })_queryAvailableSpace;
- (id)byteFormatter;
- (id)cacheDeleteQueryQueue;
- (id)cacheDeleteVolume;
- (id)callbackQueue;
- (void)cancelDiskSpaceAvailabilityRequest;
- (struct CacheDeleteToken { }*)currentCacheDeletePurgeToken;
- (id)initWithQoSClass:(unsigned int)arg1 pathForVolume:(id)arg2 callbackQueue:(id)arg3;
- (id)pathForVolume;
- (void)requestDiskSpaceAvailabilityOfSize:(long long)arg1 completion:(id /* block */)arg2;
- (void)setCurrentCacheDeletePurgeToken:(struct CacheDeleteToken { }*)arg1;

@end
