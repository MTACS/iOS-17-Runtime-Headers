
@interface POAssertionJWTBody : _POJWTBodyBase {
    NSMutableData * _passwordData;
}

@property (readonly) NSString *aud;
@property (readonly) NSDate *exp;
@property (readonly) NSDate *iat;
@property (readonly) NSString *iss;
@property (readonly) NSString *nonce;
@property (readonly) NSMutableData *password;
@property (retain) NSMutableData *passwordData;
@property (readonly) NSString *request_nonce;
@property (readonly) NSString *scope;
@property (readonly) NSString *sub;

- (void).cxx_destruct;
- (id)aud;
- (id)dataRepresentation;
- (void)dealloc;
- (id)description;
- (id)exp;
- (id)iat;
- (id)initWithJWTData:(id)arg1;
- (id)iss;
- (id)mutableCopy;
- (id)nonce;
- (id)password;
- (id)passwordData;
- (id)request_nonce;
- (id)scope;
- (void)setPasswordData:(id)arg1;
- (id)sub;
- (void)zeroPassword;

@end
