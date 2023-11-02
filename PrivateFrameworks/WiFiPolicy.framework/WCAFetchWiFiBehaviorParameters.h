
@interface WCAFetchWiFiBehaviorParameters : NSObject {
    NSArray * _ambiguousSSIDs;
    NSDictionary * _apProfile;
    NSDictionary * _beaconParsing;
    NSDictionary * _datapathTelemetry;
    NSDictionary * _disabledMacRandomizationVersions;
    NSArray * _internalSSIDs;
    NSDictionary * _jtrnDefaults;
    NSDictionary * _softErrors;
}

@property (nonatomic, retain) NSArray *ambiguousSSIDs;
@property (nonatomic, retain) NSDictionary *apProfile;
@property (nonatomic, retain) NSDictionary *beaconParsing;
@property (nonatomic, retain) NSDictionary *datapathTelemetry;
@property (nonatomic, retain) NSDictionary *disabledMacRandomizationVersions;
@property (nonatomic, retain) NSArray *internalSSIDs;
@property (nonatomic, retain) NSDictionary *jtrnDefaults;
@property (nonatomic, retain) NSDictionary *softErrors;

+ (void)fetchWiFiBehaviorWithCompletion:(id /* block */)arg1;

- (void).cxx_destruct;
- (id)ambiguousSSIDs;
- (id)apProfile;
- (id)beaconParsing;
- (id)datapathTelemetry;
- (id)disabledMacRandomizationVersions;
- (id)internalSSIDs;
- (id)jtrnDefaults;
- (void)setAmbiguousSSIDs:(id)arg1;
- (void)setApProfile:(id)arg1;
- (void)setBeaconParsing:(id)arg1;
- (void)setDatapathTelemetry:(id)arg1;
- (void)setDisabledMacRandomizationVersions:(id)arg1;
- (void)setInternalSSIDs:(id)arg1;
- (void)setJtrnDefaults:(id)arg1;
- (void)setSoftErrors:(id)arg1;
- (id)softErrors;

@end
