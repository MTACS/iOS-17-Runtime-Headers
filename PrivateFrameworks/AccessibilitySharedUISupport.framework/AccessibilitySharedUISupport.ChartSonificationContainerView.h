
@interface AccessibilitySharedUISupport.ChartSonificationContainerView : UIView <AXChart> {
    void chartDescriptor;
    void displayLink;
    void numberFormatter;
    void playheadLabel;
    void playheadTimer;
    void playheadView;
    void state;
}

@property (nonatomic, retain) NSAttributedString *accessibilityAttributedLabel;
@property (nonatomic, retain) AXChartDescriptor *accessibilityChartDescriptor;
@property (nonatomic) bool isAccessibilityElement;

- (void).cxx_destruct;
- (void)_accessibilityDidChangeSonificationPlaybackPosition:(double)arg1;
- (void)_accessibilitySonificationPlaybackStatusChanged:(unsigned long long)arg1;
- (id)accessibilityAttributedLabel;
- (id)accessibilityChartDescriptor;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isAccessibilityElement;
- (void)setAccessibilityAttributedLabel:(id)arg1;
- (void)setAccessibilityChartDescriptor:(id)arg1;
- (void)setIsAccessibilityElement:(bool)arg1;
- (void)updatePlayhead:(double)arg1;

@end
