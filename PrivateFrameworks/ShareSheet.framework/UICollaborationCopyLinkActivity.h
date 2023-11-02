
@interface UICollaborationCopyLinkActivity : UIActivity <UICollaborationActivity> {
    <SFCollaborationItem> * _collaborationItem;
    <SFCollaborationService> * _collaborationService;
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
- (bool)_activitySupportsPromiseURLs;
- (long long)_defaultSortGroup;
- (void)_prepareWithActivityItems:(id)arg1 completion:(id /* block */)arg2;
- (id)_systemImageName;
- (id)activityTitle;
- (id)activityType;
- (id)activityViewController;
- (bool)canPerformWithActivityItems:(id)arg1;
- (bool)canPerformWithCollaborationItem:(id)arg1 activityItems:(id)arg2;
- (id)collaborationItem;
- (id)collaborationService;
- (void)performActivity;
- (void)setCollaborationItem:(id)arg1;
- (void)setCollaborationService:(id)arg1;

@end
