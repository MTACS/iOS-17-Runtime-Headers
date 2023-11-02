
@interface HAPPGExporter : NSObject <SRSampleExporting, SRSampling> {
    NSData * _mimosaData;
    double  _srTimestamp;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithBinarySampleRepresentation:(id)arg1 metadata:(id)arg2 timestamp:(double)arg3;
- (id)sr_exportRepresentationEnumerator;

@end
