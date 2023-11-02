
@interface PFCloudKitImportDatabaseContext : NSObject {
    NSMutableSet * _changedRecordZoneIDs;
    NSMutableSet * _deletedRecordZoneIDs;
    NSMutableSet * _purgedRecordZoneIDs;
    CKServerChangeToken * _updatedChangeToken;
    NSMutableSet * _userResetEncryptedDataZoneIDs;
}

- (void)dealloc;
- (id)description;
- (id)init;

@end
