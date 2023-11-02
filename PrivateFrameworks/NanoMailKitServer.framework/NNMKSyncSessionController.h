
@interface NNMKSyncSessionController : NSObject {
    double  _accountAuthRequestLastRequestTime;
    bool  _deviceInStandalone;
    NSDate * _lastSyncDueToMailboxesMismatchRequestTime;
    NSMutableSet * _messageIdsToIgnoreStatusUpdates;
    NSMutableDictionary * _notificationPayloadAcks;
    NSMutableDictionary * _standaloneStateByAccountId;
    NSMutableDictionary * _syncingAccountIdentityByUsername;
}

@property (nonatomic) double accountAuthRequestLastRequestTime;
@property (nonatomic) bool deviceInStandalone;
@property (nonatomic, retain) NSDate *lastSyncDueToMailboxesMismatchRequestTime;
@property (nonatomic, retain) NSMutableSet *messageIdsToIgnoreStatusUpdates;
@property (nonatomic, retain) NSMutableDictionary *notificationPayloadAcks;
@property (nonatomic, retain) NSMutableDictionary *standaloneStateByAccountId;
@property (nonatomic, retain) NSMutableDictionary *syncingAccountIdentityByUsername;

- (void).cxx_destruct;
- (double)accountAuthRequestLastRequestTime;
- (void)deleteStandaloneStateForAccountId:(id)arg1;
- (bool)deviceInStandalone;
- (id)init;
- (id)lastSyncDueToMailboxesMismatchRequestTime;
- (id)messageIdsToIgnoreStatusUpdates;
- (id)notificationPayloadAcks;
- (void)setAccountAuthRequestLastRequestTime:(double)arg1;
- (void)setDeviceInStandalone:(bool)arg1;
- (void)setLastSyncDueToMailboxesMismatchRequestTime:(id)arg1;
- (void)setMessageIdsToIgnoreStatusUpdates:(id)arg1;
- (void)setNotificationPayloadAcks:(id)arg1;
- (void)setStandaloneStateByAccountId:(id)arg1;
- (void)setSyncingAccountIdentityByUsername:(id)arg1;
- (id)standaloneStateByAccountId;
- (unsigned long long)standaloneStateForAccountId:(id)arg1;
- (id)syncingAccountIdentityByUsername;
- (void)updateStandaloneState:(unsigned long long)arg1 forAccountId:(id)arg2;

@end
