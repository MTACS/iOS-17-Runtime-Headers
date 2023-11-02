
@interface FaceTimeMessageStore.CoreDataMessageStore : _TtCs12_SwiftObject {
    void accountStatus;
    void accountStatusProvider;
    void badgeManager;
    void config;
    void contextProvider;
    void deduplicationInProgress;
    void delegate;
    void deviceSupport;
    void migrationStatus;
    void notificationCenter;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  queue;
    void storeType;
    void userDefaults;
    void voicemailController;
}

- (void)didResetSync:(id)arg1;
- (void)storeDidSave:(id)arg1;
- (void)storeMergedChanges:(id)arg1;
- (void)willResetSync:(id)arg1;

@end
