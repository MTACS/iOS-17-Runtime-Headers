
@interface HVQueue : NSObject {
    NSObject<OS_dispatch_semaphore> * _contentConsumedSemaphore;
    bool  _contentExpectedFromMultipleApps;
    NSString * _contentProtection;
    NSString * _identifier;
    _PASLock * _lock;
}

@property (nonatomic, readonly) NSString *contentProtection;
@property (nonatomic, readonly) NSString *identifier;

- (void).cxx_destruct;
- (bool)cleanupWithError:(id*)arg1 shouldContinueBlock:(id /* block */)arg2;
- (id)contentProtection;
- (bool)deleteContentWithRequest:(id)arg1 error:(id*)arg2;
- (bool)dequeueContent:(id*)arg1 dataSourceContentState:(id)arg2 minimumLevelOfService:(unsigned char)arg3 inMemoryItemsOnly:(bool)arg4 error:(id*)arg5;
- (bool)dequeuedContentConsumedWithError:(id*)arg1;
- (bool)dequeuedContentNotConsumed:(id)arg1 error:(id*)arg2;
- (id)description;
- (id)diskStorageStreamCount;
- (bool)enqueueContent:(id)arg1 error:(id*)arg2;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 biomeStream:(id)arg2 memoryLimit:(short)arg3 contentProtection:(id)arg4 contentExpectedFromMultipleApps:(bool)arg5;
- (id)statsWithError:(id*)arg1;
- (id)uniqueIdentifiersInDiskStorage;
- (id)uniqueIdentifiersInMemoryStorage;
- (unsigned char)waitForDequeuedContentConsumedWithTimeout:(double)arg1;

@end
