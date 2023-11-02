
@interface HKClinicalIngestionContext : NSObject <NSCopying, NSSecureCoding> {
    HKClinicalAccountConnectionInformation * _accountInformation;
    NSDate * _lastFetchDate;
    long long  _options;
    long long  _queryMode;
}

@property (nonatomic, readonly, copy) HKClinicalAccountConnectionInformation *accountInformation;
@property (nonatomic, readonly, copy) NSDate *lastFetchDate;
@property (nonatomic, readonly) long long options;
@property (nonatomic, readonly) long long queryMode;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accountInformation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithAccountConnectionInformation:(id)arg1 queryMode:(long long)arg2 options:(long long)arg3 lastFetchDate:(id)arg4;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)lastFetchDate;
- (long long)options;
- (long long)queryMode;

@end
