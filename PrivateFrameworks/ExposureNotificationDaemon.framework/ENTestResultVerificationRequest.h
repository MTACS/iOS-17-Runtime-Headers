
@interface ENTestResultVerificationRequest : ENTestResultNetworkRequest {
    NSSet * _acceptedTestTypes;
    NSDictionary * _metadata;
    NSString * _nonce;
    NSString * _token;
    NSString * _verificationCode;
}

@property (nonatomic, readonly, copy) NSSet *acceptedTestTypes;
@property (nonatomic, readonly, copy) NSDictionary *metadata;
@property (nonatomic, readonly, copy) NSString *nonce;
@property (nonatomic, readonly, copy) NSString *token;
@property (nonatomic, readonly, copy) NSString *verificationCode;

+ (id)_metadataFromVerificationResponseDictionary:(id)arg1 error:(id*)arg2;
+ (id)verificationRequestWithCode:(id)arg1 acceptedReportTypes:(id)arg2 APIKey:(id)arg3 nonce:(id)arg4 requestURL:(id)arg5 URLSession:(id)arg6 queue:(id)arg7 error:(id*)arg8;

- (void).cxx_destruct;
- (id)_testVerificationErrorForErrorCodeString:(id)arg1;
- (id)acceptedTestTypes;
- (id)bodyJSON;
- (id)errorForUnsuccessfulResponse:(id)arg1 body:(id)arg2;
- (id)handleResponse:(id)arg1 body:(id)arg2;
- (id)metadata;
- (id)nonce;
- (id)token;
- (id)verificationCode;

@end
