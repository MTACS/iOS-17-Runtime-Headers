
@interface PUCurationTripKeyAssetBrowserDebugPhotosGridCell : PUPhotosGridCell {
    double  _aestheticScore;
    UILabel * _aestheticScoreLabel;
    UIColor * _color;
    double  _curationScore;
    UILabel * _curationScoreLabel;
    double  _iconicSceneScore;
    UILabel * _iconicSceneScoreLabel;
    double  _promotionScore;
    UILabel * _promotionScoreLabel;
    NSString * _subtitle;
    UILabel * _subtitleLabel;
    NSString * _title;
    UILabel * _titleLabel;
}

@property (nonatomic) double aestheticScore;
@property (nonatomic, copy) UIColor *color;
@property (nonatomic) double curationScore;
@property (nonatomic) double iconicSceneScore;
@property (nonatomic) double promotionScore;
@property (nonatomic, copy) NSString *subtitle;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (double)aestheticScore;
- (id)color;
- (double)curationScore;
- (double)iconicSceneScore;
- (void)layoutSubviews;
- (double)promotionScore;
- (void)setAestheticScore:(double)arg1;
- (void)setColor:(id)arg1;
- (void)setCurationScore:(double)arg1;
- (void)setIconicSceneScore:(double)arg1;
- (void)setPromotionScore:(double)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)subtitle;
- (id)title;

@end
