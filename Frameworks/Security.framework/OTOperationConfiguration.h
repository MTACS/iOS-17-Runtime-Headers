
@interface OTOperationConfiguration : NSObject <NSSecureCoding> {
    bool  _discretionaryNetwork;
    long long  _qualityOfService;
    unsigned long long  _timeoutWaitForCKAccount;
    bool  _useCachedAccountStatus;
}

@property (nonatomic) bool discretionaryNetwork;
@property (nonatomic) long long qualityOfService;
@property (nonatomic) unsigned long long timeoutWaitForCKAccount;
@property (nonatomic) bool useCachedAccountStatus;

+ (bool)supportsSecureCoding;

- (bool)discretionaryNetwork;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (long long)qualityOfService;
- (void)setDiscretionaryNetwork:(bool)arg1;
- (void)setQualityOfService:(long long)arg1;
- (void)setTimeoutWaitForCKAccount:(unsigned long long)arg1;
- (void)setUseCachedAccountStatus:(bool)arg1;
- (unsigned long long)timeoutWaitForCKAccount;
- (bool)useCachedAccountStatus;

@end
