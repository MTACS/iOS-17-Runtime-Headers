
@interface SFBLEDevice : NSObject <NSSecureCoding> {
    NSData * _advertisementData;
    NSDictionary * _advertisementFields;
    NSData * _bluetoothAddress;
    SFProximityEstimator * _closeProximityEstimatorMedium;
    SFProximityEstimator * _closeProximityEstimatorSmall;
    unsigned int  _connectedServices;
    NSUUID * _counterpartIdentifier;
    unsigned char  _decryptedActivityLevel;
    long long  _distance;
    unsigned long long  _foundTicks;
    NSUUID * _identifier;
    SFProximityEstimator * _infoProximityEstimator;
    bool  _insideBubble;
    bool  _insideMediumBubble;
    bool  _insideSmallBubble;
    double  _lastSeen;
    NSString * _name;
    double  _pairCheckTime;
    bool  _paired;
    unsigned int  _productID2;
    SFProximityEstimator * _proxPairProximityEstimator;
    unsigned long long  _proxPairingTicks;
    RPIdentity * _rpIdentity;
    long long  _rssi;
    long long  _rssiCeiling;
    unsigned char  _rssiCount;
    int  _rssiEstimate;
    long long  _rssiFloor;
    BOOL  _rssiHistory;
    unsigned char  _rssiIndex;
    SFProximityEstimator * _setupProximityEstimator;
    long long  _smoothedRSSI;
    bool  _tempPaired;
    bool  _triggered;
    bool  _useBTPipe;
}

@property (nonatomic, copy) NSData *advertisementData;
@property (nonatomic, copy) NSDictionary *advertisementFields;
@property (nonatomic, copy) NSData *bluetoothAddress;
@property (nonatomic, retain) SFProximityEstimator *closeProximityEstimatorMedium;
@property (nonatomic, retain) SFProximityEstimator *closeProximityEstimatorSmall;
@property (nonatomic) unsigned int connectedServices;
@property (nonatomic, copy) NSUUID *counterpartIdentifier;
@property (nonatomic) unsigned char decryptedActivityLevel;
@property (nonatomic) long long distance;
@property (nonatomic) unsigned long long foundTicks;
@property (nonatomic, copy) NSUUID *identifier;
@property (nonatomic, retain) SFProximityEstimator *infoProximityEstimator;
@property (nonatomic) bool insideBubble;
@property (nonatomic) bool insideMediumBubble;
@property (nonatomic) bool insideSmallBubble;
@property (nonatomic) double lastSeen;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) double pairCheckTime;
@property (nonatomic) bool paired;
@property (nonatomic) unsigned int productID2;
@property (nonatomic, retain) SFProximityEstimator *proxPairProximityEstimator;
@property (nonatomic) unsigned long long proxPairingTicks;
@property (nonatomic, retain) RPIdentity *rpIdentity;
@property (nonatomic) long long rssi;
@property (nonatomic) long long rssiCeiling;
@property (nonatomic) int rssiEstimate;
@property (nonatomic) long long rssiFloor;
@property (nonatomic, retain) SFProximityEstimator *setupProximityEstimator;
@property (nonatomic) long long smoothedRSSI;
@property (nonatomic) bool tempPaired;
@property (nonatomic) bool triggered;
@property (nonatomic) bool useBTPipe;

+ (void)setRSSIEstimatorInfo:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)advertisementData;
- (id)advertisementFields;
- (id)bluetoothAddress;
- (id)closeProximityEstimatorMedium;
- (id)closeProximityEstimatorSmall;
- (unsigned int)connectedServices;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)counterpartIdentifier;
- (unsigned char)decryptedActivityLevel;
- (id)description;
- (long long)distance;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)foundTicks;
- (id)identifier;
- (id)infoProximityEstimator;
- (id)initWithCoder:(id)arg1;
- (bool)insideBubble;
- (bool)insideMediumBubble;
- (bool)insideSmallBubble;
- (double)lastSeen;
- (id)name;
- (double)pairCheckTime;
- (bool)paired;
- (unsigned int)productID2;
- (id)proxPairProximityEstimator;
- (unsigned long long)proxPairingTicks;
- (id)rpIdentity;
- (long long)rssi;
- (long long)rssiCeiling;
- (int)rssiEstimate;
- (long long)rssiFloor;
- (void)setAdvertisementData:(id)arg1;
- (void)setAdvertisementFields:(id)arg1;
- (void)setBluetoothAddress:(id)arg1;
- (void)setCloseProximityEstimatorMedium:(id)arg1;
- (void)setCloseProximityEstimatorSmall:(id)arg1;
- (void)setConnectedServices:(unsigned int)arg1;
- (void)setCounterpartIdentifier:(id)arg1;
- (void)setDecryptedActivityLevel:(unsigned char)arg1;
- (void)setDistance:(long long)arg1;
- (void)setFoundTicks:(unsigned long long)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setInfoProximityEstimator:(id)arg1;
- (void)setInsideBubble:(bool)arg1;
- (void)setInsideMediumBubble:(bool)arg1;
- (void)setInsideSmallBubble:(bool)arg1;
- (void)setLastSeen:(double)arg1;
- (void)setName:(id)arg1;
- (void)setPairCheckTime:(double)arg1;
- (void)setPaired:(bool)arg1;
- (void)setProductID2:(unsigned int)arg1;
- (void)setProxPairProximityEstimator:(id)arg1;
- (void)setProxPairingTicks:(unsigned long long)arg1;
- (void)setRpIdentity:(id)arg1;
- (void)setRssi:(long long)arg1;
- (void)setRssiCeiling:(long long)arg1;
- (void)setRssiEstimate:(int)arg1;
- (void)setRssiFloor:(long long)arg1;
- (void)setSetupProximityEstimator:(id)arg1;
- (void)setSmoothedRSSI:(long long)arg1;
- (void)setTempPaired:(bool)arg1;
- (void)setTriggered:(bool)arg1;
- (void)setUseBTPipe:(bool)arg1;
- (id)setupProximityEstimator;
- (long long)smoothedRSSI;
- (bool)tempPaired;
- (bool)triggered;
- (bool)updateRSSI:(long long)arg1;
- (bool)useBTPipe;

@end
