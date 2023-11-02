
@interface CKSyncEngineSendChangesScope : NSObject <NSCopying> {
    NSSet * _excludedZoneIDs;
    NSSet * _recordIDs;
    NSSet * _zoneIDs;
}

@property (readonly, copy) NSSet *excludedZoneIDs;
@property (readonly, copy) NSSet *recordIDs;
@property (readonly, copy) NSSet *zoneIDs;

- (void).cxx_destruct;
- (bool)containsPendingRecordZoneChange:(id)arg1;
- (bool)containsRecordID:(id)arg1;
- (bool)containsScope:(id)arg1;
- (bool)containsZoneOrRecordWithZoneID:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)excludedZoneIDs;
- (id)init;
- (id)initWithExcludedZoneIDs:(id)arg1;
- (id)initWithRecordIDs:(id)arg1;
- (id)initWithZoneIDs:(id)arg1;
- (id)initWithZoneIDs:(id)arg1 excludedZoneIDs:(id)arg2 recordIDs:(id)arg3;
- (id)recordIDs;
- (id)redactedDescription;
- (id)zoneIDs;

@end
