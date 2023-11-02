
@protocol SHSheetContentViewModel <NSObject>

@required

- (NSArray *)actionProxies;
- (NSDictionary *)activitiesByUUID;
- (NSArray *)applicationActivityTypes;
- (SLCollaborationFooterViewModel *)collaborationFooterViewModel;
- (NSString *)collaborationModeTitle;
- (UIColor *)customHeaderButtonColor;
- (NSAttributedString *)customHeaderButtonTitle;
- (NSString *)customOptionsTitle;
- (UIViewController *)customViewController;
- (NSNumber *)customViewControllerSectionHeightWrapper;
- (NSNumber *)customViewControllerVerticalInsetWrapper;
- (bool)isCollaborative;
- (bool)isLoadingMetadata;
- (bool)isSharingExpanded;
- (NSArray *)metadataValues;
- (NSNumber *)nearbyCountSlotID;
- (NSArray *)peopleSuggestionProxies;
- (bool)reloadData;
- (NSArray *)shareProxies;
- (bool)showCustomHeaderButton;
- (bool)showOptions;
- (bool)supportsCollaboration;
- (bool)supportsSendCopy;
- (bool)updateProxiesWithAnimation;
- (NSArray *)urlRequests;
- (NSArray *)urlSandboxExtensions;

@end
