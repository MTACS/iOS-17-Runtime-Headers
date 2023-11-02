
@protocol PowerUIPredictor

@required

- (unsigned long long)modelVersion;
- (NSDate *)predictFullChargeDateWithBatteryLevel:(unsigned long long)arg1;
- (unsigned long long)predictorType;

@end
