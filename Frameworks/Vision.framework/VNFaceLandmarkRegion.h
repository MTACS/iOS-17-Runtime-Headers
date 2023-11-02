
@interface VNFaceLandmarkRegion : NSObject <NSCopying, NSSecureCoding, VNOriginatingRequestSpecifierProviding, VNRequestRevisionProviding> {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _faceBoundingBox;
    VNRequestSpecifier * _originatingRequestSpecifier;
    unsigned long long  _pointCount;
}

@property (readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } faceBoundingBox;
@property (readonly) VNRequestSpecifier *originatingRequestSpecifier;
@property (readonly) unsigned long long pointCount;
@property (nonatomic, readonly) unsigned long long requestRevision;

+ (id)defaultOriginatingRequestClassNameForRequestRevision:(unsigned long long)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })faceBoundingBox;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithOriginatingRequestSpecifier:(id)arg1 faceBoundingBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 pointCount:(unsigned long long)arg3;
- (bool)isEqual:(id)arg1;
- (id)originatingRequestSpecifier;
- (unsigned long long)pointCount;
- (unsigned long long)requestRevision;

@end
