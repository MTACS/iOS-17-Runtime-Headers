
@interface TLKEmbossedLabel : TLKView {
    TLKProminenceView * _backgroundView;
    UIColor * _color;
    struct CGSize { 
        double width; 
        double height; 
    }  _customInsetSize;
    UIFont * _font;
    TLKLabel * _label;
    bool  _shouldBadge;
    TLKMultilineText * _text;
    struct CGSize { 
        double width; 
        double height; 
    }  _textOffset;
}

@property (nonatomic) bool adjustsFontSizeToFitWidth;
@property (nonatomic, retain) TLKProminenceView *backgroundView;
@property (nonatomic, retain) UIColor *color;
@property (nonatomic) struct CGSize { double x1; double x2; } customInsetSize;
@property (nonatomic, retain) UIFont *font;
@property (nonatomic, retain) TLKLabel *label;
@property (nonatomic) bool shouldBadge;
@property (nonatomic, retain) TLKMultilineText *text;
@property (nonatomic) struct CGSize { double x1; double x2; } textOffset;

- (void).cxx_destruct;
- (bool)adjustsFontSizeToFitWidth;
- (id)backgroundView;
- (id)color;
- (struct CGSize { double x1; double x2; })customInsetSize;
- (double)effectiveBaselineOffsetFromBottom;
- (double)effectiveFirstBaselineOffsetFromTop;
- (struct CGSize { double x1; double x2; })effectiveLayoutSizeFittingSize:(struct CGSize { double x1; double x2; })arg1;
- (id)font;
- (id)init;
- (id)label;
- (void)layoutSubviews;
- (void)observedPropertiesChanged;
- (void)setAdjustsFontSizeToFitWidth:(bool)arg1;
- (void)setBackgroundView:(id)arg1;
- (void)setColor:(id)arg1;
- (void)setCustomInsetSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setFont:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setShouldBadge:(bool)arg1;
- (void)setText:(id)arg1;
- (void)setText:(id)arg1 font:(id)arg2 customInsetSize:(struct CGSize { double x1; double x2; })arg3 badge:(bool)arg4;
- (void)setTextOffset:(struct CGSize { double x1; double x2; })arg1;
- (bool)shouldBadge;
- (id)text;
- (struct CGSize { double x1; double x2; })textOffset;

@end
