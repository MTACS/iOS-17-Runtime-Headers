
@protocol CATHTTPMessageParserDelegate <NSObject>

@optional

- (void)messageParser:(CATHTTPMessageParser *)arg1 didParseRequestData:(NSData *)arg2;
- (void)messageParser:(CATHTTPMessageParser *)arg1 didParseRequestWithURL:(NSURL *)arg2;
- (void)messageParser:(CATHTTPMessageParser *)arg1 didParseResponseData:(NSData *)arg2 moreComing:(bool)arg3;

@end
