
@interface WLMigrationKitController : WLDaemonConnection {
    <WLDataMigrationDelegate> * _delegate;
}

@property (nonatomic) <WLDataMigrationDelegate> *delegate;

- (void).cxx_destruct;
- (void)cancel;
- (void)daemonDidGetInterrupted;
- (id)delegate;
- (void)run:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
