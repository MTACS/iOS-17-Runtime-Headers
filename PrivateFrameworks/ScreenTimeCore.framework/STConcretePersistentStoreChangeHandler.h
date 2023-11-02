
@interface STConcretePersistentStoreChangeHandler : NSObject <STPersistentStoreChangeHandler> {
    NSMutableDictionary * _lastPersistentHistoryTokenByStoreIdentifier;
    NSObject * _lastPersistentHistoryTokenByStoreIdentifierLock;
    NSPersistentContainer * _persistentContainer;
}

@property (readonly) NSMutableDictionary *lastPersistentHistoryTokenByStoreIdentifier;
@property (readonly) NSPersistentContainer *persistentContainer;

- (void).cxx_destruct;
- (void)handlePersistentStoreCoordinatorStoresDidChange:(id)arg1;
- (void)handleRemotePersistentStoreDidChange:(id)arg1 inContext:(id)arg2;
- (id)initWithPersistentContainer:(id)arg1;
- (id)lastPersistentHistoryTokenByStoreIdentifier;
- (id)persistentContainer;
- (id)persistentHistoryTokenForStore:(id)arg1;
- (void)savePersistentHistoryToken:(id)arg1 forStore:(id)arg2;

@end
