
@interface UIBoxInviteActivity : UIFileProviderApplicationExtensionActivity {
    NSAttributedString * _boxFooterText;
    bool  _isiWorkFile;
}

@property (nonatomic, copy) NSAttributedString *boxFooterText;
@property (nonatomic) bool isiWorkFile;

- (void).cxx_destruct;
- (id)_actionImage;
- (id)_activityFooterText;
- (id)activityTitle;
- (id)boxFooterText;
- (bool)canPerformWithActivityItems:(id)arg1;
- (bool)isiWorkFile;
- (void)setBoxFooterText:(id)arg1;
- (void)setIsiWorkFile:(bool)arg1;

@end
