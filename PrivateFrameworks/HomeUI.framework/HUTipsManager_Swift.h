
@interface HUTipsManager_Swift : NSObject {
    void tileQuickToggleTip;
    void unanalyzedCameraClipTip;
}

+ (id)sharedManager;

- (void).cxx_destruct;
- (id)init;
- (void)toggleDidInteract;
- (void)warmUp;

@end
