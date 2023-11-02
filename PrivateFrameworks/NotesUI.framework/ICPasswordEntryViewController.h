
@interface ICPasswordEntryViewController : UIViewController {
    ICTextBackgroundView * _backgroundView;
    unsigned long long  _intent;
    bool  _isAnimatingOut;
    UIButton * _largeUnlockButton;
    UIImageView * _lockImage;
    unsigned long long  _mode;
    ICNote * _note;
    id /* block */  _passwordEntryCompletionHandler;
    UILabel * _titleLabel;
    UIButton * _unlockButton;
}

@property (nonatomic) ICTextBackgroundView *backgroundView;
@property (nonatomic) unsigned long long intent;
@property (nonatomic) bool isAnimatingOut;
@property (nonatomic) UIButton *largeUnlockButton;
@property (nonatomic) UIImageView *lockImage;
@property (nonatomic) unsigned long long mode;
@property (nonatomic, retain) ICNote *note;
@property (nonatomic, copy) id /* block */ passwordEntryCompletionHandler;
@property (nonatomic) UILabel *titleLabel;
@property (nonatomic) UIButton *unlockButton;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (void)applyEntryViewMode;
- (id)backgroundView;
- (void)beginAuthentication;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2 note:(id)arg3 intent:(unsigned long long)arg4;
- (unsigned long long)intent;
- (bool)isAnimatingOut;
- (id)largeUnlockButton;
- (id)lockImage;
- (unsigned long long)mode;
- (id)note;
- (id /* block */)passwordEntryCompletionHandler;
- (void)setBackgroundView:(id)arg1;
- (void)setIntent:(unsigned long long)arg1;
- (void)setIsAnimatingOut:(bool)arg1;
- (void)setLargeUnlockButton:(id)arg1;
- (void)setLockImage:(id)arg1;
- (void)setMode:(unsigned long long)arg1;
- (void)setNote:(id)arg1;
- (void)setPasswordEntryCompletionHandler:(id /* block */)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setUnlockButton:(id)arg1;
- (id)titleLabel;
- (id)unlockButton;
- (void)unlockPasswordButtonPressed:(id)arg1;
- (void)updateButtonConfiguration;
- (void)viewDidLoad;

@end
