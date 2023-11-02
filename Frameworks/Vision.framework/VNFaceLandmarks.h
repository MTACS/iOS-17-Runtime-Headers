
@interface VNFaceLandmarks : NSObject <NSCopying, NSSecureCoding, VNOriginatingRequestSpecifierProviding, VNRequestRevisionProviding> {
    struct _Geometry2D_rect2D_ { 
        struct _Geometry2D_point2D_ { 
            float x; 
            float y; 
        } origin; 
        struct _Geometry2D_size2D_ { 
            float height; 
            float width; 
        } size; 
    }  _alignedBBox;
    float  _confidence;
    VNRequestSpecifier * _originatingRequestSpecifier;
    unsigned long long  _pointCount;
    NSData * _pointsData;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _userFacingBBox;
}

@property (readonly) struct _Geometry2D_rect2D_ { struct _Geometry2D_point2D_ { float x_1_1_1; float x_1_1_2; } x1; struct _Geometry2D_size2D_ { float x_2_1_1; float x_2_1_2; } x2; } alignedBBox;
@property (readonly) float confidence;
@property (readonly) VNRequestSpecifier *originatingRequestSpecifier;
@property (readonly) unsigned long long pointCount;
@property (readonly, copy) NSData *pointsData;
@property (nonatomic, readonly) unsigned long long requestRevision;
@property (readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } userFacingBBox;

+ (id)defaultOriginatingRequestClassNameForRequestRevision:(unsigned long long)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void*)_createPointArray:(const int*)arg1 count:(unsigned long long)arg2;
- (struct _Geometry2D_rect2D_ { struct _Geometry2D_point2D_ { float x_1_1_1; float x_1_1_2; } x1; struct _Geometry2D_size2D_ { float x_2_1_1; float x_2_1_2; } x2; })alignedBBox;
- (float)confidence;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithOriginatingRequestSpecifier:(id)arg1 pointsData:(id)arg2 pointCount:(unsigned long long)arg3 userFacingBBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 alignedBBox:(struct _Geometry2D_rect2D_ { struct _Geometry2D_point2D_ { float x_1_1_1; float x_1_1_2; } x1; struct _Geometry2D_size2D_ { float x_2_1_1; float x_2_1_2; } x2; })arg5 landmarkScore:(float)arg6;
- (bool)isEqual:(id)arg1;
- (bool)isUserFacingBBoxEquivalentToAlignedBBox;
- (id)originatingRequestSpecifier;
- (unsigned long long)pointCount;
- (id)pointsData;
- (unsigned long long)requestRevision;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })userFacingBBox;

@end
