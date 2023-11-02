
@protocol CALNIconIdentifierVersionProvider <NSObject>

@required

- (long long)iconIdentifierVersion;
- (long long)iconVersionToUpgradeTo;
- (void)setIconIdentifierVersion:(long long)arg1;

@end
