
@interface CTSMSSendInfoType : NSObject <NSCopying, NSSecureCoding> {
    NSNumber * _error1;
    NSNumber * _error2;
    NSNumber * _recommendedRetryDelayInSeconds;
    long long  _statusType;
}

@property (nonatomic, retain) NSNumber *error1;
@property (nonatomic, retain) NSNumber *error2;
@property (nonatomic, retain) NSNumber *recommendedRetryDelayInSeconds;
@property (nonatomic) long long statusType;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)error1;
- (id)error2;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithStatusType:(long long)arg1 error1:(int)arg2 error2:(int)arg3 delay:(int)arg4;
- (bool)isEqual:(id)arg1;
- (id)recommendedRetryDelayInSeconds;
- (void)setError1:(id)arg1;
- (void)setError2:(id)arg1;
- (void)setRecommendedRetryDelayInSeconds:(id)arg1;
- (void)setStatusType:(long long)arg1;
- (long long)statusType;

@end
