
@interface SBFairPlayFamilyLeaveAlertItem : SBAlertItem {
    FBSApplicationInfo * _appInfo;
}

@property (nonatomic, retain) FBSApplicationInfo *appInfo;

- (void).cxx_destruct;
- (id)appInfo;
- (void)configure:(bool)arg1 requirePasscodeForActions:(bool)arg2;
- (bool)dismissOnLock;
- (id)initWithAppInfo:(id)arg1;
- (void)setAppInfo:(id)arg1;

@end
