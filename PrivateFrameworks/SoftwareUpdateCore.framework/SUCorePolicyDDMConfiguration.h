
@interface SUCorePolicyDDMConfiguration : NSObject {
    SUCoreLog * _logger;
    SUCorePersistedState * _persistedState;
    NSObject<OS_dispatch_queue> * _stateQueue;
}

@property (retain) SUCoreLog *logger;
@property (retain) SUCorePersistedState *persistedState;
@property (retain) NSObject<OS_dispatch_queue> *stateQueue;

+ (id)declarationFromAllDeclarationDicts:(id)arg1;
+ (id)declarationFromAllDeclarations:(id)arg1;
+ (id)getDaemonCacheDirectory;
+ (id)sharedInstance;
+ (id)statePersistencePath;

- (void).cxx_destruct;
- (id)_dateFromString:(id)arg1;
- (bool)addDeclaration:(id)arg1 withKey:(id)arg2;
- (bool)addDeclaration:(id)arg1 withKey:(id)arg2 returningError:(id*)arg3;
- (id)allDeclarations;
- (id)allKeys;
- (id)currentlyApplicableDeclaration;
- (id)declarationForKey:(id)arg1;
- (id)description;
- (id)initWithState;
- (id)initWithStatePersistencePath:(id)arg1;
- (id)logger;
- (id)persistedState;
- (void)removeAllDeclarations;
- (void)removeAllInvalidDeclarations;
- (bool)removeDeclarationForKey:(id)arg1;
- (void)setLogger:(id)arg1;
- (void)setPersistedState:(id)arg1;
- (void)setStateQueue:(id)arg1;
- (id)stateQueue;

@end
