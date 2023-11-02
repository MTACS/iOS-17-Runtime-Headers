
@interface GEOOfflineRemoteDataAccess : NSObject <GEOOfflineDataAccessor> {
    GEOXPCConnection * _connection;
    struct GEOOnce_s { 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } lock; 
        bool didRun; 
    }  _createdConnection;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_ensureConnection;
- (id)dataForKey:(id)arg1 error:(id*)arg2;
- (void)getAvailableKeysForLayer:(unsigned int)arg1 callbackQueue:(id)arg2 callback:(id /* block */)arg3;
- (void)getDataForKey:(id)arg1 callbackQueue:(id)arg2 callback:(id /* block */)arg3;
- (void)getOfflineVersionMetadataWithCallbackQueue:(id)arg1 callback:(id /* block */)arg2;
- (void)hasDataForKey:(id)arg1 callbackQueue:(id)arg2 callback:(id /* block */)arg3;
- (bool)hasDataForKey:(id)arg1 error:(id*)arg2;
- (id)init;
- (id)offlineTileMetadataWithError:(id*)arg1;

@end
