
@interface MKFResidentSyncMetadata : _MKFObject

@property (nonatomic, retain) _MKFHome *home;
@property (nonatomic, retain) NSPersistentHistoryToken *lastSeenToken;
@property (nonatomic, copy) NSString *lastSyncChecksum;
@property (nonatomic, copy) NSDate *lastSyncTimestamp;
@property (nonatomic, retain) NSPersistentHistoryToken *lastSyncToken;

+ (id)fetchRequest;

- (bool)validateForInsertOrUpdate:(id*)arg1;

@end
