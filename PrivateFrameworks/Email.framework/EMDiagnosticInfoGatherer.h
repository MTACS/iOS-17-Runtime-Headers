
@interface EMDiagnosticInfoGatherer : NSObject <EFLoggable, EMDiagnosticInfoProvidingXPC> {
    EMRemoteConnection * _connection;
    _Atomic bool  _hasRegisteredAsDiagnosticProvider;
    <EFCancelable> * _providerCancelable;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _providerCancelableLock;
    <EFScheduler> * _providerQueue;
    EFLocked * _providers;
}

@property (nonatomic, retain) EMRemoteConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <EFCancelable> *providerCancelable;
@property (nonatomic, retain) <EFScheduler> *providerQueue;
@property (nonatomic, retain) EFLocked *providers;
@property (readonly) Class superclass;

+ (id)localDiagnosticsDirectoryURL;
+ (id)log;
+ (id)remoteInterface;

- (void).cxx_destruct;
- (id)_moveLocalDiagnosticsTo:(id)arg1;
- (void)_registerSelfAsProviderIfRequired;
- (id)connection;
- (void)databaseStatisticsWithCompletionHandler:(id /* block */)arg1;
- (void)dealloc;
- (void)fetchControllerStatusWithCompletionHandler:(id /* block */)arg1;
- (void)gatherDiagnosticsWithOptions:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;
- (id)initWithRemoteConnection:(id)arg1;
- (void)provideDiagnosticsAt:(id)arg1 options:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (id)providerCancelable;
- (id)providerQueue;
- (id)providers;
- (id)registerDiagnosticInfoProvider:(id)arg1;
- (void)setConnection:(id)arg1;
- (void)setProviderCancelable:(id)arg1;
- (void)setProviderQueue:(id)arg1;
- (void)setProviders:(id)arg1;

@end
