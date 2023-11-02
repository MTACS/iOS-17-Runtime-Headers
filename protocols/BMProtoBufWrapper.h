
@protocol BMProtoBufWrapper

@required

- (NSData *)encodeAsProto;
- (id)initWithProto:(PBCodable *)arg1;
- (id)initWithProtoData:(NSData *)arg1;
- (PBCodable *)proto;

@end
