
@interface WeatherMaps.WeatherMapAnnotationView : MKAnnotationView <_MKBalloonCalloutViewConfiguring> {
    void $__lazy_storage_$_locationLabel;
    void $__lazy_storage_$_pinView;
    void axBalloonContentView;
    void dataSource;
    void delegate;
    void mapAnnotation;
    void shouldDisableImplicitAnimations;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  viewModel;
}

@property (nonatomic) struct CGPoint { double x1; double x2; } accessibilityActivationPoint;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } accessibilityFrame;
@property (nonatomic, copy) NSString *accessibilityHint;
@property (nonatomic, copy) NSString *accessibilityLabel;
@property (nonatomic, retain) UIBezierPath *accessibilityPath;
@property (nonatomic) unsigned long long accessibilityTraits;
@property (nonatomic, copy) NSString *accessibilityValue;
@property (nonatomic, readonly) long long balloonCalloutStyle;
@property (nonatomic, readonly) UIView *balloonContentView;
@property (nonatomic, readonly) UIImage *balloonImage;
@property (nonatomic, readonly) UIColor *balloonStrokeColor;
@property (nonatomic, readonly) UIColor *balloonTintColor;
@property (nonatomic) bool isAccessibilityElement;

- (void).cxx_destruct;
- (long long)_balloonCalloutStyle;
- (id)_balloonContentView;
- (id)_balloonImage;
- (id)_balloonStrokeColor;
- (id)_balloonTintColor;
- (struct CGPoint { double x1; double x2; })accessibilityActivationPoint;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })accessibilityFrame;
- (id)accessibilityHint;
- (id)accessibilityLabel;
- (id)accessibilityPath;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityValue;
- (id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (bool)isAccessibilityElement;
- (void)layoutSubviews;
- (void)setAccessibilityActivationPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setAccessibilityFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setAccessibilityHint:(id)arg1;
- (void)setAccessibilityLabel:(id)arg1;
- (void)setAccessibilityPath:(id)arg1;
- (void)setAccessibilityTraits:(unsigned long long)arg1;
- (void)setAccessibilityValue:(id)arg1;
- (void)setIsAccessibilityElement:(bool)arg1;
- (void)setSelected:(bool)arg1 animated:(bool)arg2;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
