
@interface _WDUnitPreferenceViewControllerRow : NSObject {
    NSString * _localizedDisplayName;
    HKUnit * _unit;
}

@property (nonatomic, retain) NSString *localizedDisplayName;
@property (nonatomic, retain) HKUnit *unit;

- (void).cxx_destruct;
- (id)localizedDisplayName;
- (void)setLocalizedDisplayName:(id)arg1;
- (void)setUnit:(id)arg1;
- (id)unit;

@end
