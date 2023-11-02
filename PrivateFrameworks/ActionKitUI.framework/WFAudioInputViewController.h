
@interface WFAudioInputViewController : UIViewController {
    UIView * _contentView;
    UILabel * _statusLabel;
}

@property (nonatomic, readonly) UIView *contentView;
@property (nonatomic, readonly) UILabel *statusLabel;

- (void).cxx_destruct;
- (bool)accessibilityPerformMagicTap;
- (id)contentView;
- (void)handleTap;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadView;
- (id)statusLabel;

@end
