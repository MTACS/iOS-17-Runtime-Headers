
@interface SNLinkRecommendationInfo : NSObject {
    long long  _beaconPER;
    bool  _btPreference;
    unsigned long long  _btRSSI;
    long long  _btRetransmissionRateRx;
    long long  _btRetransmissionRateTx;
    long long  _btTech;
    long long  _expectedThroughputVIBE;
    long long  _lsmRecommendationBe;
    long long  _nwType;
    long long  _packetLifetimeVIBE;
    long long  _packetLossRateVIBE;
    double  _timeTaken;
    long long  _wifiCCA;
    bool  _wifiPreference;
    long long  _wifiRSSI;
    long long  _wifiSNR;
}

@property (nonatomic) long long beaconPER;
@property (nonatomic) bool btPreference;
@property (nonatomic) unsigned long long btRSSI;
@property (nonatomic) long long btRetransmissionRateRx;
@property (nonatomic) long long btRetransmissionRateTx;
@property (nonatomic) long long btTech;
@property (nonatomic) long long expectedThroughputVIBE;
@property (nonatomic) long long lsmRecommendationBe;
@property (nonatomic) long long nwType;
@property (nonatomic) long long packetLifetimeVIBE;
@property (nonatomic) long long packetLossRateVIBE;
@property (nonatomic) double timeTaken;
@property (nonatomic) long long wifiCCA;
@property (nonatomic) bool wifiPreference;
@property (nonatomic) long long wifiRSSI;
@property (nonatomic) long long wifiSNR;

- (long long)beaconPER;
- (bool)btPreference;
- (unsigned long long)btRSSI;
- (long long)btRetransmissionRateRx;
- (long long)btRetransmissionRateTx;
- (long long)btTech;
- (long long)expectedThroughputVIBE;
- (long long)lsmRecommendationBe;
- (long long)nwType;
- (long long)packetLifetimeVIBE;
- (long long)packetLossRateVIBE;
- (void)setBeaconPER:(long long)arg1;
- (void)setBtPreference:(bool)arg1;
- (void)setBtRSSI:(unsigned long long)arg1;
- (void)setBtRetransmissionRateRx:(long long)arg1;
- (void)setBtRetransmissionRateTx:(long long)arg1;
- (void)setBtTech:(long long)arg1;
- (void)setExpectedThroughputVIBE:(long long)arg1;
- (void)setLsmRecommendationBe:(long long)arg1;
- (void)setNwType:(long long)arg1;
- (void)setPacketLifetimeVIBE:(long long)arg1;
- (void)setPacketLossRateVIBE:(long long)arg1;
- (void)setTimeTaken:(double)arg1;
- (void)setWifiCCA:(long long)arg1;
- (void)setWifiPreference:(bool)arg1;
- (void)setWifiRSSI:(long long)arg1;
- (void)setWifiSNR:(long long)arg1;
- (double)timeTaken;
- (long long)wifiCCA;
- (bool)wifiPreference;
- (long long)wifiRSSI;
- (long long)wifiSNR;

@end
