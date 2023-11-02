
@interface AAAuthenticationResponse : AAResponse {
    NSDictionary * _appleAccount;
    NSDictionary * _tokens;
}

@property (nonatomic, readonly) NSString *altDSID;
@property (nonatomic, readonly) NSString *authToken;
@property (nonatomic, readonly) NSString *cloudKitToken;
@property (nonatomic, readonly) NSString *fmfAppToken;
@property (nonatomic, readonly) NSString *fmfToken;
@property (nonatomic, readonly) NSString *fmipLostModeToken;
@property (nonatomic, readonly) NSString *fmipToken;
@property (nonatomic, readonly) NSString *mapsToken;
@property (nonatomic, readonly) NSString *mdmServerToken;
@property (nonatomic, readonly) NSString *personID;

- (void).cxx_destruct;
- (id)altDSID;
- (id)authToken;
- (id)cloudKitToken;
- (id)fmfAppToken;
- (id)fmfToken;
- (id)fmipLostModeToken;
- (id)fmipToken;
- (id)initWithHTTPResponse:(id)arg1 data:(id)arg2;
- (id)mapsToken;
- (id)mdmServerToken;
- (id)personID;

@end
