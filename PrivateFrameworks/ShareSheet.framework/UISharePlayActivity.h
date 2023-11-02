
@interface UISharePlayActivity : UIActivity <SHSheetGroupActivitySharingControllerDelegate, UIPeopleSuggestionRecipientActivity> {
    SHSheetGroupActivitySharingController * _groupActivitySharingController;
}

@property (nonatomic, retain) SHSheetGroupActivitySharingController *groupActivitySharingController;
@property (nonatomic, copy) NSString *sessionID;

+ (bool)_canPerform;
+ (unsigned long long)_xpcAttributes;
+ (long long)activityCategory;

- (void).cxx_destruct;
- (void)_cleanup;
- (long long)_defaultSortGroup;
- (id)_systemImageName;
- (id)activityImage;
- (id)activityTitle;
- (id)activityType;
- (id)activityViewController;
- (bool)canPerformWithActivityItems:(id)arg1;
- (id)groupActivitySharingController;
- (void)groupActivitySharingController:(id)arg1 didFinish:(bool)arg2;
- (void)prepareWithActivityItems:(id)arg1;
- (void)setGroupActivitySharingController:(id)arg1;
- (void)setSessionID:(id)arg1;

@end
