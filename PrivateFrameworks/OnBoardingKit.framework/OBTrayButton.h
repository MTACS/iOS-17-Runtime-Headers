
@interface OBTrayButton : UIButton {
    double  _lastTitleLabelHeight;
}

@property (nonatomic, readonly) UIActivityIndicatorView *activityIndicator;
@property (nonatomic) double lastTitleLabelHeight;

// Image: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit

+ (id)buttonWithType:(long long)arg1;
+ (double)standardHeight;

- (id)_fontTextStyle;
- (id)buttonFont;
- (void)hidesBusyIndicator;
- (double)lastTitleLabelHeight;
- (void)setLastTitleLabelHeight:(double)arg1;
- (void)showsBusyIndicator;
- (void)traitCollectionDidChange:(id)arg1;

// Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI

- (id)activityIndicator;

@end
