
@interface WFTemperatureUnitChangeRequest : WFTemperatureUnitRequest {
    int  _temperatureUnit;
}

@property (nonatomic) int temperatureUnit;

- (void)setTemperatureUnit:(int)arg1;
- (void)startWithService:(id)arg1;
- (int)temperatureUnit;

@end
