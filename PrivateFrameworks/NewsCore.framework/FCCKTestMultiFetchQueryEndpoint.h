
@interface FCCKTestMultiFetchQueryEndpoint : NSObject <FCCKTestQueryEndpoint>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)_collectRecordIDsFromRecords:(id)arg1 linkKeysByRecordType:(id)arg2;
- (id)_collectRecordsWithRecords:(id)arg1 recordIDs:(id)arg2 linkKeysByRecordType:(id)arg3 visitedRecordIDs:(id)arg4 missingRecordIDs:(id)arg5;
- (void)handleQueryOperation:(id)arg1 withRecords:(id)arg2 droppedFeeds:(id)arg3;

@end
