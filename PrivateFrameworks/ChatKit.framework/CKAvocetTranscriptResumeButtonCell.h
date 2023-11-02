
@interface CKAvocetTranscriptResumeButtonCell : CKTranscriptLabelCell {
    NSString * _chatIdentifier;
    bool  _showStewieTextButton;
    UIButton * _textViaStewieButton;
}

@property (nonatomic, retain) NSString *chatIdentifier;
@property (getter=isShowingStewieTextButton, nonatomic) bool showStewieTextButton;
@property (nonatomic, retain) UIButton *textViaStewieButton;

+ (id)_buttonWithSystemImageName:(id)arg1 titleString:(id)arg2;
+ (void)_configureLabel:(id)arg1;
+ (id)_createButtonConfigurationWithSystemImageName:(id)arg1 titleString:(id)arg2;
+ (id)_makeTextViaStewieButton;
+ (double)heightForChatItem:(id)arg1 fittingSize:(struct CGSize { double x1; double x2; })arg2;

- (void).cxx_destruct;
- (void)_layoutLabelInAlignmentContentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)attributedButtonText;
- (id)chatIdentifier;
- (void)configureForChatItem:(id)arg1 context:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isShowingStewieTextButton;
- (void)layoutSubviewsForAlignmentContents;
- (void)prepareForReuse;
- (void)setChatIdentifier:(id)arg1;
- (void)setShowStewieTextButton:(bool)arg1;
- (void)setTextViaStewieButton:(id)arg1;
- (id)textViaStewieButton;
- (void)touchUpInsideTextViaStewieButton:(id)arg1;

@end
