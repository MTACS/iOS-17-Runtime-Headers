
@interface CHSApplicationProcessStateChangeConsumer : NSObject {
    CHSChronoServicesConnection * _connection;
}

- (void).cxx_destruct;
- (void)applicationWithBundleIdentifierEnteredForeground:(id)arg1;
- (id)init;
- (id)initWithConnection:(id)arg1;

@end
