
@interface MUPlaceRibbonSectionControllerConfiguration : NSObject {
    MUPlaceDataAvailability * _availability;
    MKETAProvider * _etaProvider;
    _TtC6MapsUI31MUEVChargerAvailabilityProvider * _evChargerAvailabilityProvider;
    GEOPlaceRibbonConfiguration * _ribbonConfiguration;
}

@property (nonatomic, retain) MUPlaceDataAvailability *availability;
@property (nonatomic, retain) MKETAProvider *etaProvider;
@property (nonatomic, retain) _TtC6MapsUI31MUEVChargerAvailabilityProvider *evChargerAvailabilityProvider;
@property (nonatomic, retain) GEOPlaceRibbonConfiguration *ribbonConfiguration;

- (void).cxx_destruct;
- (id)availability;
- (id)etaProvider;
- (id)evChargerAvailabilityProvider;
- (id)ribbonConfiguration;
- (void)setAvailability:(id)arg1;
- (void)setEtaProvider:(id)arg1;
- (void)setEvChargerAvailabilityProvider:(id)arg1;
- (void)setRibbonConfiguration:(id)arg1;

@end
