
@interface SGMIStagedLogRecord : NSObject {
    bool  _isLogged;
    SGMIMetricsMailIntelligenceForMessage * _log;
}

@property (readonly) bool isLogged;
@property (readonly) SGMIMetricsMailIntelligenceForMessage *log;

- (void).cxx_destruct;
- (id)initWithLog:(id)arg1 isLogged:(bool)arg2;
- (bool)isLogged;
- (id)log;

@end
