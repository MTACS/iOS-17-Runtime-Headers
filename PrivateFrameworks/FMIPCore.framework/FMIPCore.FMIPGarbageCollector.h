
@interface FMIPCore.FMIPGarbageCollector : _TtCs12_SwiftObject {
    void accountStore;
    void delegate;
    void fmipAccountIdentifier;
    void garbageCollectorIdentityKey;
    void isAccountVerificationPending;
    void paths;
}

- (void)scheduleAccountVerificationWithNotification:(id)arg1;

@end
