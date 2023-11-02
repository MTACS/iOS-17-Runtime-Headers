
@interface NTKRichComplicationBaseCircularStackTextView : NTKRichComplicationCircularBaseView {
    unsigned long long  _highlightMode;
    CLKUIColoringLabel * _line1Label;
    CLKUIColoringLabel * _line2Label;
}

@property (nonatomic) unsigned long long highlightMode;
@property (nonatomic, retain) CLKUIColoringLabel *line1Label;
@property (nonatomic, retain) CLKUIColoringLabel *line2Label;

+ (bool)supportsComplicationFamily:(long long)arg1;

- (void).cxx_destruct;
- (id)_createAndAddLabel;
- (id)_desiredFontForLabel:(id)arg1;
- (void)_editingDidEnd;
- (long long)_line1FilterStyle;
- (long long)_line2FilterStyle;
- (void)_setFontConfiguration:(struct CDRichComplicationFontConfiguration { bool x1; id x2; double x3; })arg1;
- (unsigned long long)highlightMode;
- (id)initWithFamily:(long long)arg1;
- (void)layoutSubviews;
- (id)line1Label;
- (id)line2Label;
- (void)setHighlightMode:(unsigned long long)arg1;
- (void)setLine1Label:(id)arg1;
- (void)setLine2Label:(id)arg1;
- (bool)templateWantsPlatter;
- (void)transitionToMonochromeWithFraction:(double)arg1;
- (void)updateMonochromeColor;

@end
