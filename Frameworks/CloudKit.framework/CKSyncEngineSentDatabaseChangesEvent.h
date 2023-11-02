
@interface CKSyncEngineSentDatabaseChangesEvent : CKSyncEngineEvent {
    NSArray * _deletedZoneIDs;
    NSDictionary * _failedZoneDeletes;
    NSArray * _failedZoneSaves;
    NSArray * _savedZones;
}

@property (nonatomic, readonly, copy) NSArray *deletedZoneIDs;
@property (nonatomic, readonly, copy) NSDictionary *failedZoneDeletes;
@property (nonatomic, readonly, copy) NSArray *failedZoneSaves;
@property (nonatomic, readonly, copy) NSArray *savedZones;

- (void).cxx_destruct;
- (void)CKDescribePropertiesUsing:(id)arg1;
- (id)deletedZoneIDs;
- (id)failedZoneDeletes;
- (id)failedZoneSaves;
- (id)initWithSavedZones:(id)arg1 failedZoneSaves:(id)arg2 deletedZoneIDs:(id)arg3 failedZoneDeletes:(id)arg4;
- (id)savedZones;
- (long long)type;

@end
