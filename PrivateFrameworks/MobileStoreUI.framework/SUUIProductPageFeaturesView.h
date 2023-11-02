
@interface SUUIProductPageFeaturesView : UIView {
    UIView * _bottomBorderView;
    SUUIClientContext * _clientContext;
    SUUIColorScheme * _colorScheme;
    NSMutableArray * _featureViews;
    long long  _features;
    unsigned long long  _gameCenterFeatures;
    UILabel * _titleLabel;
    UIView * _topBorderView;
}

@property (nonatomic, retain) SUUIClientContext *clientContext;
@property (nonatomic, retain) SUUIColorScheme *colorScheme;
@property (nonatomic) long long features;
@property (nonatomic) unsigned long long gameCenterFeatures;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (id)_gameCenterStringWithFeatures:(unsigned long long)arg1;
- (id)clientContext;
- (id)colorScheme;
- (long long)features;
- (unsigned long long)gameCenterFeatures;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setBackgroundColor:(id)arg1;
- (void)setClientContext:(id)arg1;
- (void)setColorScheme:(id)arg1;
- (void)setFeatures:(long long)arg1;
- (void)setFeatures:(long long)arg1 gameCenterFeatures:(unsigned long long)arg2;
- (void)setGameCenterFeatures:(unsigned long long)arg1;
- (void)setTitle:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)title;

@end
