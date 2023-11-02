
@interface SBHClockApplicationIconImageView : SBLiveIconImageView <SBFDateTimeOverrideObserver> {
    NSString * _currentNumberingSystem;
    CALayer * _hourMinuteDot;
    CALayer * _hours;
    UIImage * _mappedContentsImage;
    CALayer * _minutes;
    CALayer * _secondDot;
    CALayer * _seconds;
    UIImage * _squareMappedContentsImage;
}

@property (nonatomic, copy) NSString *currentNumberingSystem;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)_handleTimeChange:(id)arg1;
+ (void)_timerFired:(id)arg1;
+ (id)backgroundImageNameWithImageInfo:(struct SBIconImageInfo { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; })arg1;
+ (void)configureHandLayer:(id)arg1 metrics:(const struct SBHClockApplicationIconImageMetrics { double x1; double x2; double x3; double x4; double x5; struct CGSize { double x_6_1_1; double x_6_1_2; } x6; double x7; double x8; double x9; double x10; struct CGSize { double x_11_1_1; double x_11_1_2; } x11; double x12; double x13; double x14; double x15; struct CGSize { double x_16_1_1; double x_16_1_2; } x16; double x17; double x18; double x19; double x20; double x21; double x22; struct SBIconImageInfo { struct CGSize { double x_1_2_1; double x_1_2_2; } x_23_1_1; double x_23_1_2; double x_23_1_3; } x23; }*)arg2;
+ (id)effectiveDate;
+ (id)fallbackBackgroundImageWithIconImageInfo:(struct SBIconImageInfo { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; })arg1;
+ (void)getMetrics:(struct SBHClockApplicationIconImageMetrics { double x1; double x2; double x3; double x4; double x5; struct CGSize { double x_6_1_1; double x_6_1_2; } x6; double x7; double x8; double x9; double x10; struct CGSize { double x_11_1_1; double x_11_1_2; } x11; double x12; double x13; double x14; double x15; struct CGSize { double x_16_1_1; double x_16_1_2; } x16; double x17; double x18; double x19; double x20; double x21; double x22; struct SBIconImageInfo { struct CGSize { double x_1_2_1; double x_1_2_2; } x_23_1_1; double x_23_1_2; double x_23_1_3; } x23; }*)arg1 forIconImageInfo:(struct SBIconImageInfo { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; })arg2;
+ (bool)hidesSecondsHand;
+ (id)hoursMinutesHandColor;
+ (id)iconImageWithImageInfo:(struct SBIconImageInfo { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; })arg1 includingMask:(bool)arg2;
+ (id)imageSetForMetrics:(const struct SBHClockApplicationIconImageMetrics { double x1; double x2; double x3; double x4; double x5; struct CGSize { double x_6_1_1; double x_6_1_2; } x6; double x7; double x8; double x9; double x10; struct CGSize { double x_11_1_1; double x_11_1_2; } x11; double x12; double x13; double x14; double x15; struct CGSize { double x_16_1_1; double x_16_1_2; } x16; double x17; double x18; double x19; double x20; double x21; double x22; struct SBIconImageInfo { struct CGSize { double x_1_2_1; double x_1_2_2; } x_23_1_1; double x_23_1_2; double x_23_1_3; } x23; }*)arg1;
+ (void)initialize;
+ (id)makeComponentImageWithMetrics:(const struct SBHClockApplicationIconImageMetrics { double x1; double x2; double x3; double x4; double x5; struct CGSize { double x_6_1_1; double x_6_1_2; } x6; double x7; double x8; double x9; double x10; struct CGSize { double x_11_1_1; double x_11_1_2; } x11; double x12; double x13; double x14; double x15; struct CGSize { double x_16_1_1; double x_16_1_2; } x16; double x17; double x18; double x19; double x20; double x21; double x22; struct SBIconImageInfo { struct CGSize { double x_1_2_1; double x_1_2_2; } x_23_1_1; double x_23_1_2; double x_23_1_3; } x23; }*)arg1 size:(struct CGSize { double x1; double x2; })arg2 actions:(id /* block */)arg3;
+ (id)makeComponentImageWithMetrics:(const struct SBHClockApplicationIconImageMetrics { double x1; double x2; double x3; double x4; double x5; struct CGSize { double x_6_1_1; double x_6_1_2; } x6; double x7; double x8; double x9; double x10; struct CGSize { double x_11_1_1; double x_11_1_2; } x11; double x12; double x13; double x14; double x15; struct CGSize { double x_16_1_1; double x_16_1_2; } x16; double x17; double x18; double x19; double x20; double x21; double x22; struct SBIconImageInfo { struct CGSize { double x_1_2_1; double x_1_2_2; } x_23_1_1; double x_23_1_2; double x_23_1_3; } x23; }*)arg1 size:(struct CGSize { double x1; double x2; })arg2 path:(struct CGPath { }*)arg3 fillColor:(id)arg4 options:(unsigned long long)arg5;
+ (id)makeDotImageWithOuterDiameter:(double)arg1 innerDiameter:(double)arg2 color:(id)arg3 isSeconds:(bool)arg4 metrics:(const struct SBHClockApplicationIconImageMetrics { double x1; double x2; double x3; double x4; double x5; struct CGSize { double x_6_1_1; double x_6_1_2; } x6; double x7; double x8; double x9; double x10; struct CGSize { double x_11_1_1; double x_11_1_2; } x11; double x12; double x13; double x14; double x15; struct CGSize { double x_16_1_1; double x_16_1_2; } x16; double x17; double x18; double x19; double x20; double x21; double x22; struct SBIconImageInfo { struct CGSize { double x_1_2_1; double x_1_2_2; } x_23_1_1; double x_23_1_2; double x_23_1_3; } x23; }*)arg5;
+ (id)makeDotLayerWithOuterDiameter:(double)arg1 innerDiameter:(double)arg2 isSeconds:(bool)arg3 imageSet:(id)arg4;
+ (id)makeHoursHandImageWithMetrics:(const struct SBHClockApplicationIconImageMetrics { double x1; double x2; double x3; double x4; double x5; struct CGSize { double x_6_1_1; double x_6_1_2; } x6; double x7; double x8; double x9; double x10; struct CGSize { double x_11_1_1; double x_11_1_2; } x11; double x12; double x13; double x14; double x15; struct CGSize { double x_16_1_1; double x_16_1_2; } x16; double x17; double x18; double x19; double x20; double x21; double x22; struct SBIconImageInfo { struct CGSize { double x_1_2_1; double x_1_2_2; } x_23_1_1; double x_23_1_2; double x_23_1_3; } x23; }*)arg1;
+ (id)makeHoursHandLayerWithImageSet:(id)arg1;
+ (id)makeImageSetForMetrics:(const struct SBHClockApplicationIconImageMetrics { double x1; double x2; double x3; double x4; double x5; struct CGSize { double x_6_1_1; double x_6_1_2; } x6; double x7; double x8; double x9; double x10; struct CGSize { double x_11_1_1; double x_11_1_2; } x11; double x12; double x13; double x14; double x15; struct CGSize { double x_16_1_1; double x_16_1_2; } x16; double x17; double x18; double x19; double x20; double x21; double x22; struct SBIconImageInfo { struct CGSize { double x_1_2_1; double x_1_2_2; } x_23_1_1; double x_23_1_2; double x_23_1_3; } x23; }*)arg1;
+ (id)makeMinutesHandImageWithMetrics:(const struct SBHClockApplicationIconImageMetrics { double x1; double x2; double x3; double x4; double x5; struct CGSize { double x_6_1_1; double x_6_1_2; } x6; double x7; double x8; double x9; double x10; struct CGSize { double x_11_1_1; double x_11_1_2; } x11; double x12; double x13; double x14; double x15; struct CGSize { double x_16_1_1; double x_16_1_2; } x16; double x17; double x18; double x19; double x20; double x21; double x22; struct SBIconImageInfo { struct CGSize { double x_1_2_1; double x_1_2_2; } x_23_1_1; double x_23_1_2; double x_23_1_3; } x23; }*)arg1;
+ (id)makeMinutesHandLayerWithImageSet:(id)arg1;
+ (id)makeSecondsHandImageWithMetrics:(const struct SBHClockApplicationIconImageMetrics { double x1; double x2; double x3; double x4; double x5; struct CGSize { double x_6_1_1; double x_6_1_2; } x6; double x7; double x8; double x9; double x10; struct CGSize { double x_11_1_1; double x_11_1_2; } x11; double x12; double x13; double x14; double x15; struct CGSize { double x_16_1_1; double x_16_1_2; } x16; double x17; double x18; double x19; double x20; double x21; double x22; struct SBIconImageInfo { struct CGSize { double x_1_2_1; double x_1_2_2; } x_23_1_1; double x_23_1_2; double x_23_1_3; } x23; }*)arg1;
+ (id)makeSecondsHandLayerWithImageSet:(id)arg1;
+ (id)overrideDate;
+ (double)overrideDateOffset;
+ (void)precacheDataWithIconImageInfo:(struct SBIconImageInfo { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; })arg1;
+ (id)secondsHandColor;
+ (void)setHidesSecondsHand:(bool)arg1;
+ (void)setOverrideDate:(id)arg1;
+ (void)setOverrideDateOffset:(double)arg1;
+ (id)systemNumberingSystem;

