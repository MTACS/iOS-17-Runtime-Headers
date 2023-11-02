
@interface ENTestResultUploadRequest : ENTestResultNetworkRequest {
    NSString * _certificate;
    NSString * _healthAuthorityID;
    NSNumber * _insertedExposures;
    NSNumber * _isUserVaccinated;
    NSString * _requestRevisionToken;
    NSString * _responseRevisionToken;
    NSData * _symmetricKey;
    NSNumber * _symptomOnsetInterval;
    NSArray * _temporaryExposureKeys;
    bool  _userDidTravel;
}

@property (nonatomic, readonly, copy) NSNumber *insertedExposures;
@property (nonatomic, readonly, copy) NSString *responseRevisionToken;

+ (id)uploadRequestWithCertificate:(id)arg1 healthAuthorityID:(id)arg2 revisionToken:(id)arg3 symmetricKey:(id)arg4 temporaryExposureKeys:(id)arg5 userMetadata:(id)arg6 requestURL:(id)arg7 URLSession:(id)arg8 queue:(id)arg9 error:(id*)arg10;

- (void).cxx_destruct;
- (id)bodyJSON;
- (id)handleResponse:(id)arg1 body:(id)arg2;
- (id)insertedExposures;
- (id)responseRevisionToken;

@end
