
@interface WBBookmarkDatabaseSyncData : NSObject <NSCopying, NSSecureCoding> {
    NSSet * _auxiliaryRecordIDsToDelete;
    bool  _didNotSaveRecordsAfterMigration;
    NSSet * _idsOfRecordZonesToRefresh;
    long long  _lastChangeID;
    CKServerChangeToken * _lastPrivateDatabaseServerChangeToken;
    CKServerChangeToken * _lastSharedDatabaseServerChangeToken;
    long long  _minimumSyncAPIVersion;
    NSSet * _recordIDsToRefresh;
    NSMutableDictionary * _recordZoneIDsToHashGenerators;
    NSMutableDictionary * _recordZoneIDsToLastServerChangeTokens;
}

@property (nonatomic, copy) NSSet *auxiliaryRecordIDsToDelete;
@property (nonatomic) bool didNotSaveRecordsAfterMigration;
@property (nonatomic, readonly, copy) NSData *encodedDatabaseSyncData;
@property (nonatomic, copy) NSSet *idsOfRecordZonesToRefresh;
@property (nonatomic, copy) CKServerChangeToken *lastPrivateDatabaseServerChangeToken;
@property (nonatomic, copy) CKServerChangeToken *lastSharedDatabaseServerChangeToken;
@property (nonatomic) long long minimumSyncAPIVersion;
@property (nonatomic, readonly) long long nextChangeID;
@property (nonatomic, copy) NSSet *recordIDsToRefresh;
@property (nonatomic, readonly, copy) NSDictionary *recordZoneIDsToHashGenerators;
@property (nonatomic, readonly, copy) NSDictionary *recordZoneIDsToLastServerChangeTokens;

+ (id)databaseSyncDataInDatabase:(void*)arg1 databaseAccessor:(id)arg2;
+ (id)databaseSyncDataWithContentsOfData:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)auxiliaryRecordIDsToDelete;
- (void)clearAllLastServerChangeTokens;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)didNotSaveRecordsAfterMigration;
- (void)encodeWithCoder:(id)arg1;
- (id)encodedDatabaseSyncData;
- (id)hashGeneratorForRecordZoneID:(id)arg1;
- (id)idsOfRecordZonesToRefresh;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)lastPrivateDatabaseServerChangeToken;
- (id)lastServerChangeTokenForRecordZoneID:(id)arg1;
- (id)lastSharedDatabaseServerChangeToken;
- (long long)minimumSyncAPIVersion;
- (long long)nextChangeID;
- (id)recordIDsToRefresh;
- (id)recordZoneIDsToHashGenerators;
- (id)recordZoneIDsToLastServerChangeTokens;
- (void)setAuxiliaryRecordIDsToDelete:(id)arg1;
- (void)setDidNotSaveRecordsAfterMigration:(bool)arg1;
- (void)setHashGenerator:(id)arg1 forRecordZoneID:(id)arg2;
- (void)setIdsOfRecordZonesToRefresh:(id)arg1;
- (void)setLastPrivateDatabaseServerChangeToken:(id)arg1;
- (void)setLastServerChangeToken:(id)arg1 forRecordZoneID:(id)arg2;
- (void)setLastSharedDatabaseServerChangeToken:(id)arg1;
- (void)setMinimumSyncAPIVersion:(long long)arg1;
- (void)setRecordIDsToRefresh:(id)arg1;
- (void)writeToDatabase:(void*)arg1 databaseAccessor:(id)arg2;

@end
