
@interface HVEligibilityCheckResult : NSObject {
    bool  _isEligible;
    bool  _isEligibleExceptForAge;
}

@property (nonatomic) bool isEligible;
@property (nonatomic) bool isEligibleExceptForAge;

- (bool)isEligible;
- (bool)isEligibleExceptForAge;
- (void)setIsEligible:(bool)arg1;
- (void)setIsEligibleExceptForAge:(bool)arg1;

@end
