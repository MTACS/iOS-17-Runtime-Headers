
@interface PPLocationReadWriteClient : NSObject {
    PPXPCClientHelper * _clientHelper;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (bool)_doDeletionSyncCallWithError:(id*)arg1 deletedCount:(unsigned long long*)arg2 syncCall:(id /* block */)arg3;
- (bool)_doSyncCallWithError:(id*)arg1 syncCall:(id /* block */)arg2;
- (id)_synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (bool)clearWithError:(id*)arg1 deletedCount:(unsigned long long*)arg2;
- (bool)cloudSyncWithError:(id*)arg1;
- (bool)donateLocations:(id)arg1 source:(id)arg2 contextualNamedEntities:(id)arg3 algorithm:(unsigned short)arg4 cloudSync:(bool)arg5 decayRate:(double)arg6 error:(id*)arg7;
- (id)init;

@end
