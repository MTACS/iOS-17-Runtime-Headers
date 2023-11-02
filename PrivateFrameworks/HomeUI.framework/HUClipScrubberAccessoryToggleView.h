
@interface HUClipScrubberAccessoryToggleView : UIView {
    UIButton * _accessoryButton;
    UIView * _backgroundView;
    UIButton * _liveButton;
}

@property (nonatomic, retain) UIButton *accessoryButton;
@property (nonatomic, retain) UIView *backgroundView;
@property (nonatomic, retain) UIButton *liveButton;

- (void).cxx_destruct;
- (id)accessoryButton;
- (id)backgroundView;
- (void)displayForTimelineState:(unsigned long long)arg1;
- (void)displayWithoutBackgroundVisualEffects;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)liveButton;
- (void)setAccessoryButton:(id)arg1;
- (void)setBackgroundView:(id)arg1;
- (void)setLiveButton:(id)arg1;

@end
