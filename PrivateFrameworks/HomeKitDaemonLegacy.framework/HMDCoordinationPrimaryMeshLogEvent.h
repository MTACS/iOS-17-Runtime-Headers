
@interface HMDCoordinationPrimaryMeshLogEvent : HMMLogEvent {
    bool  _didChangeLeader;
    bool  _didCurrentDeviceLeavePrimaryMesh;
    bool  _didElectLeader;
    bool  _isInSecondaryMesh;
    bool  _isLeader;
}

@property bool didChangeLeader;
@property bool didCurrentDeviceLeavePrimaryMesh;
@property bool didElectLeader;
@property bool isInSecondaryMesh;
@property bool isLeader;

- (bool)didChangeLeader;
- (bool)didCurrentDeviceLeavePrimaryMesh;
- (bool)didElectLeader;
- (bool)isInSecondaryMesh;
- (bool)isLeader;
- (void)setDidChangeLeader:(bool)arg1;
- (void)setDidCurrentDeviceLeavePrimaryMesh:(bool)arg1;
- (void)setDidElectLeader:(bool)arg1;
- (void)setIsInSecondaryMesh:(bool)arg1;
- (void)setIsLeader:(bool)arg1;

@end
