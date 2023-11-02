
@interface CNKDestinationQueryControllerInternal : NSObject <CNKDestinationQueryControllerProtocol> {
    void delegate;
    void idsDestinations;
    void idsGroupDestinations;
    void idsLookupManager;
    void scheduleIDSCachedQueryDebouncer;
    void scheduleIDSCachedQuerySubject;
    void scheduleIDSQueryDebouncer;
    void scheduleIDSQueryGroupDebouncer;
    void scheduleIDSQueryGroupSubject;
    void scheduleIDSQuerySubject;
    void scheduleNotificationDebouncer;
    void scheduleNotificationSubject;
}

@property (nonatomic) <CNKDestinationQueryControllerDelegate> *delegate;

- (void).cxx_destruct;
- (void)addRecipient:(id)arg1;
- (id)delegate;
- (void)handleIDSStatusChanged;
- (id)init;
- (long long)isAudioAllowedFor:(id)arg1;
- (long long)isFaceTimeAllowedFor:(id)arg1;
- (long long)isMultiwayAllowedFor:(id)arg1;
- (long long)isVideoAllowedFor:(id)arg1;
- (long long)isWebCapableFor:(id)arg1;
- (long long)presentationStyleFor:(id)arg1;
- (void)queryAddresses:(id)arg1;
- (void)removeRecipient:(id)arg1;
- (void)reset;
- (void)setDelegate:(id)arg1;

@end
