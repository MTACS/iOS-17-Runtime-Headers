
@interface CoreAudioKit.AULabeledMeterView : UIView {
    void axis;
    void fillLayer;
    void label;
    void labelLayers;
    void lastVoiceOverUpdate;
    void level;
    void lineLayers;
    void margins;
    void meterLabelLayer;
    void meterLayer;
    void peak;
    void peakFaderTrigger;
    void peakLayer;
    void peakTimer;
    void vertical;
}

@property (nonatomic) unsigned long long accessibilityTraits;

- (void).cxx_destruct;
- (unsigned long long)accessibilityTraits;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSublayersOfLayer:(id)arg1;
- (void)setAccessibilityTraits:(unsigned long long)arg1;
- (void)tintColorDidChange;
- (void)willMoveToSuperview:(id)arg1;

@end
