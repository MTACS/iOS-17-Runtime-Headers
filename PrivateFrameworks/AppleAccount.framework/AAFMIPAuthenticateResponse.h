
@interface AAFMIPAuthenticateResponse : AAResponse {
    NSDictionary * _appleAccountInfo;
    NSDictionary * _tokens;
}

@property (nonatomic, readonly) NSString *fmipDsid;
@property (nonatomic, readonly) NSString *fmipUrl;
@property (nonatomic, readonly) NSString *fmipWipeToken;

- (void).cxx_destruct;
- (id)fmipDsid;
- (id)fmipUrl;
- (id)fmipWipeToken;
- (id)initWithHTTPResponse:(id)arg1 data:(id)arg2;

@end
