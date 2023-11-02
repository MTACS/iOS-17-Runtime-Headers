
@protocol BCSDomainItemCaching <BCSBatchable>

@required

- (void)deleteAllDomainItems;
- (void)deleteAllExpiredDomainItems;
- (void)deleteDomainItemMatching:(id <BCSDomainItemIdentifying>)arg1;
- (<BCSDomainItemProtocol> *)domainItemMatching:(id <BCSDomainItemIdentifying>)arg1;
- (void)updateDomainItem:(id <BCSDomainItemProtocol>)arg1 withDomainItemIdentifier:(id <BCSDomainItemIdentifying>)arg2;
- (void)updateDomainItemsForDomainShard:(id <BCSDomainShardItemProtocol>)arg1;

@end
