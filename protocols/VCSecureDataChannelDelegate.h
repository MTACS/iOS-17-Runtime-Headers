
@protocol VCSecureDataChannelDelegate <NSObject>

@required

- (void)vcSecureDataChannel:(VCSecureDataChannel *)arg1 messageType:(unsigned int)arg2 receivedData:(NSData *)arg3;

@end
