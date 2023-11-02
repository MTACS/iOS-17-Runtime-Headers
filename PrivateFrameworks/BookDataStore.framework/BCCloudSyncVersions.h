
@interface BCCloudSyncVersions : NSManagedObject <BCCloudSyncVersions>

@property (nonatomic) long long cloudVersion;
@property (nonatomic, copy) NSString *dataType;
@property (nonatomic, copy) NSPersistentHistoryToken *historyToken;
@property (nonatomic) long long historyTokenOffset;
@property (nonatomic) long long localVersion;
@property (nonatomic, copy) NSData *rawHistoryToken;
@property (nonatomic) long long syncVersion;

- (void)configureFromSyncVersions:(id)arg1;
- (id)historyToken;
- (id)mutableCopy;
- (void)setHistoryToken:(id)arg1;

@end
