
@interface WADatapthDiagnostics : NSObject {
    int  _action;
    unsigned int  _awdMetricID;
    PBCodable * _awdReport;
}

@property (nonatomic, readonly) int action;
@property (nonatomic) unsigned int awdMetricID;
@property (nonatomic, retain) PBCodable *awdReport;

- (void).cxx_destruct;
- (int)action;
- (unsigned int)awdMetricID;
- (id)awdReport;
- (id)initWithWADatapthDiagnosticsReport:(const void*)arg1 length:(unsigned long long)arg2;
- (void)setAwdMetricID:(unsigned int)arg1;
- (void)setAwdReport:(id)arg1;

@end
