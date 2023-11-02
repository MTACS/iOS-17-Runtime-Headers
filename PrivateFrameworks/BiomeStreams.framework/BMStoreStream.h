
@interface BMStoreStream : NSObject <BMSharedSyncableStream, BMSourceStream, BMSyncableStream, BMTimeBasedPublisherStream, HMDPrunableBMStoreStream> {
    BMAccessClient * _accessClient;
    BMBFSPruningDelegate * _bfsPruningDelegate;
    Class  _eventDataClass;
    BMFileManager * _fileManager;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    BMStreamDatastorePruner * _pruner;
    BMStorePublisherManager * _publisherManager;
    BMStoreSource * _source;
    BMStoreConfig * _storeConfig;
    NSString * _streamIdentifier;
    unsigned long long  _streamType;
    BMStreamDatastorePruner * _tombstonePruner;
    NSString * _useCase;
    BMStoreValidator * _validator;
}

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *useCase;

+ (id)new;

- (void).cxx_destruct;
- (id)_bfsPruningDelegate;
- (id)_computeSource;
- (void)_pruneWithStoreConfig:(id)arg1 expirationAge:(double)arg2 block:(id /* block */)arg3;
- (bool)_requestReadOnlyAccess;
- (bool)_requestReadWriteAccess;
- (bool)_requestWriteOnlyAccess;
- (id)accountsWithError:(id*)arg1;
- (id)bfsPruningDelegate;
- (bool)deleteStoreEvent:(id)arg1;
- (id)identifier;
- (id)init;
- (id)initWithPreMigrationPublicStream:(long long)arg1;
- (id)initWithPrivateStreamIdentifier:(id)arg1 storeConfig:(id)arg2;
- (id)initWithPrivateStreamIdentifier:(id)arg1 storeConfig:(id)arg2 eventDataClass:(Class)arg3;
- (id)initWithPublicStream:(long long)arg1;
- (id)initWithPublicStream:(long long)arg1 protectionClass:(unsigned long long)arg2;
- (id)initWithPublicStream:(long long)arg1 protectionClass:(unsigned long long)arg2 eventDataClass:(Class)arg3;
- (id)initWithPublicStream:(long long)arg1 storeConfig:(id)arg2;
- (id)initWithRestrictedStreamIdentifier:(id)arg1;
- (id)initWithRestrictedStreamIdentifier:(id)arg1 protectionClass:(unsigned long long)arg2;
- (id)initWithRestrictedStreamIdentifier:(id)arg1 storeConfig:(id)arg2;
- (id)initWithRestrictedStreamIdentifier:(id)arg1 storeConfig:(id)arg2 eventDataClass:(Class)arg3;
- (id)initWithStreamIdentifier:(id)arg1 storeConfig:(id)arg2;
- (id)initWithStreamIdentifier:(id)arg1 storeConfig:(id)arg2 streamType:(unsigned long long)arg3;
- (id)initWithStreamIdentifier:(id)arg1 storeConfig:(id)arg2 streamType:(unsigned long long)arg3 eventDataClass:(Class)arg4 useCase:(id)arg5;
- (bool)pruneEventsWithError:(id*)arg1 predicateBlock:(id /* block */)arg2;
- (bool)pruneEventsWithReason:(unsigned long long)arg1 error:(id*)arg2 predicateBlock:(id /* block */)arg3;
- (void)pruneExpiredEventsWithBlock:(id /* block */)arg1;
- (void)pruneLocalAndRemoteEventsWithPredicateBlock:(id /* block */)arg1;
- (void)pruneLocalAndRemoteEventsWithReason:(unsigned long long)arg1 usingPredicateBlock:(id /* block */)arg2;
- (void)pruneStreamByPruningPolicyMaxStreamSize;
- (void)pruneStreamBySize:(unsigned long long)arg1;
- (void)pruneTombstonesByAge:(double)arg1;
- (void)pruneWithPredicateBlock:(id /* block */)arg1;
- (void)pruneWithReason:(unsigned long long)arg1 usingPredicateBlock:(id /* block */)arg2;
- (id)pruner;
- (id)publisher;
- (id)publisherFromStartTime:(double)arg1;
- (id)publisherWithStartTime:(id)arg1 endTime:(id)arg2 maxEvents:(id)arg3 lastN:(id)arg4 reversed:(bool)arg5;
- (id)publisherWithStartTime:(id)arg1 endTime:(id)arg2 maxEvents:(id)arg3 reversed:(bool)arg4;
- (id)publisherWithStartTime:(id)arg1 withEndTime:(id)arg2 withMaxEvents:(id)arg3 reversed:(bool)arg4;
- (id)publishersForAccounts:(id)arg1 deviceTypes:(unsigned int)arg2 withUseCase:(id)arg3 startTime:(id)arg4 endTime:(id)arg5 maxEvents:(id)arg6 lastN:(id)arg7 reversed:(bool)arg8 includeLocal:(bool)arg9 pipeline:(id /* block */)arg10;
- (id)publishersForDevices:(id)arg1 startTime:(id)arg2 endTime:(id)arg3 maxEvents:(id)arg4 lastN:(id)arg5 reversed:(bool)arg6 includeLocal:(bool)arg7 pipeline:(id /* block */)arg8;
- (id)publishersForDevices:(id)arg1 startTime:(double)arg2 includeLocal:(bool)arg3 pipeline:(id /* block */)arg4;
- (id)publishersForRemoteDevices:(id)arg1 startTime:(id)arg2 endTime:(id)arg3 maxEvents:(id)arg4 lastN:(id)arg5 reversed:(bool)arg6 includeLocal:(bool)arg7 pipeline:(id /* block */)arg8;
- (id)publishersForRemoteDevices:(id)arg1 startTime:(double)arg2 includeLocal:(bool)arg3 pipeline:(id /* block */)arg4;
- (id)remoteDevices;
- (id)remoteDevicesWithError:(id*)arg1;
- (id)sharedSyncAccountsForDomain:(unsigned long long)arg1 error:(id*)arg2;
- (id)source;
- (id)tombstoneConfig;
- (id)tombstonePruner;
- (id)useCase;
- (id)validator;

@end
