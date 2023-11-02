
@interface SESAuthorizationInfo : NSObject <NSSecureCoding> {
    NSData * _anonymizedDSID;
    NSData * _authorizationID;
    NSData * _publicKeyIdentifier;
    NSNumber * _remainingCount;
    NSNumber * _remainingTime;
    unsigned char  _state;
}

@property (nonatomic, retain) NSData *anonymizedDSID;
@property (nonatomic, retain) NSData *authorizationID;
@property (nonatomic, retain) NSData *publicKeyIdentifier;
@property (nonatomic, retain) NSNumber *remainingCount;
@property (nonatomic, retain) NSNumber *remainingTime;
@property (nonatomic) unsigned char state;

+ (bool)supportsSecureCoding;
+ (id)withState:(unsigned char)arg1 remaningCount:(id)arg2 remainingTime:(id)arg3 publicKeyIdentifier:(id)arg4 authorizationID:(id)arg5 anonymizedDSID:(id)arg6;

- (void).cxx_destruct;
- (id)anonymizedDSID;
- (id)authorizationID;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)publicKeyIdentifier;
- (id)remainingCount;
- (id)remainingTime;
- (void)setAnonymizedDSID:(id)arg1;
- (void)setAuthorizationID:(id)arg1;
- (void)setPublicKeyIdentifier:(id)arg1;
- (void)setRemainingCount:(id)arg1;
- (void)setRemainingTime:(id)arg1;
- (void)setState:(unsigned char)arg1;
- (unsigned char)state;

@end
