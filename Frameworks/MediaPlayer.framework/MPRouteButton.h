
@interface MPRouteButton : UIControl {
    UIImage * _accessoryImage;
    double  _accessoryImageSpacing;
    UIImageView * _accessoryImageView;
    double  _alphaOverride;
    UIFont * _font;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _hitRectInsets;
    UIColor * _overrideColor;
    MPAVRoute * _route;
    MPRouteLabel * _routeLabel;
    long long  _routeLabelAxis;
    bool  _routeLabelHidden;
    NSString * _routeTitle;
}

@property (nonatomic, retain) UIImage *accessoryImage;
@property (nonatomic) double accessoryImageSpacing;
@property (nonatomic, readonly) NSArray *contentViews;
@property (nonatomic, retain) UIFont *font;
@property (nonatomic) bool forcesUppercaseText;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } hitRectInsets;
@property (nonatomic, retain) UIColor *overrideColor;
@property (nonatomic, retain) UIImageSymbolConfiguration *preferredSymbolConfiguration;
@property (nonatomic, retain) MPAVRoute *route;
@property (nonatomic) long long routeLabelAxis;
@property (getter=isRouteLabelHidden, nonatomic) bool routeLabelHidden;
@property (nonatomic, readonly, copy) NSString *routeTitle;

- (void).cxx_destruct;
- (void)_intrinsicContentSizeInvalidatedForChildView:(id)arg1;
- (void)_updateAccessoryIcon;
- (id)accessoryImage;
- (double)accessoryImageSpacing;
- (id)contentViews;
- (id)font;
- (bool)forcesUppercaseText;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })hitRectInsets;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)isRouteLabelHidden;
- (void)layoutSubviews;
- (id)overrideColor;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)preferredSymbolConfiguration;
- (id)route;
- (void)routeDidChangeNotification:(id)arg1;
- (long long)routeLabelAxis;
- (id)routeTitle;
- (void)setAccessoryImage:(id)arg1;
- (void)setAccessoryImageSpacing:(double)arg1;
- (void)setAlpha:(double)arg1;
- (void)setFont:(id)arg1;
- (void)setForcesUppercaseText:(bool)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setHitRectInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setOverrideColor:(id)arg1;
- (void)setPreferredSymbolConfiguration:(id)arg1;
- (void)setRoute:(id)arg1;
- (void)setRouteLabelAxis:(long long)arg1;
- (void)setRouteLabelHidden:(bool)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)tintColorDidChange;

@end
