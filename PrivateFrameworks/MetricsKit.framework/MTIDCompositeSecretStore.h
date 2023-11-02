
@interface MTIDCompositeSecretStore : NSObject <MTIDSecretStore> {
    NSMutableDictionary * _stores;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableDictionary *stores;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)clearLocalData;
- (id)debugInfo;
- (id)init;
- (id)maintainSchemes:(id)arg1 options:(id)arg2;
- (id)resetSchemes:(id)arg1 options:(id)arg2;
- (id)schemesGroupedByStore:(id)arg1;
- (id)secretForScheme:(id)arg1 options:(id)arg2;
- (id)secretStoreForScheme:(id)arg1;
- (void)setStores:(id)arg1;
- (id)storeKeyForScheme:(id)arg1;
- (id)stores;
- (id)syncForSchemes:(id)arg1 options:(id)arg2;

@end
