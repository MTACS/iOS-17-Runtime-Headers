
@interface WiFiUsageConnectionQualityRecord : NSObject {
    GEOWiFiConnectionQuality * _geoMessage;
    NSString * _identifier;
}

@property (nonatomic, retain) GEOWiFiConnectionQuality *geoMessage;
@property (nonatomic, retain) NSString *identifier;

- (void).cxx_destruct;
- (id)geoMessage;
- (id)identifier;
- (id)initWithUsageSession:(id)arg1 andNeighborBssList:(id)arg2 andOtherBssList:(id)arg3;
- (void)queryNetworkPerformanceFeedAndSubmitToGeoWiFi;
- (void)setGeoMessage:(id)arg1;
- (void)setIdentifier:(id)arg1;

@end
