
@interface GDKTSSegmentMetadata : NSObject <GDTripMetadataProtocol> {
    NSString * _segmentId;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *segmentId;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithSegmentId:(id)arg1;
- (id)segmentId;

@end
