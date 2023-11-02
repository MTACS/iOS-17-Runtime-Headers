
@interface _TVRCExpiringStore : NSObject {
    NSMapTable * _identifierToBlockMap;
    NSMutableSet * _store;
}

@property (nonatomic, retain) NSMapTable *identifierToBlockMap;
@property (nonatomic, retain) NSMutableSet *store;

- (void).cxx_destruct;
- (void)_removeIdentifierAndPerformCompletion:(id)arg1;
- (void)addIdentifier:(id)arg1 withExpiration:(double)arg2 completion:(id /* block */)arg3;
- (bool)containsIdentifier:(id)arg1;
- (void)dealloc;
- (id)identifierToBlockMap;
- (id)init;
- (void)removeIdentifier:(id)arg1;
- (void)setIdentifierToBlockMap:(id)arg1;
- (void)setStore:(id)arg1;
- (id)store;

@end
