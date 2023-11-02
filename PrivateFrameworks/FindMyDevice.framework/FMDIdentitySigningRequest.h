
@interface FMDIdentitySigningRequest : NSObject <NSSecureCoding> {
    NSData * _dataToSign;
    bool  _useSCRT;
    long long  _validityInMinutes;
}

@property (nonatomic, retain) NSData *dataToSign;
@property (nonatomic) bool useSCRT;
@property (nonatomic) long long validityInMinutes;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)dataToSign;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1;
- (void)setDataToSign:(id)arg1;
- (void)setUseSCRT:(bool)arg1;
- (void)setValidityInMinutes:(long long)arg1;
- (bool)useSCRT;
- (long long)validityInMinutes;

@end
