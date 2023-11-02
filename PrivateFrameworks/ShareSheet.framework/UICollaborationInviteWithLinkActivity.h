
@interface UICollaborationInviteWithLinkActivity : UIActivity <UICollaborationActivity> {
    <SFCollaborationItem> * _collaborationItem;
}

@property (nonatomic, retain) <SFCollaborationItem> *collaborationItem;
@property (nonatomic) <SFCollaborationService> *collaborationService;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isCollaborative;
@property (readonly) Class superclass;

+ (unsigned long long)_xpcAttributes;
+ (long long)activityCategory;

- (void).cxx_destruct;
- (id)_activityImage;
- (id)_activitySettingsImage;
- (bool)_allowsAutoCancelOnDismiss;
- (long long)_defaultSortGroup;
- (id)activityTitle;
- (id)activityType;
- (bool)canPerformWithActivityItems:(id)arg1;
- (bool)canPerformWithCollaborationItem:(id)arg1 activityItems:(id)arg2;
- (id)collaborationItem;
- (void)performActivity;
- (void)prepareWithActivityItems:(id)arg1;
- (void)setCollaborationItem:(id)arg1;

@end
