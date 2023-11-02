
@interface VCDaemonDatabaseProvider : NSObject <WFDatabaseProvider> {
    WFDatabase * _database;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, readonly) WFDatabase *database;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)database;
- (id)databaseWithError:(id*)arg1;
- (id)init;
- (bool)isShortcutsAppInstalled;
- (void)migrateVoiceShortcutsToShortcutsInDatabase:(id)arg1;
- (id)queue;

@end
