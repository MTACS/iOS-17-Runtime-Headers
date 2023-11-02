
@interface SBApplication32BitDeprecationAlertItem : SBAlertItem {
    SBApplication * _associatedDisplay;
}

@property (nonatomic) SBApplication *associatedDisplay;

- (void).cxx_destruct;
- (id)_message;
- (id)_title;
- (id)associatedDisplay;
- (void)configure:(bool)arg1 requirePasscodeForActions:(bool)arg2;
- (bool)dismissOnLock;
- (bool)forcesModalAlertAppearance;
- (id)initWithApplication:(id)arg1;
- (void)setAssociatedDisplay:(id)arg1;
- (bool)shouldShowInLockScreen;

@end
