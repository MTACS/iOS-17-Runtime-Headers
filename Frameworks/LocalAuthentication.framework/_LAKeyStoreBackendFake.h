
@interface _LAKeyStoreBackendFake : NSObject <LAKeyStoreBackend> {
    NSMutableDictionary * _genps;
    NSMutableDictionary * _keys;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)createGenericPasswordWithQuery:(id)arg1 error:(id*)arg2;
- (bool)createKeyWithQuery:(id)arg1 error:(id*)arg2;
- (id)fetchItemWithQuery:(id)arg1 error:(id*)arg2;
- (id)fetchItemsWithQuery:(id)arg1 error:(id*)arg2;
- (id)init;
- (bool)removeItemsWithQuery:(id)arg1 error:(id*)arg2;

@end