- (void).cxx_destruct;
- (void)_setAnimating:(bool)arg1;
- (void)_timerFiredWithComponents:(id)arg1 flags:(unsigned long long)arg2;
- (void)_updateUnanimatedWithComponents:(id)arg1;
- (void)applyMetrics:(const struct SBHClockApplicationIconImageMetrics { double x1; double x2; double x3; double x4; double x5; struct CGSize { double x_6_1_1; double x_6_1_2; } x6; double x7; double x8; double x9; double x10; struct CGSize { double x_11_1_1; double x_11_1_2; } x11; double x12; double x13; double x14; double x15; struct CGSize { double x_16_1_1; double x_16_1_2; } x16; double x17; double x18; double x19; double x20; double x21; double x22; struct SBIconImageInfo { struct CGSize { double x_1_2_1; double x_1_2_2; } x_23_1_1; double x_23_1_2; double x_23_1_3; } x23; }*)arg1;
- (id)contentsImage;
- (void)controller:(id)arg1 didChangeOverrideDateFromDate:(id)arg2;
- (id)currentNumberingSystem;
- (void)getMetrics:(struct SBHClockApplicationIconImageMetrics { double x1; double x2; double x3; double x4; double x5; struct CGSize { double x_6_1_1; double x_6_1_2; } x6; double x7; double x8; double x9; double x10; struct CGSize { double x_11_1_1; double x_11_1_2; } x11; double x12; double x13; double x14; double x15; struct CGSize { double x_16_1_1; double x_16_1_2; } x16; double x17; double x18; double x19; double x20; double x21; double x22; struct SBIconImageInfo { struct CGSize { double x_1_2_1; double x_1_2_2; } x_23_1_1; double x_23_1_2; double x_23_1_3; } x23; }*)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isAnimationAllowed;
- (void)layoutSubviews;
- (void)localeDidChange:(id)arg1;
- (void)prepareForReuse;
- (void)setCurrentNumberingSystem:(id)arg1;
- (void)setIcon:(id)arg1 location:(id)arg2 animated:(bool)arg3;
- (void)setPaused:(bool)arg1;
- (id)squareContentsImage;
- (void)updateAnimatingState;
- (void)updateUnanimated;

@end
