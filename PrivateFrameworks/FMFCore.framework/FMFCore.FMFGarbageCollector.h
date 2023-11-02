
@interface FMFCore.FMFGarbageCollector : _TtCs12_SwiftObject {
    void accountStore;
    void delegate;
    void fmfAccountIdentifier;
    void garbageCollectorIdentityKey;
    void identifierQueue;
    void isAccountVerificationPending;
    void paths;
    void shouldRemoveFiles;
}

- (void)scheduleAccountVerificationWithNotification:(id)arg1;

@end
