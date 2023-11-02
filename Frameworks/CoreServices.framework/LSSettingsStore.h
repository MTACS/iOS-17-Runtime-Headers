
@interface LSSettingsStore : NSObject {
    NSObject<OS_dispatch_queue> * _observerQueue;
    NSMutableSet * _observerSet;
}

@property (readonly) NSObject<OS_dispatch_queue> *observerQueue;
@property (readonly) NSMutableSet *observerSet;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_init;
- (id)addChangeObserver:(id /* block */)arg1;
- (id)observerQueue;
- (id)observerSet;
- (void)removeChangeObserver:(id)arg1;
- (bool)resetUserElectionsWithError:(id*)arg1;
- (bool)setUserElection:(unsigned char)arg1 forExtensionKey:(id)arg2 error:(id*)arg3;
- (id)settingsStoreConfigurationForProcessWithAuditToken:(struct { unsigned int x1[8]; })arg1;
- (unsigned char)userElectionForExtensionKey:(id)arg1;

@end
