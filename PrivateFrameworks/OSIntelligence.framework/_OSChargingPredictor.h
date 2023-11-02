
@interface _OSChargingPredictor : NSObject {
    NSXPCConnection * _connection;
    NSObject<OS_os_log> * _log;
}

@property (nonatomic, retain) NSXPCConnection *connection;
@property (nonatomic, retain) NSObject<OS_os_log> *log;

+ (id)predictor;

- (void).cxx_destruct;
- (id)chargePredictionOutputOfScheme:(unsigned long long)arg1 withError:(id*)arg2;
- (id)connection;
- (void)dealloc;
- (int)expectedMinimumDischarge;
- (id)fixModelOutput:(id)arg1;
- (void)fixModelOutput:(id)arg1 withHandler:(id /* block */)arg2;
- (id)init;
- (bool)isDeepDischargeExpected;
- (id)log;
- (bool)longChargeExpected;
- (bool)longChargeExpectedWithConfidence:(double)arg1;
- (double)predictedChargeDuration;
- (void)setConnection:(id)arg1;
- (void)setLog:(id)arg1;
- (double)timeUntilNextExpectedPlugin;
- (double)timeUntilNextExpectedPluginWithConfidence:(double)arg1;
- (id)unfixModelOutput;
- (void)unfixModelOutputWithHandler:(id /* block */)arg1;

@end
