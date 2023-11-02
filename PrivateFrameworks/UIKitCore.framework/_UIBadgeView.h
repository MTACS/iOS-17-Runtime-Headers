
@interface _UIBadgeView : UIView {
    UIColor * _badgeColor;
    UILabel * _label;
    NSMutableDictionary * _mergedTextAttributes;
    _UIBadgeVisualStyle * _style;
    NSString * _text;
    NSDictionary * _textAttributes;
    struct UIOffset { 
        double horizontal; 
        double vertical; 
    }  _textOffset;
}

@property (nonatomic, copy) UIColor *badgeColor;
@property (nonatomic, retain) _UIBadgeVisualStyle *style;
@property (nonatomic, copy) NSString *text;
@property (nonatomic, copy) NSDictionary *textAttributes;
@property (nonatomic) struct UIOffset { double x1; double x2; } textOffset;

- (void).cxx_destruct;
- (void)_applyTextToLabel;
- (void)_setUpLabelIfNecessary;
- (id)badgeColor;
- (id)initWithText:(id)arg1;
- (void)layoutSubviews;
- (void)setBadgeColor:(id)arg1;
- (void)setStyle:(id)arg1;
- (void)setText:(id)arg1;
- (void)setTextAttributes:(id)arg1;
- (void)setTextOffset:(struct UIOffset { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)style;
- (id)text;
- (id)textAttributes;
- (struct UIOffset { double x1; double x2; })textOffset;

@end
