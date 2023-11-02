
@interface DDAddToAddressBookAction : DDAddressAction

@property (nonatomic, retain) DDRemoteActionViewController *viewController;

+ (bool)actionAvailableForContact:(id)arg1;
+ (bool)isAvailable;

- (void)adaptForPresentationInPopover:(bool)arg1;
- (id)compactTitle;
- (id)contact;
- (int)interactionType;
- (void)invalidate;
- (id)localizedName;
- (id)notificationIconBundleIdentifier;
- (id)notificationTitle;
- (id)notificationURL;
- (void)prepareViewControllerForActionController:(id)arg1;

@end
