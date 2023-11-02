
@interface MPStoreItemMetadataImportWindow : NSObject {
    NSMutableArray * _accumulatedObjects;
    double  _eventCadence;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    double  _maximumLatency;
    NSObject<OS_dispatch_queue> * _queue;
    MPServerObjectDatabase * _serverObjectDatabase;
}

@property (nonatomic, readonly) double eventCadence;
@property (nonatomic, readonly) double maximumLatency;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) MPServerObjectDatabase *serverObjectDatabase;

- (void).cxx_destruct;
- (void)_checkCadence;
- (void)_purge;
- (void)addPayload:(id)arg1 userIdentity:(id)arg2;
- (double)eventCadence;
- (id)initWithEventCadence:(double)arg1 maximumLatency:(double)arg2 serverObjectDatabase:(id)arg3 queue:(id)arg4;
- (double)maximumLatency;
- (id)queue;
- (id)serverObjectDatabase;

@end
