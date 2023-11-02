
@interface UIPointerShape : NSObject <NSCopying> {
    long long  __type;
    double  _beamLength;
    double  _cornerRadius;
    double  _defaultCornerRadius;
    struct CGPoint { 
        double x; 
        double y; 
    }  _inherentConstrainedSlip;
    unsigned long long  _materialUsage;
    UIBezierPath * _path;
    struct CGPoint { 
        double x; 
        double y; 
    }  _pinnedPoint;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _rect;
}

@property (setter=_setType:, nonatomic) long long _type;
@property (nonatomic) double beamLength;
@property (nonatomic, readonly) NSString *cornerCurve;
@property (nonatomic) double cornerRadius;
@property (nonatomic) double defaultCornerRadius;
@property (nonatomic, readonly) double effectiveCornerRadius;
@property (nonatomic) struct CGPoint { double x1; double x2; } inherentConstrainedSlip;
@property (nonatomic, readonly) bool isCircle;
@property (nonatomic, readonly) bool isElastic;
@property (nonatomic, readonly) bool isEmpty;
@property (nonatomic) unsigned long long materialUsage;
@property (nonatomic, copy) UIBezierPath *path;
@property (nonatomic) struct CGPoint { double x1; double x2; } pinnedPoint;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } rect;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } size;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

+ (id)_elasticRectShapePinnedAtPoint:(struct CGPoint { double x1; double x2; })arg1;
+ (id)_linkPointerShape;
+ (id)_shapeWithSymbol:(id)arg1 pointSize:(double)arg2;
+ (id)beamWithPreferredLength:(double)arg1 axis:(unsigned long long)arg2;
+ (id)shapeWithPath:(id)arg1;
+ (id)shapeWithRoundedRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
+ (id)shapeWithRoundedRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 cornerRadius:(double)arg2;

- (void).cxx_destruct;
- (void)_setType:(long long)arg1;
- (long long)_type;
- (double)beamLength;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)cornerCurve;
- (double)cornerRadius;
- (double)defaultCornerRadius;
- (id)description;
- (double)effectiveCornerRadius;
- (unsigned long long)hash;
- (struct CGPoint { double x1; double x2; })inherentConstrainedSlip;
- (id)init;
- (bool)isCircle;
- (bool)isElastic;
- (bool)isEmpty;
- (bool)isEqual:(id)arg1;
- (unsigned long long)materialUsage;
- (id)path;
- (struct CGPoint { double x1; double x2; })pinnedPoint;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rect;
- (void)setBeamLength:(double)arg1;
- (void)setCornerRadius:(double)arg1;
- (void)setDefaultCornerRadius:(double)arg1;
- (void)setInherentConstrainedSlip:(struct CGPoint { double x1; double x2; })arg1;
- (void)setMaterialUsage:(unsigned long long)arg1;
- (void)setPath:(id)arg1;
- (void)setPinnedPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })size;

// Image: /System/Library/PrivateFrameworks/MobileSafari.framework/MobileSafari

+ (id)sf_shapeForToolbarButton:(id)arg1;

@end
