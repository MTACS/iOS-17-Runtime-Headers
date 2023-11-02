
@interface CATSharingDevice : NSObject {
    long long  _RSSI;
    NSDate * _detectionTime;
    NSUUID * _identifier;
    NSString * _modelIdentifier;
    bool  _paired;
    unsigned long long  _pairingState;
}

@property (nonatomic, readonly) long long RSSI;
@property (nonatomic, readonly) NSDate *detectionTime;
@property (nonatomic, readonly) NSUUID *identifier;
@property (nonatomic, readonly, copy) NSString *modelIdentifier;
@property (getter=isPaired, nonatomic, readonly) bool paired;
@property (nonatomic, readonly) unsigned long long pairingState;

+ (id)unlocalizedDescriptivePairingStateForPairingState:(unsigned long long)arg1;

- (void).cxx_destruct;
- (long long)RSSI;
- (id)debugDescription;
- (id)detectionTime;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 modelIdentifier:(id)arg2 RSSI:(long long)arg3 paired:(bool)arg4 pairingState:(unsigned long long)arg5 detectionTime:(id)arg6;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToDevice:(id)arg1;
- (bool)isPaired;
- (id)modelIdentifier;
- (unsigned long long)pairingState;

@end
