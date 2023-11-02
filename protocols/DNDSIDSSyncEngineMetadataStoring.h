
@protocol DNDSIDSSyncEngineMetadataStoring <NSObject>

@required

- (NSArray *)deletedRecordIDsForPairedDeviceIdentifier:(NSString *)arg1;
- (void)garbageCollect;
- (bool)hasMetadataForPairedDeviceIdentifier:(NSString *)arg1;
- (bool)hasPerformedInitialSyncForPairedDeviceIdentifier:(NSString *)arg1;
- (bool)isValidAtDate:(NSDate *)arg1;
- (NSArray *)modifiedRecordIDsForPairedDeviceIdentifier:(NSString *)arg1;
- (void)purge;
- (DNDSIDSRecordMetadata *)recordMetadataForRecordID:(DNDSIDSRecordID *)arg1;
- (void)removePairedDeviceIdentifier:(NSString *)arg1;
- (void)setDeletedAtDate:(NSDate *)arg1 forRecordIDs:(NSArray *)arg2;
- (void)setLastModifiedDate:(NSDate *)arg1 forRecordIDs:(NSArray *)arg2;
- (void)setPerformedInitialSyncForPairedDeviceIdentifier:(NSString *)arg1;
- (void)setSyncDate:(NSDate *)arg1 forRecordIDs:(NSArray *)arg2 forPairedDeviceIdentifier:(NSString *)arg3;
- (void)setSyncDate:(NSDate *)arg1 forRecordsMatchingMetadata:(NSArray *)arg2 forPairedDeviceIdentifier:(NSString *)arg3;
- (NSArray *)unknownRecordIDsInRecordIDs:(NSArray *)arg1;
- (void)updateMetadata:(NSArray *)arg1;

@end
