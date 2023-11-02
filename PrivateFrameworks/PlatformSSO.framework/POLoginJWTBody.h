
@interface POLoginJWTBody : _POJWTBodyBase {
    NSMutableData * _passwordData;
}

@property (readonly) NSString *assertion;
@property (readonly) NSString *aud;
@property (readonly) NSString *client_id;
@property (readonly) NSDate *exp;
@property (readonly) NSString *grant_type;
@property (readonly) NSDate *iat;
@property (readonly) NSString *iss;
@property (readonly) NSString *nonce;
@property (readonly) NSMutableData *password;
@property (retain) NSMutableData *passwordData;
@property (readonly) NSString *refresh_token;
@property (readonly) NSString *request_nonce;
@property (readonly) NSString *scope;
@property (readonly) NSString *sub;
@property (readonly) NSString *username;

- (void).cxx_destruct;
- (id)assertion;
- (id)aud;
- (id)client_id;
- (id)dataRepresentation;
- (void)dealloc;
- (id)description;
- (id)exp;
- (id)grant_type;
- (id)iat;
- (id)initWithJWTData:(id)arg1;
- (id)iss;
- (id)mutableCopy;
- (id)nonce;
- (id)password;
- (id)passwordData;
- (id)refresh_token;
- (id)request_nonce;
- (id)scope;
- (void)setPasswordData:(id)arg1;
- (id)sub;
- (id)username;
- (void)zeroPassword;

@end
