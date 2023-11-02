
@interface CKSyncEngineFetchChangesScope : NSObject <NSCopying> {
    NSSet * _excludedZoneIDs;
    NSSet * _zoneIDs;
}

@property (readonly, copy) NSSet *excludedZoneIDs;
@property (readonly, copy) NSSet *zoneIDs;

+ (bool)scopeWithZoneIDs:(id)arg1 recordIDs:(id)arg2 excludedZoneIDs:(id)arg3 containsScopeWithZoneIDs:(id)arg4 recordIDs:(id)arg5 excludedZoneIDs:(id)arg6;

- (void).cxx_destruct;
- (bool)containsScope:(id)arg1;
- (bool)containsZoneID:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)excludedZoneIDs;
- (id)init;
- (id)initWithExcludedZoneIDs:(id)arg1;
- (id)initWithZoneIDs:(id)arg1;
- (id)initWithZoneIDs:(id)arg1 excludedZoneIDs:(id)arg2;
- (id)redactedDescription;
- (id)zoneIDs;

@end
