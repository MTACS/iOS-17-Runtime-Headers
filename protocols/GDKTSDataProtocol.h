
@protocol GDKTSDataProtocol <NSObject>

@required

- (<GDKTSContextRepresentationProtocol> *)context;
- (<GDKTSDataRepresentationProtocol> *)data;
- (NSString *)identifier;
- (id)initWithIdentifier:(NSString *)arg1 context:(id <GDKTSContextRepresentationProtocol>)arg2 data:(id <GDKTSDataRepresentationProtocol>)arg3 metadata:(id <GDTripMetadataProtocol>)arg4;

@end
