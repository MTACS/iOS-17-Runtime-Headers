
@interface CLConditionLedger : NSObject {
    NSData * _encryptionKey;
    NSURL * _ledgerFile;
    NSString * _ledgerName;
    NSMutableDictionary * _recordTable;
}

@property (getter=defaultFileManager, readonly) NSFileManager *fileManager;
@property (nonatomic, readonly) NSURL *ledgerFile;
@property (nonatomic, readonly) NSString *ledgerName;
@property (getter=allMonitoringIdentifiers, readonly) NSArray *monitoredIdentifiers;
@property (getter=allMonitoringRecordsByIdentifier, readonly) NSDictionary *monitoredRecordsByIdentifier;

- (void)addRecordForMonitoring:(id)arg1 identifier:(id)arg2;
- (id)allMonitoringIdentifiers;
- (id)allMonitoringRecordsByIdentifier;
- (void)dealloc;
- (id)defaultFileManager;
- (void)deleteLedgerFile;
- (bool)directoryExists:(id)arg1;
- (id)initWithStoreType:(long long)arg1 domain:(long long)arg2 monitorConfiguration:(id)arg3;
- (id)ledgerFile;
- (id)ledgerName;
- (id)monitoringRecordForIdentifier:(id)arg1;
- (void)readConditionsFromFile;
- (void)removeRecordFromMonitoringWithIdentifier:(id)arg1;
- (void)setLedgerForType:(long long)arg1 domain:(long long)arg2 monitor:(id)arg3 client:(id)arg4 path:(id)arg5;
- (void)updateEvent:(id)arg1 forIdentifier:(id)arg2;
- (void)updateRecord:(id)arg1 identifier:(id)arg2;
- (bool)writeToFile;

@end
