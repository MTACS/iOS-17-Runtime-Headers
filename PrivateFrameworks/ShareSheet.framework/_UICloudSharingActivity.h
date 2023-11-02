
@interface _UICloudSharingActivity : UIActivity <_UICloudSharingControllerDelegate_Internal, _UIDocumentSharingControllerDelegate_Private> {
    UIImage * _activityImage;
    bool  _activityItemIsFolder;
    bool  _activityItemIsInSharedFolder;
    NSString * _activityTitle;
    UIViewController * _activityViewController;
    bool  _initialSharing;
}

@property (nonatomic, retain) UIImage *activityImage;
@property (nonatomic) bool activityItemIsFolder;
@property (nonatomic) bool activityItemIsInSharedFolder;
@property (nonatomic, retain) NSString *activityTitle;
@property (nonatomic, retain) UIViewController *activityViewController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool initialSharing;
@property (readonly) Class superclass;

+ (unsigned long long)_xpcAttributes;
+ (long long)activityCategory;

- (void).cxx_destruct;
- (id)_activityFooterText;
- (bool)_activitySupportsPromiseURLs;
- (bool)_allowsAutoCancelOnDismiss;
- (void)_cloudShareControllerDidDismiss:(id)arg1;
- (void)_documentSharingControllerDidDismiss:(id)arg1;
- (bool)_isURLEligibleForSharing:(id)arg1 isInitial:(bool*)arg2 isFolder:(bool*)arg3;
- (void)_prepareWithActivityItems:(id)arg1 completion:(id /* block */)arg2;
- (void)_setupForInitialSharing;
- (void)_setupForSharingInfo;
- (void)_showSharingControllerForURL:(id)arg1 completion:(id /* block */)arg2;
- (id)_systemImageName;
- (id)activityImage;
- (bool)activityItemIsFolder;
- (bool)activityItemIsInSharedFolder;
- (id)activityTitle;
- (id)activityType;
- (id)activityViewController;
- (bool)canPerformWithActivityItems:(id)arg1;
- (bool)eligibleTypeForActivity:(id)arg1;
- (bool)initialSharing;
- (void)performActivity;
- (void)setActivityImage:(id)arg1;
- (void)setActivityItemIsFolder:(bool)arg1;
- (void)setActivityItemIsInSharedFolder:(bool)arg1;
- (void)setActivityTitle:(id)arg1;
- (void)setActivityViewController:(id)arg1;
- (void)setInitialSharing:(bool)arg1;

@end
