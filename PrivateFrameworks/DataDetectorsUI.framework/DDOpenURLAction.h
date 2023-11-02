
@interface DDOpenURLAction : DDAction {
    LSAppLink * _appLink;
    bool  _appLinkInitDone;
}

- (void).cxx_destruct;
- (id)appLink;
- (bool)canBePerformedByOpeningURL;
- (bool)canBePerformedWhenDeviceIsLocked;
- (id)compactTitle;
- (id)companionAction;
- (id)iconName;
- (id)localizedName;
- (id)notificationIconBundleIdentifier;
- (id)notificationURL;
- (void)performFromView:(id)arg1;
- (id)quickActionTitle;
- (bool)shouldOpenInApp;
- (bool)shouldOpenInSafari;

@end
