
@interface MKFCloudSyncMetadata : HMDManagedObject

@property (nonatomic, retain) NSPersistentHistoryToken *historyTokenForCloudSharedStore;
@property (nonatomic, retain) NSPersistentHistoryToken *historyTokenForCloudStore;
@property (nonatomic, retain) NSPersistentHistoryToken *historyTokenForWorkingStore;
@property (nonatomic) bool unique;

+ (id)fetchRequest;

- (void)willSave;

@end
