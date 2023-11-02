
@interface HFFormatterManager : NSObject {
    HFTemperatureFormatter * _temperatureFormatter;
}

@property (nonatomic, retain) HFTemperatureFormatter *temperatureFormatter;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)arcDegreeFormatter;
- (id)booleanFormatter;
- (id)emptyStringFormatter;
- (id)identityFormatter;
- (id)init;
- (id)luxFormatter;
- (id)percentFormatter;
- (void)registerTemperatureFormatter:(id)arg1;
- (id)relativeDateFormatter;
- (void)setTemperatureFormatter:(id)arg1;
- (id)temperatureFormatter;
- (id)timeFormatter;
- (id)timeIntervalFormatter;

@end
