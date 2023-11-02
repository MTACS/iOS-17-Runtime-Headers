
@interface ASCompetitionParticipantScoreView : UIView {
    ASCompetitionScoreViewConfiguration * _configuration;
    NSString * _name;
    double  _nameFontSizeReduction;
    UILabel * _nameLabel;
    NSNumber * _previousLayoutWidth;
    unsigned long long  _primaryScore;
    double  _primaryScoreFontSizeReduction;
    UILabel * _primaryScoreLabel;
    UIColor * _scoreColor;
    double  _scoreLeftMargin;
    double  _scoreRightMargin;
    unsigned long long  _secondaryScore;
    bool  _secondaryScoreEnabled;
    UILabel * _secondaryScoreLabel;
}

@property (nonatomic, retain) NSString *name;
@property (nonatomic, readonly) double nameBaselineY;
@property (nonatomic) double nameFontSizeReduction;
@property (nonatomic) unsigned long long primaryScore;
@property (nonatomic) double primaryScoreFontSizeReduction;
@property (nonatomic, retain) UIColor *scoreColor;
@property (nonatomic) double scoreLeftMargin;
@property (nonatomic) double scoreRightMargin;
@property (nonatomic) unsigned long long secondaryScore;
@property (nonatomic) bool secondaryScoreEnabled;

- (void).cxx_destruct;
- (double)_availableScoreWidthForWidth:(double)arg1;
- (double)_computeFontSizeReductionForLabel:(id)arg1 width:(double)arg2 maxReduction:(double)arg3 updateBlock:(id /* block */)arg4;
- (void)_updateNameLabelWithFontSizeReduction:(double)arg1;
- (void)_updatePrimaryScoreLabelWithFontSizeReduction:(double)arg1;
- (void)_updateSecondaryScoreLabel;
- (double)computeNameFontSizeReductionForWidth:(double)arg1;
- (double)computePrimaryScoreFontSizeReductionForWidth:(double)arg1;
- (id)initWithConfiguration:(id)arg1;
- (void)layoutForWidth:(double)arg1;
- (void)layoutSubviews;
- (id)name;
- (double)nameBaselineY;
- (double)nameFontSizeReduction;
- (unsigned long long)primaryScore;
- (double)primaryScoreFontSizeReduction;
- (id)scoreColor;
- (double)scoreLeftMargin;
- (double)scoreRightMargin;
- (unsigned long long)secondaryScore;
- (bool)secondaryScoreEnabled;
- (void)setName:(id)arg1;
- (void)setNameFontSizeReduction:(double)arg1;
- (void)setPrimaryScore:(unsigned long long)arg1;
- (void)setPrimaryScoreFontSizeReduction:(double)arg1;
- (void)setScoreColor:(id)arg1;
- (void)setScoreLeftMargin:(double)arg1;
- (void)setScoreRightMargin:(double)arg1;
- (void)setSecondaryScore:(unsigned long long)arg1;
- (void)setSecondaryScoreEnabled:(bool)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
