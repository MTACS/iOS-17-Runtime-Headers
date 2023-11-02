
@protocol MEMessageDecoder_Private <MEMessageDecoder>

@required

- (void)decodedMessageForMessageData:(void *)arg1 decodeContext:(void *)arg2 withCompletionHandler:(void *)arg3; // needs 3 arg types, found 8: NSData *, MEDecodeContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, MEDecodedMessage *, void*

@optional

- (MEDecodedMessage *)decodedMessageForMessageData:(NSData *)arg1 decodeContext:(MEDecodeContext *)arg2;

@end
