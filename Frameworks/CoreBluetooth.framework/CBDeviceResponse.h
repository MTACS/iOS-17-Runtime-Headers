
@interface CBDeviceResponse : NSObject <CUXPCCodable> {
    unsigned char  _btBand;
    unsigned short  _connectionHandle;
    BOOL  _core0TargetPower;
    BOOL  _core1TargetPower;
    BOOL  _currentPCAP;
    NSString * _identifier;
    BOOL  _rssi;
    unsigned int  _sniffInterval;
    BOOL  _txPower;
    BOOL  _txPowerMax;
}

@property (nonatomic) unsigned char btBand;
@property (nonatomic) unsigned short connectionHandle;
@property (nonatomic) BOOL core0TargetPower;
@property (nonatomic) BOOL core1TargetPower;
@property (nonatomic) BOOL currentPCAP;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic) BOOL rssi;
@property (nonatomic) unsigned int sniffInterval;
@property (nonatomic) BOOL txPower;
@property (nonatomic) BOOL txPowerMax;

- (void).cxx_destruct;
- (unsigned char)btBand;
- (unsigned short)connectionHandle;
- (BOOL)core0TargetPower;
- (BOOL)core1TargetPower;
- (BOOL)currentPCAP;
- (id)description;
- (id)descriptionWithLevel:(int)arg1;
- (void)encodeWithXPCObject:(id)arg1;
- (id)identifier;
- (id)initWithXPCObject:(id)arg1 error:(id*)arg2;
- (BOOL)rssi;
- (void)setBtBand:(unsigned char)arg1;
- (void)setConnectionHandle:(unsigned short)arg1;
- (void)setCore0TargetPower:(BOOL)arg1;
- (void)setCore1TargetPower:(BOOL)arg1;
- (void)setCurrentPCAP:(BOOL)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setRssi:(BOOL)arg1;
- (void)setSniffInterval:(unsigned int)arg1;
- (void)setTxPower:(BOOL)arg1;
- (void)setTxPowerMax:(BOOL)arg1;
- (unsigned int)sniffInterval;
- (BOOL)txPower;
- (BOOL)txPowerMax;

@end
