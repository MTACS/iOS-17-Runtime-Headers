
@protocol DNDSIDSSyncEngineDataSource <NSObject>

@required

- (void)idsSyncEngine:(DNDSIDSSyncEngine *)arg1 didFetchRecord:(DNDSIDSRecord *)arg2;
- (void)idsSyncEngine:(DNDSIDSSyncEngine *)arg1 prepareRecordToSave:(inout DNDSIDSRecord *)arg2;
- (void)idsSyncEngine:(DNDSIDSSyncEngine *)arg1 recordWithIDWasDeleted:(DNDSIDSRecordID *)arg2;
- (void)purgeRecordsForIDSSyncEngine:(DNDSIDSSyncEngine *)arg1;
- (NSArray *)recordIDsForIDSSyncEngine:(DNDSIDSSyncEngine *)arg1;

@end
