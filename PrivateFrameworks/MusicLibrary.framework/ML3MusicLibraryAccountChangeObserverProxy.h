
@interface ML3MusicLibraryAccountChangeObserverProxy : NSObject <MLMediaLibraryAccountChangeObserver> {
    NSObject<OS_dispatch_queue> * _calloutQueue;
    NSObject<OS_dispatch_queue> * _serialQueue;
    NSHashTable * _weakObservers;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *calloutQueue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSHashTable *readonlyObservers;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *serialQueue;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSHashTable *weakObservers;

+ (id)sharedProxy;

- (void).cxx_destruct;
- (id)_init;
- (void)addAccountChangeObserver:(id)arg1;
- (id)calloutQueue;
- (void)emergencyDisconnectWithCompletion:(id /* block */)arg1;
- (void)performDatabasePathChange:(id)arg1 completion:(id /* block */)arg2;
- (id)readonlyObservers;
- (void)removeAccountChangeObserver:(id)arg1;
- (id)serialQueue;
- (void)terminateForFailureToPerformDatabasePathChange;
- (id)weakObservers;

@end
