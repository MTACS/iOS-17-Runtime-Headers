
@interface NEFilterRemediationVerdict : NEFilterVerdict <NSCopying, NSSecureCoding>

+ (id)allowVerdict;
+ (id)dropVerdict;
+ (id)needRulesVerdict;

- (long long)filterAction;

@end
