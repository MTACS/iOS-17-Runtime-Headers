
@interface _UIScrollViewScrollIndicator : UIView <UIPointerInteractionDelegate, _UIScrollViewScrollIndicator> {
    bool  _expandedForDirectManipulation;
    UIColor * _foregroundColor;
    bool  _hasPointer;
    UIView * _roundedFillView;
    long long  _style;
    unsigned long long  _type;
    <_UIScrollViewScrollIndicatorVisualStyle> * _visualStyle;
}

@property (getter=_visualStyle, nonatomic, readonly) <_UIScrollViewScrollIndicatorVisualStyle> *_visualStyle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool expandedForDirectManipulation;
@property (nonatomic, retain) UIColor *foregroundColor;
@property (nonatomic) bool hasPointer;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } layoutOffset;
@property (nonatomic, retain) UIView *roundedFillView;
@property (nonatomic) long long style;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long type;

+ (void)_ensureDefaultStyles;
+ (void)registerVisualStyle:(id)arg1 forIdiom:(long long)arg2;
+ (id)visualStyleForIdiom:(long long)arg1;
+ (id)visualStyleForTraitCollection:(id)arg1;

- (void).cxx_destruct;
- (void)_layoutFillViewAnimated:(bool)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_offsetFillViewRectForExpandedState:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)_visualStyle;
- (void)didMoveToWindow;
- (bool)expandedForDirectManipulation;
- (id)foregroundColor;
- (bool)hasPointer;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })layoutOffset;
- (void)layoutSubviews;
- (id)pointerInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3;
- (id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2;
- (void)pointerInteraction:(id)arg1 willEnterRegion:(id)arg2 animator:(id)arg3;
- (void)pointerInteraction:(id)arg1 willExitRegion:(id)arg2 animator:(id)arg3;
- (id)roundedFillView;
- (void)setExpandedForDirectManipulation:(bool)arg1;
- (void)setForegroundColor:(id)arg1;
- (void)setHasPointer:(bool)arg1;
- (void)setRoundedFillView:(id)arg1;
- (void)setStyle:(long long)arg1;
- (void)setType:(unsigned long long)arg1;
- (long long)style;
- (unsigned long long)type;

@end
