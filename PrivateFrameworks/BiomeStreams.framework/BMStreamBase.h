
@interface BMStreamBase : NSObject <BMSharedSyncableStream, BMSyncableStream> {
    BMStreamConfiguration * _configuration;
    NSString * _identifier;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    BMSQLSchema * _schema;
    BMStoreStream * _storeStream;
}

@property (nonatomic, readonly) BMStreamConfiguration *configuration;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly) BMSQLSchema *schema;
@property (nonatomic, readonly) BMStoreStream *storeStream;

- (void).cxx_destruct;
- (id)DSLPublisher;
- (id)DSLPublisherWithUseCase:(id)arg1;
- (id)accountsWithError:(id*)arg1;
- (id)configuration;
- (id)description;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 schema:(id)arg2 configuration:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)pruner;
- (id)publisher;
- (id)publisherWithOptions:(id)arg1;
- (id)publisherWithUseCase:(id)arg1;
- (id)publisherWithUseCase:(id)arg1 options:(id)arg2;
- (id)publishersForAccounts:(id)arg1 deviceTypes:(unsigned int)arg2 withUseCase:(id)arg3 startTime:(id)arg4 endTime:(id)arg5 maxEvents:(id)arg6 lastN:(id)arg7 reversed:(bool)arg8 includeLocal:(bool)arg9 pipeline:(id /* block */)arg10;
- (id)publishersForDevices:(id)arg1 startTime:(id)arg2 endTime:(id)arg3 maxEvents:(id)arg4 lastN:(id)arg5 reversed:(bool)arg6 includeLocal:(bool)arg7 pipeline:(id /* block */)arg8;
- (id)publishersForDevices:(id)arg1 startTime:(double)arg2 includeLocal:(bool)arg3 pipeline:(id /* block */)arg4;
- (id)publishersForDevices:(id)arg1 withUseCase:(id)arg2 startTime:(id)arg3 endTime:(id)arg4 maxEvents:(id)arg5 lastN:(id)arg6 reversed:(bool)arg7 includeLocal:(bool)arg8 pipeline:(id /* block */)arg9;
- (id)publishersForDevices:(id)arg1 withUseCase:(id)arg2 startTime:(double)arg3 includeLocal:(bool)arg4 pipeline:(id /* block */)arg5;
- (id)remoteDevicesWithError:(id*)arg1;
- (id)schema;
- (id)source;
- (id)storeStream;
- (id)storeStreamForUseCase:(id)arg1;

@end
