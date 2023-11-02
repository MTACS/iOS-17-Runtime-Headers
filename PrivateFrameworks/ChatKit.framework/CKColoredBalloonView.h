
@interface CKColoredBalloonView : CKBalloonView {
    CKBalloonImageView * _effectViewMask;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _gradientOverrideFrame;
    CKGradientView * _gradientView;
    CKBalloonImageView * _mask;
    bool  _wantsGradient;
}

@property (nonatomic, retain) CKBalloonImageView *effectViewMask;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } gradientOverrideFrame;
@property (nonatomic, retain) UIView<CKGradientReferenceView> *gradientReferenceView;
@property (nonatomic, retain) CKGradientView *gradientView;
@property (nonatomic, readonly) bool hasBackground;
@property (nonatomic, retain) CKBalloonImageView *mask;
@property (nonatomic) bool wantsGradient;

- (void).cxx_destruct;
- (void)addFilter:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })alignmentRectInsets;
- (struct CKBalloonDescriptor_t { BOOL x1; BOOL x2; BOOL x3; BOOL x4; unsigned long long x5; BOOL x6; BOOL x7; long long x8; long long x9; bool x10; bool x11; bool x12; bool x13; })balloonDescriptor;
- (void)clearFilters;
- (void)configureForComposition:(id)arg1;
- (void)configureForMessagePart:(id)arg1;
- (id)description;
- (id)effectViewMask;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })gradientOverrideFrame;
- (id)gradientReferenceView;
- (id)gradientView;
- (bool)hasBackground;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)mask;
- (bool)needsGroupOpacity;
- (id)overlayColor;
- (void)prepareForDisplay;
- (void)prepareForReuse;
- (void)setBalloonDescriptor:(struct CKBalloonDescriptor_t { BOOL x1; BOOL x2; BOOL x3; BOOL x4; unsigned long long x5; BOOL x6; BOOL x7; long long x8; long long x9; bool x10; bool x11; bool x12; bool x13; })arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setCanUseOpaqueMask:(bool)arg1;
- (void)setColor:(BOOL)arg1;
- (void)setEffectViewMask:(id)arg1;
- (void)setEffectViewMaskImage:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setGradientOverrideFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setGradientReferenceView:(id)arg1;
- (void)setGradientView:(id)arg1;
- (void)setHasTail:(bool)arg1;
- (void)setMask:(id)arg1;
- (void)setWantsGradient:(bool)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateWantsGradient;
- (bool)wantsGradient;

@end
