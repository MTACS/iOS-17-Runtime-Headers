
@interface DDAddEventAction : DDAction {
    DDRemoteActionViewController * viewController;
}

@property (nonatomic, retain) DDRemoteActionViewController *viewController;

+ (bool)actionAvailableForEvent:(id)arg1;
+ (id)cachedEventForICSString:(id)arg1;
+ (id)icsEventForICSString:(id)arg1;
+ (bool)isAvailable;

- (void).cxx_destruct;
- (id)compactTitle;
- (id)eventStartDateFromCache;
- (id)eventTitleFromCache;
- (id)iconName;
- (int)interactionType;
- (void)invalidate;
- (id)localizedName;
- (id)notificationIconBundleIdentifier;
- (id)notificationTitle;
- (id)notificationURL;
- (void)prepareViewControllerForActionController:(id)arg1;
- (id)quickActionTitle;
- (void)setViewController:(id)arg1;
- (id)variantIconName;
- (id)viewController;

@end
