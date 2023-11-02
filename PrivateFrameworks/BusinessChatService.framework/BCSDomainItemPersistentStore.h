
@interface BCSDomainItemPersistentStore : BCSPersistentStore <BCSDomainItemCaching>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)databasePath;
- (void)deleteAllDomainItems;
- (void)deleteAllExpiredDomainItems;
- (void)deleteDomainItemMatching:(id)arg1;
- (id)domainItemMatching:(id)arg1;
- (bool)executeDeleteDomainDomainItemSQLQuery:(id)arg1;
- (const char *)schema;
- (long long)schemaVersion;
- (void)updateDomainItem:(id)arg1 withDomainItemIdentifier:(id)arg2;
- (void)updateDomainItemsForDomainShard:(id)arg1;

@end
