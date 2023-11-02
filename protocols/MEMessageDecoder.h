
@protocol MEMessageDecoder <NSObject>

@required

- (MEDecodedMessage *)decodedMessageForMessageData:(NSData *)arg1;

@end
