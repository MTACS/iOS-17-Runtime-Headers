
@interface VUIOverlayView : VUIBaseView {
    NSArray * _badgeViewWrappers;
    CALayer * _gradientLayer;
    VUIBaseView * _gradientView;
    bool  _hasPageControlDisplayedOnTop;
    long long  _overlayType;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _padding;
    VUIProgressView * _progressView;
    VUITextBadgeView * _textBadge;
    VUILabel * _titleLabel;
}

@property (nonatomic, copy) NSArray *badgeViewWrappers;
@property (nonatomic, retain) CALayer *gradientLayer;
@property (nonatomic, retain) VUIBaseView *gradientView;
@property (nonatomic) bool hasPageControlDisplayedOnTop;
@property (nonatomic) long long overlayType;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } padding;
@property (nonatomic, retain) VUIProgressView *progressView;
@property (nonatomic, retain) VUITextBadgeView *textBadge;
@property (nonatomic, retain) VUILabel *titleLabel;

+ (id)overlayViewFromMediaItem:(id)arg1 overlayType:(long long)arg2 existingView:(id)arg3;

- (void).cxx_destruct;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_overlayPadding;
- (id)badgeViewWrappers;
- (id)gradientLayer;
- (id)gradientView;
- (bool)hasPageControlDisplayedOnTop;
- (long long)overlayType;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })padding;
- (id)progressView;
- (void)setBadgeViewWrappers:(id)arg1;
- (void)setGradientLayer:(id)arg1;
- (void)setGradientView:(id)arg1;
- (void)setHasPageControlDisplayedOnTop:(bool)arg1;
- (void)setOverlayType:(long long)arg1;
- (void)setPadding:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setProgressView:(id)arg1;
- (void)setTextBadge:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (id)textBadge;
- (id)titleLabel;
- (struct CGSize { double x1; double x2; })vui_layoutSubviews:(struct CGSize { double x1; double x2; })arg1 computationOnly:(bool)arg2;

@end
