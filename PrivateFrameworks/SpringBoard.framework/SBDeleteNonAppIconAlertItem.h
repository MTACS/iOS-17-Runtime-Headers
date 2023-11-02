
@interface SBDeleteNonAppIconAlertItem : SBAlertItem {
    SBIcon * _icon;
    NSString * _iconLocation;
}

@property (nonatomic, readonly) SBIcon *icon;
@property (nonatomic, readonly, copy) NSString *iconLocation;

- (void).cxx_destruct;
- (void)configure:(bool)arg1 requirePasscodeForActions:(bool)arg2;
- (void)didActivate;
- (bool)dismissOnLock;
- (bool)forcesModalAlertAppearance;
- (id)icon;
- (id)iconLocation;
- (id)initWithIcon:(id)arg1 location:(id)arg2;
- (bool)shouldShowInLockScreen;

@end
