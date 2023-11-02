
@interface ASCompetitionScoreView : UIView {
    UIImageView * _achievementThumbnailView;
    ASCompetitionScoreViewConfiguration * _configuration;
    bool  _isRTLLayout;
    ASCompetitionParticipantScoreView * _myScoreView;
    ASCompetitionParticipantScoreView * _opponentScoreView;
    UILabel * _scoreTypeHeaderLabel;
}

@property (nonatomic, readonly) double lastBaselineY;

+ (double)preferredHeightForConfiguration:(id)arg1 friend:(id)arg2;

- (void).cxx_destruct;
- (id)initWithConfiguration:(id)arg1;
- (double)lastBaselineY;
- (void)layoutForWidth:(double)arg1;
- (void)layoutSubviews;
- (double)participantScoreViewWidthForParticipant:(long long)arg1 maximumWidth:(double)arg2;
- (void)setFriend:(id)arg1 competition:(id)arg2;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
