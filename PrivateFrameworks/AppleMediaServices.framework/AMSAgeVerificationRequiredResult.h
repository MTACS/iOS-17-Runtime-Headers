
@interface AMSAgeVerificationRequiredResult : NSObject {
    bool  _isVerificationRequired;
    unsigned long long  _requiredType;
}

@property bool isVerificationRequired;
@property unsigned long long requiredType;

- (id)initWithRequiredType:(unsigned long long)arg1;
- (bool)isVerificationRequired;
- (unsigned long long)requiredType;
- (void)setIsVerificationRequired:(bool)arg1;
- (void)setRequiredType:(unsigned long long)arg1;

@end
