
@interface SBApplicationLaunchNotifyAlertItem : SBAlertItem {
    SBApplication * _application;
}

@property (nonatomic, readonly) SBApplication *application;

- (void).cxx_destruct;
- (id)application;
- (bool)dismissOnLock;
- (id)initWithApplication:(id)arg1;

@end
