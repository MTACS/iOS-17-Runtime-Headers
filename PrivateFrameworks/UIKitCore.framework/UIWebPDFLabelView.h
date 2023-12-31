
@interface UIWebPDFLabelView : UIView {
    _UIBackdropView * _backdropView;
    UILabel * _label;
    NSTimer * _timer;
    unsigned long long  currentPageIndex;
}

@property (nonatomic) unsigned long long currentPageIndex;
@property (getter=isTimerInstalled, nonatomic, readonly) bool timerInstalled;

- (void)_fadeOutAnimationDidStop;
- (double)_fadeOutDelay;
- (double)_fadeOutDuration;
- (void)_makeRoundedCorners;
- (void)clearTimer;
- (unsigned long long)currentPageIndex;
- (void)dealloc;
- (void)fadeOut;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isTimerInstalled;
- (void)setCurrentPageIndex:(unsigned long long)arg1;
- (void)setText:(id)arg1;
- (void)showNowInSuperView:(id)arg1 atOrigin:(struct CGPoint { double x1; double x2; })arg2 withText:(id)arg3 animated:(bool)arg4;
- (void)sizeToFit;

@end
