
@interface HAFacialMetricsExporter : NSObject <SRSampleExporting, SRSampling> {
    NSData * _packet;
    unsigned int  _packetType;
}

@property (nonatomic, readonly) NSData *data;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *packet;
@property (nonatomic, readonly) unsigned int packetType;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)data;
- (id)initWithBinarySampleRepresentation:(id)arg1 metadata:(id)arg2 timestamp:(double)arg3;
- (id)packet;
- (unsigned int)packetType;
- (id)sr_dictionaryRepresentation;

@end
