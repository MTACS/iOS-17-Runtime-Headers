
@interface CKDIdentityCacheTableEntry : CKSQLiteCacheTableEntry {
    NSString * _containerIdentifier;
    NSString * _dataSeparationHash;
    CKUserIdentity * _identity;
    CKUserIdentityLookupInfo * _lookupInfo;
    NSNumber * _rowid;
}

@property (nonatomic, retain) NSString *containerIdentifier;
@property (nonatomic, retain) NSString *dataSeparationHash;
@property (nonatomic, retain) CKUserIdentity *identity;
@property (nonatomic, retain) CKUserIdentityLookupInfo *lookupInfo;
@property (nonatomic, retain) NSNumber *rowid;

- (void).cxx_destruct;
- (id)containerIdentifier;
- (id)dataSeparationHash;
- (id)identity;
- (id)lookupInfo;
- (id)rowid;
- (void)setContainerIdentifier:(id)arg1;
- (void)setDataSeparationHash:(id)arg1;
- (void)setIdentity:(id)arg1;
- (void)setLookupInfo:(id)arg1;
- (void)setRowid:(id)arg1;

@end
