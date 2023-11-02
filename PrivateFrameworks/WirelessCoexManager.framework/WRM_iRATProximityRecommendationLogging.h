
@interface WRM_iRATProximityRecommendationLogging : NSObject {
    NSUUID * _Uuid;
    int  _beaconPER;
    unsigned long long  _btRSSI;
    long long  _btRetransmissionRateRx;
    long long  _btRetransmissionRateTx;
    long long  _btTech;
    long long  _expectedThroughputVIBE;
    long long  _lsmRecommendationBe;
    BOOL  _nwType;
    long long  _packetLifetimeVIBE;
    long long  _packetLossRateVIBE;
    long long  _wifiCCA;
    long long  _wifiRSSI;
    long long  _wifiSNR;
}

@property (nonatomic, retain) NSUUID *Uuid;
@property (nonatomic) int beaconPER;
@property (nonatomic) unsigned long long btRSSI;
@property (nonatomic) long long btRetransmissionRateRx;
@property (nonatomic) long long btRetransmissionRateTx;
@property (nonatomic) long long btTech;
@property (nonatomic) long long expectedThroughputVIBE;
@property (nonatomic) long long lsmRecommendationBe;
@property (nonatomic) BOOL nwType;
@property (nonatomic) long long packetLifetimeVIBE;
@property (nonatomic) long long packetLossRateVIBE;
@property (nonatomic) long long wifiCCA;
@property (nonatomic) long long wifiRSSI;
@property (nonatomic) long long wifiSNR;

- (id)Uuid;
- (int)beaconPER;
- (unsigned long long)btRSSI;
- (long long)btRetransmissionRateRx;
- (long long)btRetransmissionRateTx;
- (long long)btTech;
- (void)dealloc;
- (long long)expectedThroughputVIBE;
- (id)init;
- (long long)lsmRecommendationBe;
- (BOOL)nwType;
- (long long)packetLifetimeVIBE;
- (long long)packetLossRateVIBE;
- (void)setBeaconPER:(int)arg1;
- (void)setBtRSSI:(unsigned long long)arg1;
- (void)setBtRetransmissionRateRx:(long long)arg1;
- (void)setBtRetransmissionRateTx:(long long)arg1;
- (void)setBtTech:(long long)arg1;
- (void)setExpectedThroughputVIBE:(long long)arg1;
- (void)setLsmRecommendationBe:(long long)arg1;
- (void)setNwType:(BOOL)arg1;
- (void)setPacketLifetimeVIBE:(long long)arg1;
- (void)setPacketLossRateVIBE:(long long)arg1;
- (void)setUuid:(id)arg1;
- (void)setWifiCCA:(long long)arg1;
- (void)setWifiRSSI:(long long)arg1;
- (void)setWifiSNR:(long long)arg1;
- (long long)wifiCCA;
- (long long)wifiRSSI;
- (long long)wifiSNR;

@end
