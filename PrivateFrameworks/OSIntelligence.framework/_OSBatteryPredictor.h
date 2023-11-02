
@interface _OSBatteryPredictor : NSObject {
    NSXPCConnection * _connection;
    NSObject<OS_os_log> * _log;
}

@property (nonatomic, retain) NSXPCConnection *connection;
@property (nonatomic, retain) NSObject<OS_os_log> *log;

+ (id)predictor;

- (void).cxx_destruct;
- (id)connection;
- (void)dealloc;
- (id)init;
- (id)log;
- (bool)lowSOCPredicted;
- (id)lowSOCPredictionOutput;
- (id)lowSOCPredictionWithError:(id*)arg1;
- (void)setConnection:(id)arg1;
- (void)setLog:(id)arg1;

@end
