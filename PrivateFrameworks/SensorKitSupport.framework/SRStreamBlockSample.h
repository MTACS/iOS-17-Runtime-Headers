
@interface SRStreamBlockSample : NSObject <SRSampleDirectExporting, SRSampleExporting, SRSampling> {
    NSDictionary * _sampleDict;
    _TtC16SensorKitSupport13SRStreamBlock * _streamBlock;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSDictionary *sampleDict;
@property (nonatomic, retain) _TtC16SensorKitSupport13SRStreamBlock *streamBlock;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithBinarySampleRepresentation:(id)arg1 metadata:(id)arg2 timestamp:(double)arg3;
- (id)sampleDict;
- (void)setSampleDict:(id)arg1;
- (void)setStreamBlock:(id)arg1;
- (id)sr_dictionaryRepresentation;
- (bool)sr_prefersUTF8StringRepresentation;
- (long long)sr_writeUTF8RepresentationToOutputStream:(id)arg1;
- (id)streamBlock;

@end
