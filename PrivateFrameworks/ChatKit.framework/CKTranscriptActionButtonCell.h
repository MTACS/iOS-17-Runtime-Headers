
@interface CKTranscriptActionButtonCell : CKTranscriptAbstractLabelCell {
    UIButton * _actionButton;
    <CKTranscriptActionButtonCellDelegate> * _delegate;
}

@property (nonatomic) <CKTranscriptActionButtonCellDelegate> *delegate;

+ (id)reuseIdentifier;
+ (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1 attributedText:(id)arg2 displayScale:(double)arg3;

- (void).cxx_destruct;
- (id)attributedText;
- (void)buttonPrimaryActionTriggered:(id)arg1;
- (id)cellView;
- (void)configureForChatItem:(id)arg1 context:(id)arg2;
- (id)delegate;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)label;
- (void)setAttributedText:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
