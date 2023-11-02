
@interface IDSLocalPairingIdentityDataErrorPair : NSObject <NSSecureCoding> {
    NSError * _error;
    NSData * _identityData;
}

@property (nonatomic, retain) NSError *error;
@property (nonatomic, retain) NSData *identityData;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)error;
- (id)identityData;
- (id)initWithCoder:(id)arg1;
- (id)initWithError:(id)arg1;
- (id)initWithIdentityData:(id)arg1;
- (id)initWithIdentityData:(id)arg1 error:(id)arg2;
- (void)setError:(id)arg1;
- (void)setIdentityData:(id)arg1;

@end
