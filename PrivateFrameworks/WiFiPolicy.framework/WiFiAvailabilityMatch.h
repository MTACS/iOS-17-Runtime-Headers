
@interface WiFiAvailabilityMatch : NSObject <WiFiRecommendation> {
    NSString * _SSID;
    NSDate * _matchedAt;
    <WiFiCandidateNetwork> * _network;
    long long  _priority;
    <WiFiScannedNetwork> * _scannedNetwork;
    bool  _unwantedNetworkName;
}

@property (nonatomic, readonly, copy) NSString *SSID;
@property (nonatomic, retain) NSDate *matchedAt;
@property (nonatomic, readonly) <WiFiCandidateNetwork> *network;
@property (nonatomic, readonly) long long priority;
@property (nonatomic, retain) <WiFiScannedNetwork> *scannedNetwork;
@property (nonatomic) bool unwantedNetworkName;

+ (id)matchWithNetwork:(id)arg1 scannedNetwork:(id)arg2;

- (void).cxx_destruct;
- (id)SSID;
- (id)description;
- (unsigned long long)hash;
- (id)initWithNetwork:(id)arg1 scannedNetwork:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToAvailabilityMatch:(id)arg1;
- (bool)isEqualToScannedNetwork:(id)arg1;
- (id)matchedAt;
- (id)network;
- (long long)priority;
- (id)scannedNetwork;
- (void)setMatchedAt:(id)arg1;
- (void)setScannedNetwork:(id)arg1;
- (void)setUnwantedNetworkName:(bool)arg1;
- (bool)unwantedNetworkName;

@end
