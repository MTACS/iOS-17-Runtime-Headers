
@interface GKDashboardTurnCell : GKDashboardPlayerCell {
    UIImageView * _actionIndicatorView;
    UIColor * _dateColor;
    UILabel * _dateLabel;
    double  _dateToNameConstant;
    NSLayoutConstraint * _dateToNameConstraint;
    long long  _displayIndex;
    UIColor * _turnColor;
    UILabel * _turnLabel;
    double  _turnToNameConstant;
    NSLayoutConstraint * _turnToNameConstraint;
}

@property (nonatomic) UIImageView *actionIndicatorView;
@property (nonatomic, retain) UIColor *dateColor;
@property (nonatomic) UILabel *dateLabel;
@property (nonatomic) double dateToNameConstant;
@property (nonatomic) NSLayoutConstraint *dateToNameConstraint;
@property (nonatomic) long long displayIndex;
@property (nonatomic, retain) UIColor *turnColor;
@property (nonatomic) UILabel *turnLabel;
@property (nonatomic) double turnToNameConstant;
@property (nonatomic) NSLayoutConstraint *turnToNameConstraint;

+ (struct CGSize { double x1; double x2; })defaultSize;
+ (struct CGSize { double x1; double x2; })defaultSizeForTurnDetail;

- (void).cxx_destruct;
- (id)actionIndicatorView;
- (void)awakeFromNib;
- (void)configureForMatch:(id)arg1;
- (void)configureForParticipant:(id)arg1 inMatch:(id)arg2;
- (id)dateColor;
- (id)dateLabel;
- (double)dateToNameConstant;
- (id)dateToNameConstraint;
- (long long)displayIndex;
- (void)setActionIndicatorView:(id)arg1;
- (void)setDateColor:(id)arg1;
- (void)setDateLabel:(id)arg1;
- (void)setDateToNameConstant:(double)arg1;
- (void)setDateToNameConstraint:(id)arg1;
- (void)setDisplayIndex:(long long)arg1;
- (void)setOnDarkBackground:(bool)arg1;
- (void)setTurnColor:(id)arg1;
- (void)setTurnLabel:(id)arg1;
- (void)setTurnToNameConstant:(double)arg1;
- (void)setTurnToNameConstraint:(id)arg1;
- (id)turnColor;
- (id)turnLabel;
- (double)turnToNameConstant;
- (id)turnToNameConstraint;
- (bool)wantsLocalPlayerAction:(id)arg1;

@end
