
@protocol MPPProtobufferCoding <NSObject>

@required

- (<MPPProtobufferCoding> *)initWithProtobufferDecodableObject:(PBCodable *)arg1;
- (<MPPProtobufferCoding> *)initWithProtobufferDecodableObject:(PBCodable *)arg1 library:(MPMediaLibrary *)arg2;
- (PBCodable *)protobufferEncodableObject;
- (PBCodable *)protobufferEncodableObjectFromLibrary:(MPMediaLibrary *)arg1;

@end
