
@interface CKTranscriptBlockContactCell : CKTranscriptLabelCell {
    UIButton * _blockContactButton;
}

@property (nonatomic, copy) NSAttributedString *attributedButtonText;
@property (nonatomic, retain) UIButton *blockContactButton;

+ (id)blockContactButton;

- (void).cxx_destruct;
- (void)addFilter:(id)arg1;
- (id)attributedButtonText;
- (id)blockContactButton;
- (void)clearFilters;
- (void)configureForChatItem:(id)arg1 context:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviewsForAlignmentContents;
- (void)setAttributedButtonText:(id)arg1;
- (void)setBlockContactButton:(id)arg1;

@end
