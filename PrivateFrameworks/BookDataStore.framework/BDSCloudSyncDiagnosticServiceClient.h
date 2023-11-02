
@interface BDSCloudSyncDiagnosticServiceClient : NSObject {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _accessLock;
    <BDSServiceProtocol> * _serviceProxy;
}

@property (nonatomic, readonly) <BDSServiceProtocol> *serviceProxy;

+ (id)sharedServiceProxy;

- (void).cxx_destruct;
- (void)clearSyncMetadata:(id /* block */)arg1;
- (void)detachWithCompletionHandler:(id /* block */)arg1;
- (void)diagnosticInfoWithCompletionHandler:(id /* block */)arg1;
- (void)findLocalIdDupesWithCompletionHandler:(id /* block */)arg1;
- (void)forceFetchRemoteChanges:(id /* block */)arg1;
- (id)init;
- (id)serviceProxy;

@end
