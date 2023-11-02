
@interface PKPaletteHandwritingToolView : PKPaletteToolView <PKPaletteHandwritingTool> {
    NSString * _localeIdentifier;
    bool  _needsUpdateTitleLabel;
    UILabel * _toolLabel;
    NSLayoutConstraint * _toolLabelCenterXConstraint;
    NSLayoutConstraint * _toolLabelCenterYConstraint;
}

@property (nonatomic, readonly) PKToolConfiguration *configuration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <PKPaletteErasingTool> *erasingTool;
@property (nonatomic, readonly) <PKPaletteHandwritingTool> *handwritingTool;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <PKPaletteInkingTool> *inkingTool;
@property (nonatomic, copy) NSString *localeIdentifier;
@property (nonatomic) bool needsUpdateTitleLabel;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *toolIdentifier;
@property (nonatomic, retain) UILabel *toolLabel;
@property (nonatomic, retain) NSLayoutConstraint *toolLabelCenterXConstraint;
@property (nonatomic, retain) NSLayoutConstraint *toolLabelCenterYConstraint;
@property (nonatomic, readonly) NSString *toolVariant;

- (void).cxx_destruct;
- (struct CGPoint { double x1; double x2; })_toolLabelCenterOffset;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })_toolLabelImageViewTransform;
- (id)_toolLabelText;
- (void)_updateUI;
- (id)init;
- (id)initWithToolIdentifier:(id)arg1 variant:(id)arg2 configuration:(id)arg3;
- (id)localeIdentifier;
- (bool)needsUpdateTitleLabel;
- (void)setEdgeLocation:(unsigned long long)arg1;
- (void)setLocaleIdentifier:(id)arg1;
- (void)setNeedsUpdateTitleLabel:(bool)arg1;
- (void)setScalingFactor:(double)arg1;
- (void)setToolLabel:(id)arg1;
- (void)setToolLabelCenterXConstraint:(id)arg1;
- (void)setToolLabelCenterYConstraint:(id)arg1;
- (id)toolLabel;
- (id)toolLabelCenterXConstraint;
- (id)toolLabelCenterYConstraint;
- (void)updateConstraints;

@end
