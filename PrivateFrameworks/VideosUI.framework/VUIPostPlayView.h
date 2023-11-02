
@interface VUIPostPlayView : UIView {
    NSNumber * _autoPlayDuration;
    VUICountDownProgressIndicator * _autoPlayIndicator;
    AVBackgroundView * _backgroundView;
    bool  _canAutoPlay;
    NSNumber * _defaultAutoPlayDuration;
    <VUIPostPlayViewDelegate> * _delegate;
    TVImageProxy * _episodeImageProxy;
    _TVImageView * _episodeImageView;
    NSString * _header;
    VUILabel * _headerLabel;
    VUILabel * _nextEpisodeLabel;
    NSString * _title;
}

@property (nonatomic, retain) NSNumber *autoPlayDuration;
@property (nonatomic, retain) VUICountDownProgressIndicator *autoPlayIndicator;
@property (nonatomic, retain) AVBackgroundView *backgroundView;
@property (nonatomic) bool canAutoPlay;
@property (nonatomic, retain) NSNumber *defaultAutoPlayDuration;
@property (nonatomic) <VUIPostPlayViewDelegate> *delegate;
@property (nonatomic, retain) TVImageProxy *episodeImageProxy;
@property (nonatomic, retain) _TVImageView *episodeImageView;
@property (nonatomic, retain) NSString *header;
@property (nonatomic, retain) VUILabel *headerLabel;
@property (nonatomic, retain) VUILabel *nextEpisodeLabel;
@property (nonatomic, retain) NSString *title;

- (void).cxx_destruct;
- (void)_dispatchAutoPlayEvent;
- (void)_invalidateAutoPlayIfNeeded;
- (struct CGSize { double x1; double x2; })_layoutForCategoryAccessibility:(struct CGSize { double x1; double x2; })arg1 metricsOnly:(bool)arg2;
- (struct CGSize { double x1; double x2; })_layoutForOriginal:(struct CGSize { double x1; double x2; })arg1 metricsOnly:(bool)arg2;
- (struct CGSize { double x1; double x2; })_layoutWithSize:(struct CGSize { double x1; double x2; })arg1 metricsOnly:(bool)arg2;
- (void)_setupViews;
- (void)_startAutoPlayAnimation;
- (id)autoPlayDuration;
- (id)autoPlayIndicator;
- (id)backgroundView;
- (bool)canAutoPlay;
- (id)defaultAutoPlayDuration;
- (id)delegate;
- (id)episodeImageProxy;
- (id)episodeImageView;
- (id)header;
- (id)headerLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 andEpisodeArtworkURLStringFormat:(id)arg2 andTitle:(id)arg3 andHeader:(id)arg4;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 andTVImageProxy:(id)arg2 andTitle:(id)arg3 andHeader:(id)arg4;
- (void)layoutSubviews;
- (id)nextEpisodeLabel;
- (void)setAutoPlayDuration:(id)arg1;
- (void)setAutoPlayIndicator:(id)arg1;
- (void)setBackgroundView:(id)arg1;
- (void)setCanAutoPlay:(bool)arg1;
- (void)setDefaultAutoPlayDuration:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEpisodeImageProxy:(id)arg1;
- (void)setEpisodeImageView:(id)arg1;
- (void)setHeader:(id)arg1;
- (void)setHeaderLabel:(id)arg1;
- (void)setNextEpisodeLabel:(id)arg1;
- (void)setTitle:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)startAutoPlayTimer;
- (void)stopAutoPlayTimer;
- (id)title;

@end
