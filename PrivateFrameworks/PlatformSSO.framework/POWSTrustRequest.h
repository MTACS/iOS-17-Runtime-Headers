
@interface POWSTrustRequest : NSObject {
    NSString * _action;
    NSString * _endpointURN;
    NSString * _nonce;
    NSMutableData * _password;
    NSString * _to;
    NSString * _userName;
}

@property (nonatomic, retain) NSString *action;
@property (nonatomic, retain) NSString *endpointURN;
@property (nonatomic, retain) NSString *nonce;
@property (nonatomic, retain) NSMutableData *password;
@property (nonatomic, retain) NSString *to;
@property (nonatomic, retain) NSString *userName;

- (void).cxx_destruct;
- (id)action;
- (id)endpointURN;
- (id)nonce;
- (id)password;
- (void)setAction:(id)arg1;
- (void)setEndpointURN:(id)arg1;
- (void)setNonce:(id)arg1;
- (void)setPassword:(id)arg1;
- (void)setTo:(id)arg1;
- (void)setUserName:(id)arg1;
- (id)to;
- (id)userName;

@end
