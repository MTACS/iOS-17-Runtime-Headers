
@interface BCSParsingServiceConnection : NSObject {
    NSXPCConnection * _parsingServiceConnection;
}

@property (nonatomic, retain) NSXPCConnection *parsingServiceConnection;

- (void).cxx_destruct;
- (void)dealloc;
- (void)decodeAppClipCodeURLWithEncodedData:(id)arg1 codingVersion:(unsigned long long)arg2 requiresAuthorization:(bool)arg3 withReply:(id /* block */)arg4;
- (void)parseQRCodeFeature:(id)arg1 withReply:(id /* block */)arg2;
- (void)parseQRCodeMetadata:(id)arg1 withReply:(id /* block */)arg2;
- (void)parseQRCodeString:(id)arg1 withReply:(id /* block */)arg2;
- (id)parsingServiceConnection;
- (void)setParsingServiceConnection:(id)arg1;
- (void)setPreferredBundleIdentifier:(id)arg1 forURL:(id)arg2;

@end
