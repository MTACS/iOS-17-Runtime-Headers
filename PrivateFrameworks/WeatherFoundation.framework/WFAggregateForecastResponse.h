
@interface WFAggregateForecastResponse : WFResponse <NSCopying, NSSecureCoding> {
    NSArray * _forecasts;
    bool  _responseWasFromCache;
}

@property (nonatomic, copy) NSArray *forecasts;
@property (nonatomic) bool responseWasFromCache;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)forecasts;
- (id)initWithCoder:(id)arg1;
- (bool)responseWasFromCache;
- (void)setForecasts:(id)arg1;
- (void)setResponseWasFromCache:(bool)arg1;

@end
