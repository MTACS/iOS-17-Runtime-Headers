
@interface WDClinicalAuthorizationSettingsViewController : HKClinicalAuthorizationSettingsViewController {
    HRProfile * _profile;
}

@property (nonatomic, readonly) HRProfile *profile;

+ (id)contextUsingProfile:(id)arg1 source:(id)arg2;

- (void).cxx_destruct;
- (id)initWithContext:(id)arg1 style:(long long)arg2;
- (id)initWithProfile:(id)arg1 source:(id)arg2;
- (id)profile;

@end
