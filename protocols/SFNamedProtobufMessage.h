
@protocol SFNamedProtobufMessage <NSObject>

@required

- (NSDictionary *)dictionaryRepresentation;
- (NSData *)jsonData;
- (NSData *)protobufMessageData;
- (NSString *)protobufMessageName;
- (void)setProtobufMessageData:(NSData *)arg1;
- (void)setProtobufMessageName:(NSString *)arg1;

@end
