
@interface HKMHPromptedAssessment : NSObject <NSCopying, NSSecureCoding> {
    NSDate * _eligibilityStartDate;
    long long  _reason;
}

@property (nonatomic, readonly, copy) NSDate *eligibilityStartDate;
@property (nonatomic, readonly) long long reason;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)eligibilityStartDate;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithEligibilityStartDate:(id)arg1 reason:(long long)arg2;
- (bool)isEqual:(id)arg1;
- (long long)reason;

@end
