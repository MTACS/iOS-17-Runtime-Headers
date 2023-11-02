
@interface REMAppStoreDataViewInvocation_fetchCreatedOrCompletedRemindersCount : REMStoreInvocation <NSSecureCoding> {
    NSDate * _fromDate;
    NSDate * _toDate;
}

@property (nonatomic, readonly) NSDate *fromDate;
@property (nonatomic, readonly) NSDate *toDate;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)fromDate;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithFromDate:(id)arg1 toDate:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)toDate;

@end
