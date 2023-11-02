
@interface CKDPCSSQLCacheEntry : CKSQLiteCacheTableEntry {
    id  _CKDPCSData;
    NSString * _accountID;
    NSNumber * _databaseScope;
    NSString * _identifier;
    NSNumber * _itemType;
    NSString * _parentID;
    NSString * _serviceName;
    NSString * _shareID;
    NSString * _zoneID;
}

@property (nonatomic, retain) id CKDPCSData;
@property (nonatomic, retain) NSString *accountID;
@property (nonatomic, retain) NSNumber *databaseScope;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) NSNumber *itemType;
@property (nonatomic, retain) NSString *parentID;
@property (nonatomic, retain) NSString *serviceName;
@property (nonatomic, retain) NSString *shareID;
@property (nonatomic, retain) NSString *zoneID;

- (void).cxx_destruct;
- (id)CKDPCSData;
- (id)accountID;
- (id)databaseScope;
- (id)identifier;
- (id)itemType;
- (id)parentID;
- (id)serviceName;
- (void)setAccountID:(id)arg1;
- (void)setCKDPCSData:(id)arg1;
- (void)setDatabaseScope:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setItemType:(id)arg1;
- (void)setParentID:(id)arg1;
- (void)setServiceName:(id)arg1;
- (void)setShareID:(id)arg1;
- (void)setZoneID:(id)arg1;
- (id)shareID;
- (id)zoneID;

@end
