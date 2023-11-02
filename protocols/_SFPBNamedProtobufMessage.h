
@protocol _SFPBNamedProtobufMessage <NSObject>

@required

- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (NSData *)protobufMessageData;
- (NSString *)protobufMessageName;
- (void)setProtobufMessageData:(NSData *)arg1;
- (void)setProtobufMessageName:(NSString *)arg1;

@end
