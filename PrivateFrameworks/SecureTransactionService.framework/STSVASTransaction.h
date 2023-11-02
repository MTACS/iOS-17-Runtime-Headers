
@interface STSVASTransaction : STSAuxiliaryTransaction {
    NSData * _merchantId;
    NSString * _signupUrl;
    NSNumber * _terminalAppVersion;
    long long  _terminalMode;
}

@property (nonatomic, readonly) NSData *merchantId;
@property (nonatomic, readonly) NSString *signupUrl;
@property (nonatomic, readonly) NSNumber *terminalAppVersion;
@property (nonatomic, readonly) long long terminalMode;

+ (bool)supportsSecureCoding;
+ (id)vasTransactionForCredential:(id)arg1 withDictionary:(id)arg2;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initForCredential:(id)arg1 withDictionary:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)merchantId;
- (id)signupUrl;
- (id)terminalAppVersion;
- (long long)terminalMode;
- (id)vasCredential;

@end
