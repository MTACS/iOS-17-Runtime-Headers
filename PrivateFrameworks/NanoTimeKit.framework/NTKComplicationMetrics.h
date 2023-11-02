
@interface NTKComplicationMetrics : NSObject <NSCopying, NSSecureCoding> {
    double  _cornerRadius;
    bool  _opaque;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _safeAreaInsets;
    double  _scaleFactor;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
}

@property (nonatomic, readonly) double cornerRadius;
@property (nonatomic, readonly) bool opaque;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } safeAreaInsets;
@property (nonatomic, readonly) double scaleFactor;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } size;

+ (id)defaultMetricsForFamily:(long long)arg1 device:(id)arg2;
+ (id)metricsWithSize:(struct CGSize { double x1; double x2; })arg1 safeAreaInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2 cornerRadius:(double)arg3 opaque:(bool)arg4;
+ (id)metricsWithSize:(struct CGSize { double x1; double x2; })arg1 safeAreaInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2 cornerRadius:(double)arg3 opaque:(bool)arg4 scaleFactor:(double)arg5;
+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)cornerRadius;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)opaque;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })safeAreaInsets;
- (double)scaleFactor;
- (struct CGSize { double x1; double x2; })size;

@end
