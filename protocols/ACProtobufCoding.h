
@protocol ACProtobufCoding <NSObject>

@required

- (PBCodable *)_encodeProtobuf;
- (NSData *)_encodeProtobufData;
- (id)_initWithProtobuf:(PBCodable *)arg1;
- (id)_initWithProtobufData:(NSData *)arg1;

@end
