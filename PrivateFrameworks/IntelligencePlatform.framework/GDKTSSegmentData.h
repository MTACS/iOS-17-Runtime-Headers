
@interface GDKTSSegmentData : NSObject <GDKTSDataProtocol> {
    <GDKTSContextRepresentationProtocol> * _context;
    GDKTSDataRepresentation * _data;
    NSString * _identifier;
    GDEntityIdentifier * _segmentEntityId;
    NSString * _segmentId;
}

@property (nonatomic, readonly) <GDKTSContextRepresentationProtocol> *context;
@property (nonatomic, readonly) GDKTSDataRepresentation *data;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) GDEntityIdentifier *segmentEntityId;
@property (nonatomic, readonly) NSString *segmentId;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)context;
- (id)data;
- (id)description;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 context:(id)arg2 data:(id)arg3 metadata:(id)arg4;
- (id)segmentEntityId;
- (id)segmentId;

@end
