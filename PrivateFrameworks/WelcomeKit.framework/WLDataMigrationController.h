
@interface WLDataMigrationController : WLDaemonConnection {
    <WLDataMigrationDelegate> * _delegate;
    <WLDataMigratorProtocol> * _migrator;
}

@property (nonatomic, readonly) <WLDataMigrationDelegate> *delegate;

- (void).cxx_destruct;
- (id)delegate;
- (void)deleteMessages;
- (id)initWithDelegate:(id)arg1;
- (void)lookupAppDataContainer:(id /* block */)arg1;
- (void)startMigrationUsingRetryPolicies:(bool)arg1;

@end
