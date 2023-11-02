
@interface _UIPortalView : UIView {
    bool  __geometryFrozen;
    bool  _forwardsClientHitTestingToSourceView;
    NSString * _name;
    UIView * _sourceView;
}

@property (getter=_isGeometryFrozen, setter=_setGeometryFrozen:, nonatomic) bool _geometryFrozen;
@property (nonatomic) bool allowsBackdropGroups;
@property (nonatomic) bool allowsHitTesting;
@property (nonatomic) bool forwardsClientHitTestingToSourceView;
@property (nonatomic) bool hidesSourceView;
@property (nonatomic) bool matchesAlpha;
@property (nonatomic) bool matchesPosition;
@property (nonatomic) bool matchesTransform;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, readonly) CAPortalLayer *portalLayer;
@property (nonatomic) UIView *sourceView;

+ (Class)layerClass;

- (void).cxx_destruct;
- (bool)_isGeometryFrozen;
- (void)_setGeometryFrozen:(bool)arg1;
- (bool)allowsBackdropGroups;
- (bool)allowsHitTesting;
- (id)description;
- (bool)forwardsClientHitTestingToSourceView;
- (bool)hidesSourceView;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithSourceView:(id)arg1;
- (bool)matchesAlpha;
- (bool)matchesPosition;
- (bool)matchesTransform;
- (id)name;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)portalLayer;
- (void)setAllowsBackdropGroups:(bool)arg1;
- (void)setAllowsHitTesting:(bool)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setCenter:(struct CGPoint { double x1; double x2; })arg1;
- (void)setForwardsClientHitTestingToSourceView:(bool)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setHidden:(bool)arg1;
- (void)setHidesSourceView:(bool)arg1;
- (void)setMatchesAlpha:(bool)arg1;
- (void)setMatchesPosition:(bool)arg1;
- (void)setMatchesTransform:(bool)arg1;
- (void)setName:(id)arg1;
- (void)setSourceView:(id)arg1;
- (id)sourceView;

@end
