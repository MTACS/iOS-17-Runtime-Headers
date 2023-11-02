
@interface SRSensorReaderClient : NSObject <SRSensorKitServiceClientReading> {
    SRSensorReader * _reader;
}

@property SRSensorReader *reader;

+ (id)readerClientWithReader:(id)arg1;

- (void).cxx_destruct;
- (id)initWithReader:(id)arg1;
- (id)reader;
- (void)resetDatastoreFiles:(id)arg1;
- (void)setReader:(id)arg1;

@end
