
@interface UIResolvedShape : NSObject <NSCopying> {
    void cachedShape;
    void value;
}

@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } boundingRect;
@property (nonatomic, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) UIBezierPath *path;
@property (nonatomic, readonly) UIShape *shape;

- (void).cxx_destruct;
- (id)_shapeByClippingToShape:(id)arg1;
- (id)_shapeByConvertingFromSpace:(id)arg1 toSpace:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundingRect;
- (id)copyWithZone:(void*)arg1;
- (id)debugDescription;
- (id)description;
- (id)init;
- (id)path;
- (id)shape;
- (id)shapeByApplyingInset:(double)arg1;
- (id)shapeByApplyingInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;

@end
