
@interface CoreAudioKit.AURingModVisualizationView : CoreAudioKit.AUVisualizationView {
    void freq1;
    void freq2;
    void modShape;
}

@property (nonatomic, retain) UIColor *tintColor;

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setTintColor:(id)arg1;
- (id)tintColor;

@end
