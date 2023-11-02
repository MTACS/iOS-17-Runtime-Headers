
@interface CKDFetchRecordPCSDiagnosticsOperation : CKDDatabaseOperation {
    NSMutableArray * _fetchedZones;
    NSMutableArray * _mutableCorruptRecords;
    NSArray * _zoneIDs;
}

@property (nonatomic, readonly) NSArray *corruptRecords;
@property (nonatomic, retain) NSMutableArray *fetchedZones;
@property (nonatomic, retain) NSMutableArray *mutableCorruptRecords;
@property (nonatomic) unsigned long long state;
@property (nonatomic, retain) NSArray *zoneIDs;

+ (id)nameForState:(unsigned long long)arg1;

- (void).cxx_destruct;
- (void)_checkRecordPCSForAllZones;
- (void)_fetchZones;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (id)activityCreate;
- (id)corruptRecords;
- (id)fetchedZones;
- (id)initWithOperationInfo:(id)arg1 container:(id)arg2;
- (void)main;
- (bool)makeStateTransition;
- (id)mutableCorruptRecords;
- (void)setFetchedZones:(id)arg1;
- (void)setMutableCorruptRecords:(id)arg1;
- (void)setZoneIDs:(id)arg1;
- (id)zoneIDs;

@end
