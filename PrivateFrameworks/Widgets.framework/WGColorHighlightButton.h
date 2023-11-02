
@interface WGColorHighlightButton : UIButton {
    UIColor * _highlightedBackgroundColor;
    UIColor * _savedBackgroundColor;
}

@property (nonatomic, retain) UIColor *highlightedBackgroundColor;
@property (nonatomic, retain) UIColor *savedBackgroundColor;

- (void).cxx_destruct;
- (void)_updateRealBackgroundColor;
- (id)highlightedBackgroundColor;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (id)savedBackgroundColor;
- (void)setBackgroundColor:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setHighlightedBackgroundColor:(id)arg1;
- (void)setSavedBackgroundColor:(id)arg1;

@end
