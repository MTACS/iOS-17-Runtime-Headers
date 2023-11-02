
@interface CKUnreadCountLabelCell : CKTranscriptMultilineLabelCell {
    UIView * _leftSeparator;
    UIView * _rightSeparator;
}

@property (nonatomic, retain) UIView *leftSeparator;
@property (nonatomic, retain) UIView *rightSeparator;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviewsForContents;
- (id)leftSeparator;
- (id)rightSeparator;
- (void)setLeftSeparator:(id)arg1;
- (void)setRightSeparator:(id)arg1;

@end
