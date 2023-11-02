
@interface SRSensorWriterClient : NSObject <SRSensorKitServiceClientWriting> {
    SRSensorWriter * _writer;
}

@property SRSensorWriter *writer;

+ (id)sensorWriterClientWithWriter:(id)arg1;

- (void).cxx_destruct;
- (id)initWithWriter:(id)arg1;
- (void)resetDatastoreFiles:(id)arg1;
- (void)setMonitoring:(bool)arg1 withRequestedConfigurations:(id)arg2;
- (void)setWriter:(id)arg1;
- (id)writer;

@end
