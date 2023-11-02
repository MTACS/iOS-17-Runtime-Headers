
@protocol BSProtobufSerializable <NSObject>

@required

+ (BSProtobufSchema *)protobufSchema;

@optional

- (id)didFinishProtobufDecodingWithError:(out id*)arg1;
- (id)initForProtobufDecoding;
- (id)initProtobufTranslatorForObject:(id)arg1;

@end
