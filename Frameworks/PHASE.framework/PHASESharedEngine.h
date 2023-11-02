
@interface PHASESharedEngine : PHASEEngine {
    NSMutableDictionary * _sessionRootObjects;
    PHASESharedListener * _sharedListener;
}

@property (nonatomic, readonly) PHASESharedListener *sharedListener;

- (void).cxx_destruct;
- (void)gatherSharedEntityDebugInformation:(id /* block */)arg1;
- (id)initWithUpdateMode:(long long)arg1 error:(id*)arg2;
- (id)rootObject;
- (id)rootObjectForSessionIOBinding:(id)arg1 error:(id*)arg2;
- (id)rootObjectForSessionUUID:(id)arg1 error:(id*)arg2;
- (id)sessionRootObjects;
- (id)sharedListener;

@end
