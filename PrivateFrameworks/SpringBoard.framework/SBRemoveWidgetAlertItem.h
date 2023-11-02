
@interface SBRemoveWidgetAlertItem : SBAlertItem {
    SBWidgetIcon * _icon;
    NSString * _iconLocation;
    SBHIconManager * _iconManager;
    <SBLeafIconDataSource> * _widget;
}

@property (nonatomic, retain) SBWidgetIcon *icon;
@property (nonatomic, retain) NSString *iconLocation;
@property (nonatomic) SBHIconManager *iconManager;
@property (nonatomic, retain) <SBLeafIconDataSource> *widget;

- (void).cxx_destruct;
- (void)configure:(bool)arg1 requirePasscodeForActions:(bool)arg2;
- (void)didActivate;
- (bool)dismissOnLock;
- (bool)forcesModalAlertAppearance;
- (id)icon;
- (id)iconLocation;
- (id)iconManager;
- (id)initWithWidget:(id)arg1 inIcon:(id)arg2 location:(id)arg3 iconManager:(id)arg4;
- (id)initWithWidgetIcon:(id)arg1 location:(id)arg2 iconManager:(id)arg3;
- (void)setIcon:(id)arg1;
- (void)setIconLocation:(id)arg1;
- (void)setIconManager:(id)arg1;
- (void)setWidget:(id)arg1;
- (bool)shouldShowInLockScreen;
- (id)widget;

@end
