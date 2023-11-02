
@interface HMBLocalDatabase : HMFObject <HMFLogging> {
    <HMBLocalDatabaseDelegate> * _delegate;
    HMBLocalSQLContext * _local;
    id /* block */  _localZoneFactory;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    HMBModelContainer * _modelContainer;
    NSMapTable * _openZonesByZoneID;
    NSOperationQueue * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HMBLocalDatabaseDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HMBLocalSQLContext *local;
@property (nonatomic, copy) id /* block */ localZoneFactory;
@property (nonatomic, readonly) HMBModelContainer *modelContainer;
@property (nonatomic, readonly) NSMapTable *openZonesByZoneID;
@property (nonatomic, retain) NSOperationQueue *queue;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)_openZoneWithZoneID:(id)arg1 mirror:(id)arg2 configuration:(id)arg3 existingLocalZone:(id)arg4 error:(id*)arg5;
- (void)dealloc;
- (id)delegate;
- (void)detectedLocalCorruptionWithInfo:(id)arg1;
- (id)fetchZonesWithError:(id*)arg1;
- (void)handleLocalZoneShutdown:(id)arg1;
- (id)initWithDatastorePath:(id)arg1 configuration:(id)arg2;
- (id)initWithLocalSQLContext:(id)arg1 configuration:(id)arg2;
- (id)local;
- (id /* block */)localZoneFactory;
- (id)logIdentifier;
- (id)modelContainer;
- (id)openZoneWithMirror:(id)arg1 configuration:(id)arg2 error:(id*)arg3;
- (id)openZoneWithZoneID:(id)arg1 configuration:(id)arg2 error:(id*)arg3;
- (id)openZonesByZoneID;
- (id)queue;
- (bool)removeLocalDataForZone:(id)arg1 error:(id*)arg2;
- (id)removeZone:(id)arg1;
- (bool)reopenZone:(id)arg1 error:(id*)arg2;
- (void)setDelegate:(id)arg1;
- (void)setLocal:(id)arg1;
- (void)setLocalZoneFactory:(id /* block */)arg1;
- (void)setQueue:(id)arg1;

@end
