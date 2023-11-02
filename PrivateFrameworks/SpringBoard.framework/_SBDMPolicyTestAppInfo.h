
@interface _SBDMPolicyTestAppInfo : SBApplicationInfo {
    bool  _testAppBlocked;
}

@property (nonatomic) bool testAppBlocked;

- (bool)isBlockedForScreenTimeExpiration;
- (long long)screenTimePolicy;
- (void)setTestAppBlocked:(bool)arg1;
- (bool)testAppBlocked;

@end
