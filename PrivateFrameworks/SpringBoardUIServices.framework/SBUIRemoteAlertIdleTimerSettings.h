
@interface SBUIRemoteAlertIdleTimerSettings : NSObject <NSSecureCoding> {
    double  _autoLockTimeout;
    bool  _disablesWarn;
    bool  _usesLockScreenRules;
}

@property (nonatomic) double autoLockTimeout;
@property (nonatomic) bool disablesWarn;
@property (nonatomic) bool usesLockScreenRules;

+ (bool)supportsSecureCoding;

- (double)autoLockTimeout;
- (bool)disablesWarn;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setAutoLockTimeout:(double)arg1;
- (void)setDisablesWarn:(bool)arg1;
- (void)setUsesLockScreenRules:(bool)arg1;
- (bool)usesLockScreenRules;

@end
