
@interface PowerUISleepBasedPredictor : NSObject <PowerUIPredictor> {
    NSObject<OS_os_log> * _log;
}

@property (nonatomic, retain) NSObject<OS_os_log> *log;

+ (bool)shouldUseSleepPredictorWithLog:(id)arg1;

- (void).cxx_destruct;
- (id)initWithLog:(id)arg1;
- (id)log;
- (unsigned long long)modelVersion;
- (id)predictFullChargeDateWithBatteryLevel:(unsigned long long)arg1;
- (unsigned long long)predictorType;
- (void)setLog:(id)arg1;

@end
