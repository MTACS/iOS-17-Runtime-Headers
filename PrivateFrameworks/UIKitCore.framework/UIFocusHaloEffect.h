
@interface UIFocusHaloEffect : UIFocusEffect {
    _UIShape * __shape;
    <UICoordinateSpace> * __shapeCoordinateSpace;
    UIView * _containerView;
    struct { 
        unsigned int isResolved : 1; 
    }  _flags;
    long long  _position;
    UIView * _referenceView;
}

@property (nonatomic, readonly) _UIShape *_shape;
@property (nonatomic, readonly) <UICoordinateSpace> *_shapeCoordinateSpace;
@property (nonatomic) UIView *containerView;
@property (nonatomic) long long position;
@property (nonatomic) UIView *referenceView;

+ (id)_effectWithUIShape:(id)arg1;
+ (id)effectWithPath:(id)arg1;
+ (id)effectWithRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
+ (id)effectWithRoundedRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 cornerRadius:(double)arg2 curve:(id)arg3;

- (void).cxx_destruct;
- (id)_resolvedEffectForItem:(id)arg1;
- (id)_shape;
- (id)_shapeCoordinateSpace;
- (id)containerView;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)isEqual:(id)arg1;
- (long long)position;
- (id)referenceView;
- (void)setContainerView:(id)arg1;
- (void)setPosition:(long long)arg1;
- (void)setReferenceView:(id)arg1;

@end
