
@interface GDKTSData : NSObject <GDKTSDataProtocol> {
    <GDKTSContextRepresentationProtocol> * _context;
    GDKTSDataAggregateRepresentation * _data;
    NSString * _identifier;
    GDEntityIdentifier * _tripEntityId;
}

@property (nonatomic, readonly) <GDKTSContextRepresentationProtocol> *context;
@property (nonatomic, readonly) GDKTSDataAggregateRepresentation *data;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *identifier;
@property (readonly) Class superclass;
@property (nonatomic, readonly) GDEntityIdentifier *tripEntityId;

- (void).cxx_destruct;
- (id)context;
- (id)data;
- (id)description;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 context:(id)arg2 data:(id)arg3 metadata:(id)arg4;
- (id)tripEntityId;

@end
