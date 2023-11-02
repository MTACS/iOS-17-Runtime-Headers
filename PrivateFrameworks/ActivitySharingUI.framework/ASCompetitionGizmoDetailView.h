
@interface ASCompetitionGizmoDetailView : UIView {
    ASCompetitionGraphView * _graphView;
    bool  _isInteractionEnabled;
    ASCompetitionMessageBubbleView * _messageBubbleView;
    long long  _modules;
    NSNumber * _previousLayoutWidth;
    ASCompetitionTimeRemainingLabel * _timeRemainingLabel;
    UIView * _timeRemainingSeparator;
    ASCompetitionScoreView * _totalScoreView;
    ASCompetitionScoreView * _totalWinsScoreView;
    UIView * _totalWinsSeparator;
    long long  _type;
}

@property (nonatomic) bool isInteractionEnabled;

- (void).cxx_destruct;
- (id)initWithDetailViewType:(long long)arg1;
- (bool)isInteractionEnabled;
- (void)layoutForWidth:(double)arg1;
- (void)layoutSubviews;
- (void)setFriend:(id)arg1 competition:(id)arg2;
- (void)setIsInteractionEnabled:(bool)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (bool)supportsSmackTalkReply;

@end
