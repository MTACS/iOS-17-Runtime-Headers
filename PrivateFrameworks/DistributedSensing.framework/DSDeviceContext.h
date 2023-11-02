
@interface DSDeviceContext : NSObject {
    CBDevice * _bleDevice;
    unsigned long long  _changedFlag;
    unsigned char  _coordinationStatus;
    unsigned long long  _discoveryFlag;
    unsigned long long  _dsActionIsAlreadyFound;
    unsigned long long  _dsInfoIsAlreadyFound;
    NSString * _identifier;
    bool  _isMe;
    unsigned char  _tiebreaker;
    unsigned char  _vehicleConfidence;
    unsigned char  _vehicleState;
}

@property (nonatomic, copy) CBDevice *bleDevice;
@property (nonatomic) unsigned long long changedFlag;
@property (nonatomic) unsigned char coordinationStatus;
@property (nonatomic) unsigned long long discoveryFlag;
@property (nonatomic) unsigned long long dsActionIsAlreadyFound;
@property (nonatomic) unsigned long long dsInfoIsAlreadyFound;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic) bool isMe;
@property (nonatomic) unsigned char tiebreaker;
@property (nonatomic) unsigned char vehicleConfidence;
@property (nonatomic) unsigned char vehicleState;

- (void).cxx_destruct;
- (id)bleDevice;
- (unsigned long long)changedFlag;
- (unsigned char)coordinationStatus;
- (unsigned long long)discoveryFlag;
- (unsigned long long)dsActionIsAlreadyFound;
- (unsigned long long)dsInfoIsAlreadyFound;
- (void)encodeSelf:(id)arg1;
- (id)identifier;
- (id)initWithCBDevice:(id)arg1 error:(id*)arg2;
- (id)initWithXPCObject:(id)arg1 error:(id*)arg2;
- (bool)isMe;
- (void)setBleDevice:(id)arg1;
- (void)setChangedFlag:(unsigned long long)arg1;
- (void)setCoordinationStatus:(unsigned char)arg1;
- (void)setDiscoveryFlag:(unsigned long long)arg1;
- (void)setDsActionIsAlreadyFound:(unsigned long long)arg1;
- (void)setDsInfoIsAlreadyFound:(unsigned long long)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setIsMe:(bool)arg1;
- (void)setTiebreaker:(unsigned char)arg1;
- (void)setVehicleConfidence:(unsigned char)arg1;
- (void)setVehicleState:(unsigned char)arg1;
- (unsigned char)tiebreaker;
- (void)updateWithCBDevice:(id)arg1;
- (unsigned char)vehicleConfidence;
- (unsigned char)vehicleState;

@end
