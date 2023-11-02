
@interface PKPeerPaymentRecurringPaymentTransaction : NSObject <NSCopying, NSSecureCoding> {
    long long  _errorCode;
    NSDate * _executionDate;
    NSString * _identifier;
    unsigned long long  _status;
}

@property (nonatomic) long long errorCode;
@property (nonatomic, copy) NSDate *executionDate;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic) unsigned long long status;

+ (bool)supportsSecureCoding;
+ (id)transactionWithDictionary:(id)arg1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (long long)errorCode;
- (bool)exceedsAppleCashLimits;
- (id)executionDate;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setErrorCode:(long long)arg1;
- (void)setExecutionDate:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setStatus:(unsigned long long)arg1;
- (unsigned long long)status;

@end
