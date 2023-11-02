
@interface _SMUFloatingContentView : _UIFloatingContentView <SMUFloatingContentView>

@property (nonatomic) bool _disableOutsetShadowPath;
@property (nonatomic) struct CGSize { double x1; double x2; } asymmetricFocusedSizeIncrease;
@property (nonatomic) struct CGSize { double x1; double x2; } asymmetricScaleFactor;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } bounds;
@property (nonatomic) bool clipsContentToBounds;
@property (getter=isContentOpaque, nonatomic) bool contentOpaque;
@property (nonatomic, readonly) UIView *contentView;
@property (getter=isContinuousCornerEnabled, nonatomic) bool continuousCornerEnabled;
@property (nonatomic) unsigned long long controlState;
@property (nonatomic) NSString *cornerCurve;
@property (nonatomic) double cornerRadius;
@property (nonatomic, copy) <SMUFocusAnimationConfiguration> *focusAnimationConfiguration;
@property (nonatomic) struct CGPoint { double x1; double x2; } focusScaleAnchorPoint;
@property (nonatomic) double focusedSizeIncrease;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } frame;
@property (nonatomic) long long highlightStyle;
@property (nonatomic) bool roundContentWhenDeselected;
@property (nonatomic) double scaleFactor;
@property (nonatomic) bool scalesBackwards;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } shadowContentsCenter;
@property (getter=isShadowEnabled, nonatomic) bool shadowEnabled;
@property (nonatomic) struct CGSize { double x1; double x2; } shadowExpansion;
@property (nonatomic, retain) UIImage *shadowImage;
@property (nonatomic) double shadowOpacity;
@property (nonatomic) double shadowRadius;
@property (nonatomic) struct CGSize { double x1; double x2; } shadowSize;
@property (nonatomic) double shadowVerticalOffset;
@property (nonatomic) bool showsHighContrastFocusIndicator;
@property (nonatomic) struct CGSize { double x1; double x2; } unfocusedShadowExpansion;
@property (nonatomic) double unfocusedShadowOpacity;
@property (nonatomic) double unfocusedShadowRadius;
@property (nonatomic) double unfocusedShadowVerticalOffset;
@property (nonatomic) bool useShadowImage;
@property (nonatomic, readonly) UIView *visualEffectContainerView;
@property (nonatomic) double visualEffectContainerViewScaleFactor;

@end
