
@interface HKMedicalDateInterval : NSObject <NSCopying, NSSecureCoding> {
    HKMedicalDate * _endDate;
    HKMedicalDate * _startDate;
}

@property (nonatomic, readonly, copy) HKMedicalDate *endDate;
@property (nonatomic, readonly, copy) HKMedicalDate *startDate;

+ (id)medicalDateIntervalWithEndDate:(id)arg1;
+ (id)medicalDateIntervalWithStartDate:(id)arg1;
+ (id)medicalDateIntervalWithStartDate:(id)arg1 endDate:(id)arg2 error:(out id*)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithStartDate:(id)arg1 endDate:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)endDate;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)startDate;

@end
