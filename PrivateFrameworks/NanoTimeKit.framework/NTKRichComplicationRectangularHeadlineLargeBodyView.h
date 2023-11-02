
@interface NTKRichComplicationRectangularHeadlineLargeBodyView : NTKRichComplicationRectangularBaseView {
    UIView * _body;
    CLKUIColoringLabel * _headerLabel;
}

@property (nonatomic, retain) CLKUIColoringLabel *headerLabel;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })_bodySize;
- (void)_editingDidEnd;
- (void)_handleTemplate:(id)arg1 reason:(long long)arg2;
- (id)body;
- (id)headerLabel;
- (id)headerTextProviderFromTemplate:(id)arg1;
- (id)init;
- (void)layoutSubviews;
- (void)setHeaderLabel:(id)arg1;
- (void)transitionToMonochromeWithFraction:(double)arg1;
- (void)updateMonochromeColor;

@end
