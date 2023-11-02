
@interface ICPasswordUtilities : NSObject {
    id  _displayedSheet;
    NSString * _divergedAccountPassword;
    bool  _isShowingDivergedDialogue;
}

@property (nonatomic, retain) id displayedSheet;
@property (nonatomic, retain) NSString *divergedAccountPassword;
@property (nonatomic) bool isShowingDivergedDialogue;

+ (bool)deviceHasPasscode;
+ (id)imageForCurrentDecryptedStatusForNote:(id)arg1;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)accessibilityAnnounceAuthSuccessForIntent:(unsigned long long)arg1 withNote:(id)arg2;
- (id)displayedSheet;
- (id)divergedAccountPassword;
- (bool)isShowingDivergedDialogue;
- (void)setDisplayedSheet:(id)arg1;
- (void)setDivergedAccountPassword:(id)arg1;
- (void)setIsShowingDivergedDialogue:(bool)arg1;
- (void)showChangePasswordDialogueFromDisplayWindow:(id)arg1 account:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)showPasswordSetUpSheetForAccount:(id)arg1 displayWindow:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)showUpdateDivergedPasswordForAccountPassword:(id)arg1 oldPassword:(id)arg2 account:(id)arg3 displayWindow:(id)arg4;

@end
