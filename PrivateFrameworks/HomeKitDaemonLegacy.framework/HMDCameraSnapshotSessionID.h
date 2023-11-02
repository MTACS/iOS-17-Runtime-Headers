
@interface HMDCameraSnapshotSessionID : HMDCameraSessionID {
    NSString * _snapshotCharacteristicEventUUID;
    unsigned long long  _snapshotReason;
    bool  _snapshotRequestForBulletin;
    NSNumber * _streamingTier;
}

@property (readonly) NSString *snapshotCharacteristicEventUUID;
@property (readonly) unsigned long long snapshotReason;
@property (getter=isSnapshotRequestForBulletin, readonly) bool snapshotRequestForBulletin;
@property (readonly) NSNumber *streamingTier;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithAccessory:(id)arg1 message:(id)arg2;
- (id)initWithSessionID:(id)arg1 hostProcessBundleIdentifier:(id)arg2 isSPIClient:(bool)arg3 deviceSectionName:(id)arg4 description:(id)arg5 snapshotReason:(unsigned long long)arg6 snapshotRequestForBulletin:(bool)arg7 snapshotCharacteristicEventUUID:(id)arg8 streamingTier:(id)arg9;
- (bool)isSnapshotRequestForBulletin;
- (id)snapshotCharacteristicEventUUID;
- (unsigned long long)snapshotReason;
- (id)streamingTier;

@end
