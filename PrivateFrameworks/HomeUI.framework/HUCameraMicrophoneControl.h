
@interface HUCameraMicrophoneControl : UIControl {
    UIButton * _doneButton;
    HUIconView * _doneButtonIconView;
    UIButton * _talkButton;
    bool  _talking;
}

@property (nonatomic, retain) UIButton *doneButton;
@property (nonatomic, retain) HUIconView *doneButtonIconView;
@property (nonatomic, retain) UIButton *talkButton;
@property (getter=isTalking, nonatomic) bool talking;

- (void).cxx_destruct;
- (id)doneButton;
- (id)doneButtonIconView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)isTalking;
- (void)setDoneButton:(id)arg1;
- (void)setDoneButtonIconView:(id)arg1;
- (void)setTalkButton:(id)arg1;
- (void)setTalking:(bool)arg1;
- (id)talkButton;

@end
