
@interface AAWalrusPCSAuthRequest : AARequest {
    ACAccount * _account;
    NSDictionary * _bodyParams;
    NSString * _internalURLString;
}

- (void).cxx_destruct;
- (id)initWithAccount:(id)arg1 WebSessionID:(id)arg2 webSessionConsentUUID:(id)arg3 encryptionEnvelope:(id)arg4 appName:(id)arg5 responseIdentities:(id)arg6 serverInfo:(id)arg7 urlString:(id)arg8;
- (id)urlRequest;
- (id)urlString;

@end
