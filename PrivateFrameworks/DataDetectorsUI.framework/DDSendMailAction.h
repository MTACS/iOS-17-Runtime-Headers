
@interface DDSendMailAction : DDAction <MFMailComposeViewControllerDelegate>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)matchingScheme;

- (bool)canBePerformedByOpeningURL;
- (id)compactTitle;
- (id)iconName;
- (int)interactionType;
- (id)localizedName;
- (id)notificationIconBundleIdentifier;
- (id)notificationTitle;
- (id)notificationURL;
- (void)performFromView:(id)arg1;

@end
