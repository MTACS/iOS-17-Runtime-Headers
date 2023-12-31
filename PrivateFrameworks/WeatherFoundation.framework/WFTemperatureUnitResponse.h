
@interface WFTemperatureUnitResponse : WFResponse <NSSecureCoding> {
    int  _temperatureUnit;
}

@property (nonatomic) int temperatureUnit;

+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setTemperatureUnit:(int)arg1;
- (int)temperatureUnit;

@end
