
@interface CLKSimpleGaugeProvider : CLKGaugeProvider {
    float  _fillFraction;
}

@property (nonatomic) float fillFraction;

+ (id)gaugeProviderWithStyle:(long long)arg1 gaugeColor:(id)arg2 fillFraction:(float)arg3;
+ (id)gaugeProviderWithStyle:(long long)arg1 gaugeColors:(id)arg2 gaugeColorLocations:(id)arg3 fillFraction:(float)arg4;
+ (bool)supportsSecureCoding;

- (id)JSONObjectRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (float)fillFraction;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithJSONObjectRepresentation:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)needsTimerUpdates;
- (double)progressFractionForNow:(id)arg1;
- (void)setFillFraction:(float)arg1;
- (id)startUpdatesWithHandler:(id /* block */)arg1;
- (void)stopUpdatesForToken:(id)arg1;
- (bool)validate;

@end
