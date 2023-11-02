
@interface AMSBKSProcessAssertion : BKSProcessAssertion {
    unsigned long long  _ams_assertionCount;
}

@property (nonatomic) unsigned long long ams_assertionCount;

- (unsigned long long)ams_assertionCount;
- (void)setAms_assertionCount:(unsigned long long)arg1;

@end
