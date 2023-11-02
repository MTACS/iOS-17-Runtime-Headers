
@interface _HDCloudSyncStorePersistableState : NSObject <NSCopying> {
    unsigned long long  _baselineEpoch;
    NSString * _containerIdentifier;
    NSDictionary * _emptyZoneDateByZoneID;
    bool  _hasEncounteredGapInCurrentEpoch;
    NSDate * _lastCheckDate;
    NSDate * _lastSyncDate;
    NSString * _ownerIdentifier;
    NSDate * _rebaseDeadline;
    CKServerChangeToken * _serverChangeToken;
    HDSyncIdentity * _syncIdentity;
    int  _syncProtocolVersion;
}

@property (nonatomic, readonly) unsigned long long baselineEpoch;
@property (nonatomic, readonly) NSString *containerIdentifier;
@property (nonatomic, readonly) NSDictionary *emptyZoneDateByZoneID;
@property (nonatomic, readonly) bool hasEncounteredGapInCurrentEpoch;
@property (nonatomic, readonly) NSDate *lastCheckDate;
@property (nonatomic, readonly) NSDate *lastSyncDate;
@property (nonatomic, readonly) NSString *ownerIdentifier;
@property (nonatomic, readonly) NSDate *rebaseDeadline;
@property (nonatomic, readonly) CKServerChangeToken *serverChangeToken;
@property (nonatomic, readonly) HDSyncIdentity *syncIdentity;
@property (nonatomic, readonly) int syncProtocolVersion;

- (void).cxx_destruct;
- (unsigned long long)baselineEpoch;
- (id)containerIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)emptyZoneDateByZoneID;
- (bool)hasEncounteredGapInCurrentEpoch;
- (id)initWithServerChangeToken:(id)arg1 baselineEpoch:(unsigned long long)arg2 rebaseDeadline:(id)arg3 lastSyncDate:(id)arg4 emptyZones:(id)arg5 lastCheckDate:(id)arg6 ownerIdentifier:(id)arg7 containerIdentifier:(id)arg8 syncIdentity:(id)arg9 syncProtocolVersion:(int)arg10;
- (id)lastCheckDate;
- (id)lastSyncDate;
- (id)ownerIdentifier;
- (id)rebaseDeadline;
- (id)serverChangeToken;
- (id)stateByRecordingLastCheckDate:(id)arg1;
- (id)stateByRecordingLastSyncDate:(id)arg1;
- (id)stateByRequiringUrgentRebase;
- (id)stateByResettingRebaselineDeadline;
- (id)stateWithBaselineEpoch:(unsigned long long)arg1;
- (id)stateWithEmptyZones:(id)arg1;
- (id)stateWithGapEncountered:(bool)arg1;
- (id)stateWithServerChangeToken:(id)arg1;
- (id)stateWithSyncProtocolVersion:(int)arg1;
- (id)syncIdentity;
- (int)syncProtocolVersion;

@end
