
@interface DDTextMessageAction : DDTelephoneNumberAction <MFMessageComposeViewControllerDelegate>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)matchingScheme;

- (bool)canBePerformedByOpeningURL;
- (id)iconName;
- (int)interactionType;
- (id)localizedName;
- (void)messageComposeViewController:(id)arg1 didFinishWithResult:(long long)arg2;
- (id)notificationIconBundleIdentifier;
- (id)notificationTitle;
- (id)notificationURL;
- (void)performFromView:(id)arg1;
- (bool)prefersOpenToCreate;
- (id)subtitle;
- (id)viewController;

@end
