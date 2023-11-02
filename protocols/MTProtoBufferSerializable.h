
@protocol MTProtoBufferSerializable <NSObject>

@required

+ (id)deserialize:(PBCodable *)arg1;

- (PBCodable *)serialize;

@end
