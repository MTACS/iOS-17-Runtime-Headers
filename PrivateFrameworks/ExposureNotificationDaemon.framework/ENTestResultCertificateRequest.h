
@interface ENTestResultCertificateRequest : ENTestResultNetworkRequest {
    NSData * _HMAC;
    NSString * _certificate;
    NSData * _symmetricKey;
    NSString * _token;
}

@property (nonatomic, readonly, copy) NSData *HMAC;
@property (nonatomic, readonly, copy) NSString *certificate;
@property (nonatomic, readonly, copy) NSData *symmetricKey;
@property (nonatomic, readonly, copy) NSString *token;

+ (id)certificateRequestWithToken:(id)arg1 temporaryExposureKeys:(id)arg2 APIKey:(id)arg3 requestURL:(id)arg4 URLSession:(id)arg5 queue:(id)arg6 error:(id*)arg7;
+ (id)deriveHMACForTemporaryExposureKeys:(id)arg1 symmetricKey:(id)arg2;

- (void).cxx_destruct;
- (id)HMAC;
- (id)bodyJSON;
- (id)certificate;
- (id)handleResponse:(id)arg1 body:(id)arg2;
- (id)symmetricKey;
- (id)token;

@end
