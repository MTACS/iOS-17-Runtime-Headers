
@interface WFAirQualityResponse : WFResponse <NSSecureCoding> {
    WFAirQualityConditions * _airQualityConditions;
    NSData * _rawAPIData;
    bool  _responseWasFromCache;
}

@property (nonatomic, retain) WFAirQualityConditions *airQualityConditions;
@property (nonatomic, retain) NSData *rawAPIData;
@property (nonatomic) bool responseWasFromCache;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)airQualityConditions;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)rawAPIData;
- (bool)responseWasFromCache;
- (void)setAirQualityConditions:(id)arg1;
- (void)setRawAPIData:(id)arg1;
- (void)setResponseWasFromCache:(bool)arg1;

@end
