
@interface CUOSRecoveryProgressEvent : NSObject {
    NSString * _authenticationText;
    NSDictionary * _configInfo;
    NSError * _error;
    int  _type;
}

@property (nonatomic, copy) NSString *authenticationText;
@property (nonatomic, readonly, copy) NSDictionary *configInfo;
@property (nonatomic, copy) NSError *error;
@property (nonatomic) int type;

- (void).cxx_destruct;
- (id)authenticationText;
- (id)configInfo;
- (id)error;
- (void)setAuthenticationText:(id)arg1;
- (void)setError:(id)arg1;
- (void)setType:(int)arg1;
- (int)type;

@end
