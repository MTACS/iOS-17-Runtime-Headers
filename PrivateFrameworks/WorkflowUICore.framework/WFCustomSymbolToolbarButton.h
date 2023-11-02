
@interface WFCustomSymbolToolbarButton : UIButton {
    double  _pointSizeToWidthRatio;
    NSString * _symbolName;
}

@property (nonatomic) double pointSizeToWidthRatio;
@property (nonatomic, retain) NSString *symbolName;

- (void).cxx_destruct;
- (double)pointSizeToWidthRatio;
- (void)setPointSizeToWidthRatio:(double)arg1;
- (void)setSymbolName:(id)arg1;
- (void)setSymbolName:(id)arg1 pointSizeToWidthRatio:(double)arg2;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)symbolName;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateImage;

@end
