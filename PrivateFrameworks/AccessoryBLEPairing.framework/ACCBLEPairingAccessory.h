
@interface ACCBLEPairingAccessory : NSObject {
    NSDictionary * _accInfo;
    NSString * _accessoryUID;
    bool  _blePairingFinished;
    NSData * _blePairingUUID;
    bool  _desiredBLEPairingState;
    NSData * _supportedPairTypes;
}

@property (nonatomic, retain) NSDictionary *accInfo;
@property (nonatomic, retain) NSString *accessoryUID;
@property (nonatomic) bool blePairingFinished;
@property (nonatomic, retain) NSData *blePairingUUID;
@property (nonatomic) bool desiredBLEPairingState;
@property (nonatomic, retain) NSData *supportedPairTypes;

- (void).cxx_destruct;
- (id)accInfo;
- (id)accessoryUID;
- (bool)blePairingFinished;
- (id)blePairingUUID;
- (bool)desiredBLEPairingState;
- (id)initWithAccessoryUID:(id)arg1 blePairingUUID:(id)arg2 andAccInfo:(id)arg3 supportedPairTypes:(id)arg4;
- (void)setAccInfo:(id)arg1;
- (void)setAccessoryUID:(id)arg1;
- (void)setBlePairingFinished:(bool)arg1;
- (void)setBlePairingUUID:(id)arg1;
- (void)setDesiredBLEPairingState:(bool)arg1;
- (void)setSupportedPairTypes:(id)arg1;
- (id)supportedPairTypes;

@end
