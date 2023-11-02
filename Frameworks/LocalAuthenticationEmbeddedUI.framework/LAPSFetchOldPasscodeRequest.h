
@interface LAPSFetchOldPasscodeRequest : NSObject {
    long long  _backoffTimeout;
    long long  _failedAttempts;
    LAPSPasscodeType * _passcodeType;
}

@property (nonatomic) long long backoffTimeout;
@property (nonatomic) long long failedAttempts;
@property (nonatomic, retain) LAPSPasscodeType *passcodeType;

- (void).cxx_destruct;
- (long long)backoffTimeout;
- (long long)failedAttempts;
- (id)init;
- (id)passcodeType;
- (void)setBackoffTimeout:(long long)arg1;
- (void)setFailedAttempts:(long long)arg1;
- (void)setPasscodeType:(id)arg1;

@end
