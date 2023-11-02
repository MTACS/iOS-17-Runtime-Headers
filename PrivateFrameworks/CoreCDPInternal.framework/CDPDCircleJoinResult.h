
@interface CDPDCircleJoinResult : NSObject {
    unsigned long long  _circleStatus;
    bool  _didJoin;
    bool  _hasPeersForRemoteApproval;
    bool  _hasPeersWithCDPBackupRecords;
    bool  _needsBackupRecovery;
    unsigned long long  _remotePeeriCKState;
    bool  _requiresEscrowRecordsFetch;
    bool  _requiresInitialSync;
}

@property unsigned long long circleStatus;
@property bool didJoin;
@property bool hasPeersForRemoteApproval;
@property bool hasPeersWithCDPBackupRecords;
@property bool needsBackupRecovery;
@property unsigned long long remotePeeriCKState;
@property bool requiresEscrowRecordsFetch;
@property bool requiresInitialSync;

- (unsigned long long)circleStatus;
- (bool)didJoin;
- (bool)hasPeersForRemoteApproval;
- (bool)hasPeersWithCDPBackupRecords;
- (bool)needsBackupRecovery;
- (unsigned long long)remotePeeriCKState;
- (bool)requiresEscrowRecordsFetch;
- (bool)requiresInitialSync;
- (void)setCircleStatus:(unsigned long long)arg1;
- (void)setDidJoin:(bool)arg1;
- (void)setHasPeersForRemoteApproval:(bool)arg1;
- (void)setHasPeersWithCDPBackupRecords:(bool)arg1;
- (void)setNeedsBackupRecovery:(bool)arg1;
- (void)setRemotePeeriCKState:(unsigned long long)arg1;
- (void)setRequiresEscrowRecordsFetch:(bool)arg1;
- (void)setRequiresInitialSync:(bool)arg1;

@end
