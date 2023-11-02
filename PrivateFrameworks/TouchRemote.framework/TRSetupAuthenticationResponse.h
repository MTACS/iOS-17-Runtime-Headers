
@interface TRSetupAuthenticationResponse : TRResponseMessage {
    NSError * _error;
    NSSet * _unauthenticatedAccountServices;
}

@property (nonatomic, retain) NSError *error;
@property (nonatomic, retain) NSSet *unauthenticatedAccountServices;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)error;
- (id)initWithCoder:(id)arg1;
- (void)setError:(id)arg1;
- (void)setUnauthenticatedAccountServices:(id)arg1;
- (id)unauthenticatedAccountServices;

@end
