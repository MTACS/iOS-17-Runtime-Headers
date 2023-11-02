
@interface ConversationKit.LocalParticipantView : UIView {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _videoMessagingState;
    void blurEnabled;
    void controlsHiddenByViewModel;
    void controlsView;
    void countdownLabel;
    void delegate;
    void dragEnabled;
    void isInRoster;
    void participantView;
    void requiresControlsHidden;
    void requiresViewHidden;
}

@property (nonatomic, readonly) _TtC15ConversationKit28LocalParticipantControlsView *controlsView;

- (void).cxx_destruct;
- (id)controlsView;
- (void)handleLongPress:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)updateCountdownWith:(long long)arg1;

@end
