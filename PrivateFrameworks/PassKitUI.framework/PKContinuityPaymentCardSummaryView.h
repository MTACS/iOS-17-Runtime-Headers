
@interface PKContinuityPaymentCardSummaryView : UIView {
    UIImageView * _alertView;
    NSString * _cardDescription;
    UILabel * _descriptionView;
    bool  _showsAlert;
    NSMutableArray * _singleLineConstraints;
    NSString * _subtitle;
    NSMutableArray * _subtitleConstraints;
    bool  _subtitleDescribesError;
    UILabel * _subtitleView;
    NSLayoutConstraint * _textToAlertConstraint;
    NSLayoutConstraint * _textToTrailingConstraint;
    UIImageView * _thumbnailView;
}

@property (nonatomic, copy) NSString *cardDescription;
@property (nonatomic) bool showsAlert;
@property (nonatomic, copy) NSString *subtitle;
@property (nonatomic) bool subtitleDescribesError;
@property (nonatomic, readonly) UIImageView *thumbnailView;

- (void).cxx_destruct;
- (void)_createLabels;
- (void)_createSubviews;
- (id)_formatTextForString:(id)arg1 alerting:(bool)arg2;
- (void)_prepareImageAndValueConstraints;
- (id)cardDescription;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setCardDescription:(id)arg1;
- (void)setShowsAlert:(bool)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setSubtitleDescribesError:(bool)arg1;
- (bool)showsAlert;
- (id)subtitle;
- (bool)subtitleDescribesError;
- (id)thumbnailView;
- (void)updateConstraints;

@end
