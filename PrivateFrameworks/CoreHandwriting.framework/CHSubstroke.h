
@interface CHSubstroke : NSObject <NSSecureCoding> {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _bounds;
    struct vector<CGPoint, std::allocator<CGPoint>> { 
        struct CGPoint {} *__begin_; 
        struct CGPoint {} *__end_; 
        struct __compressed_pair<CGPoint *, std::allocator<CGPoint>> { 
            struct CGPoint {} *__value_; 
        } __end_cap_; 
    }  _convexHull;
    double  _curvature;
    double  _endTimestamp;
    double  _startTimestamp;
    CHEncodedStrokeIdentifier * _strokeIdentifier;
}

@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } bounds;
@property (nonatomic, readonly) double curvature;
@property (nonatomic, readonly) double endTimestamp;
@property (nonatomic, readonly) double startTimestamp;
@property (nonatomic, readonly) CHEncodedStrokeIdentifier *strokeIdentifier;

+ (id)substrokesForStroke:(id)arg1;
+ (bool)supportsSecureCoding;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (void*)convexHull;
- (double)curvature;
- (void)encodeWithCoder:(id)arg1;
- (double)endTimestamp;
- (id)initWithCoder:(id)arg1;
- (id)initWithStrokeIdentifier:(id)arg1 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 startTimestamp:(double)arg3 endTimestamp:(double)arg4 convexHull:(const void*)arg5 curvature:(double)arg6;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToSubstroke:(id)arg1;
- (double)startTimestamp;
- (id)strokeIdentifier;

@end
