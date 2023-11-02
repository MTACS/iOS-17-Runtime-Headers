
@interface BSUIPartialStylingLabelView : UIView {
    UILabel * _contentLabel;
    id /* block */  _rangeFindingBlock;
    NSAttributedString * _rawAttributedText;
    NSString * _rawText;
    UILabel * _tokenTypeLabel;
}

@property (getter=_textAlignmentFollowsWritingDirection, setter=_setTextAlignmentFollowsWritingDirection:, nonatomic) bool _textAlignmentFollowsWritingDirection;
@property (nonatomic) bool adjustsFontSizeToFitWidth;
@property (nonatomic, copy) NSAttributedString *attributedText;
@property (nonatomic, readonly) UILabel *contentLabel;
@property (nonatomic, retain) UIFont *font;
@property (nonatomic) long long lineBreakMode;
@property (nonatomic) long long numberOfLines;
@property (nonatomic, copy) NSString *text;
@property (nonatomic) long long textAlignment;
@property (nonatomic, retain) UIColor *textColor;

// Image: /System/Library/PrivateFrameworks/BaseBoardUI.framework/BaseBoardUI

- (void).cxx_destruct;
- (double)_baselineOffsetFromBottom;
- (double)_firstLineBaselineOffsetFromBoundsTop;
- (void)_setTextAlignmentFollowsWritingDirection:(bool)arg1;
- (bool)_textAlignmentFollowsWritingDirection;
- (bool)adjustsFontSizeToFitWidth;
- (id)attributedText;
- (id)contentLabel;
- (id)font;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithRangeFindingBlock:(id /* block */)arg1;
- (id)initWithTokenType:(long long)arg1;
- (long long)lineBreakMode;
- (long long)numberOfLines;
- (void)setAdjustsFontSizeToFitWidth:(bool)arg1;
- (void)setAttributedText:(id)arg1;
- (void)setFont:(id)arg1;
- (void)setLineBreakMode:(long long)arg1;
- (void)setNumberOfLines:(long long)arg1;
- (void)setText:(id)arg1;
- (void)setTextAlignment:(long long)arg1;
- (void)setTextColor:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)text;
- (long long)textAlignment;
- (id)textColor;

// Image: /System/Library/PrivateFrameworks/MaterialKit.framework/MaterialKit

- (void)mt_applyVisualStyling:(id)arg1;
- (void)mt_removeAllVisualStyling;

@end
