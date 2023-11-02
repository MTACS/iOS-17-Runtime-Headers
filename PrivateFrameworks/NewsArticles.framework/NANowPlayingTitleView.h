
@interface NANowPlayingTitleView : UIView {
    <NANowPlayingTitleViewDelegate> * _delegate;
    NATouchInsetsButton * _ellipsisButton;
    <NANowPlayingTitleViewLayoutSpecProvider> * _layoutSpecProvider;
    UIImageView * _publisherImageView;
    MPUMarqueeView * _publisherMarqueeContainer;
    UILabel * _titleLabel;
    MPUMarqueeView * _titleMarqueeContainer;
}

@property (nonatomic) <NANowPlayingTitleViewDelegate> *delegate;
@property (nonatomic, retain) NATouchInsetsButton *ellipsisButton;
@property (nonatomic) <NANowPlayingTitleViewLayoutSpecProvider> *layoutSpecProvider;
@property (nonatomic, retain) UIImageView *publisherImageView;
@property (nonatomic, readonly) double publisherLogoHeight;
@property (nonatomic, readonly) MPUMarqueeView *publisherMarqueeContainer;
@property (nonatomic, retain) UILabel *titleLabel;
@property (nonatomic, readonly) MPUMarqueeView *titleMarqueeContainer;

- (void).cxx_destruct;
- (void)_setPublisherImage:(id)arg1;
- (id)delegate;
- (id)ellipsisButton;
- (void)ellipsisButtonTapped:(id)arg1;
- (bool)hasPublisherLogo;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 layoutSpecProvider:(id)arg2;
- (id)layoutSpecProvider;
- (void)layoutSubviews;
- (id)publisherImageView;
- (double)publisherLogoHeight;
- (id)publisherMarqueeContainer;
- (void)setDelegate:(id)arg1;
- (void)setEllipsisButton:(id)arg1;
- (void)setLayoutSpecProvider:(id)arg1;
- (void)setMarqueeRunning:(bool)arg1;
- (void)setPublisherImage:(id)arg1 fallbackName:(id)arg2;
- (void)setPublisherImageView:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)titleLabel;
- (id)titleMarqueeContainer;

@end
