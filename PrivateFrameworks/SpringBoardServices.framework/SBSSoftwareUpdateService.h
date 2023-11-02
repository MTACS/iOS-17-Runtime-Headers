
@interface SBSSoftwareUpdateService : SBSAbstractSystemService

@property (nonatomic) long long passcodePolicy;

- (long long)passcodePolicy;
- (void)setPasscodePolicy:(long long)arg1;

@end
