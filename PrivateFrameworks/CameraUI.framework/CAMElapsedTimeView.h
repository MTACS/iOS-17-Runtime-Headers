
@interface CAMElapsedTimeView : UIView {
    UIImageView * __backgroundView;
    NSDate * __startTime;
    UILabel * __timeLabel;
    NSTimer * __updateTimer;
    long long  _backgroundStyle;
    NSString * _contentSizeCategory;
    long long  _layoutStyle;
}

@property (nonatomic, readonly) UIImageView *_backgroundView;
@property (nonatomic, readonly) NSDate *_startTime;
@property (nonatomic, readonly) UILabel *_timeLabel;
@property (nonatomic, readonly) NSTimer *_updateTimer;
@property (nonatomic) long long backgroundStyle;
@property (nonatomic, copy) NSString *contentSizeCategory;
@property (nonatomic) long long layoutStyle;
@property (getter=isShowingBackground, nonatomic) bool showingBackground;

+ (id)elapsedTimeFormatter;

- (void).cxx_destruct;
- (id)_backgroundView;
- (void)_commonCAMElapsedTimeViewInitializationWithLayoutStyle:(long long)arg1;
- (void)_setStartTime:(id)arg1;
- (id)_startTime;
- (id)_timeLabel;
- (void)_updateBackgroundViewAnimated:(bool)arg1;
- (void)_updateFont;
- (void)_updateForTimer:(id)arg1;
- (void)_updateText;
- (id)_updateTimer;
- (long long)backgroundStyle;
- (id)contentSizeCategory;
- (void)dealloc;
- (void)endTimer;
- (id)initWithBadgeAppearance;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithLayoutStyle:(long long)arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)isShowingBackground;
- (long long)layoutStyle;
- (void)layoutSubviews;
- (void)resetTimer;
- (void)setBackgroundStyle:(long long)arg1;
- (void)setBackgroundStyle:(long long)arg1 animated:(bool)arg2;
- (void)setContentSizeCategory:(id)arg1;
- (void)setLayoutStyle:(long long)arg1;
- (void)setShowingBackground:(bool)arg1;
- (void)setShowingBackground:(bool)arg1 animated:(bool)arg2;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)startTimer;
- (void)traitCollectionDidChange:(id)arg1;

@end
