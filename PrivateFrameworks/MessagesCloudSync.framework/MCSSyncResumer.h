
@interface MCSSyncResumer : NSObject <IMUnlockMonitorListener> {
    void delegate;
}

- (void).cxx_destruct;
- (void)attemptToResumeSyncIfAppropriate;
- (id)init;
- (id)initWithDelegate:(id)arg1;
- (void)systemDidLeaveFirstDataProtectionLock;

@end
