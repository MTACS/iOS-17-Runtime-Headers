
@interface VNFaceGaze : NSObject <NSCopying, NSSecureCoding, VNOriginatingRequestSpecifierProviding> {
    long long  _direction;
    NSUUID * _faceObservationUUID;
    VNPixelBufferObservation * _gazeMask;
    float  _horizontalAngle;
    struct CGPoint { 
        double x; 
        double y; 
    }  _location;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _locationBounds;
    NSUUID * _lookedAtFaceObservationUUID;
    VNRequestSpecifier * _originatingRequestSpecifier;
}

@property (nonatomic, readonly) long long direction;
@property (nonatomic, readonly) NSUUID *faceObservationUUID;
@property (nonatomic, readonly) VNPixelBufferObservation *gazeMask;
@property (nonatomic, readonly) bool hasLocation;
@property (nonatomic, readonly) float horizontalAngle;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } location;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } locationBounds;
@property (nonatomic, readonly) NSUUID *lookedAtFaceObservationUUID;
@property (readonly) VNRequestSpecifier *originatingRequestSpecifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (long long)direction;
- (void)encodeWithCoder:(id)arg1;
- (id)faceObservationUUID;
- (id)gazeMask;
- (bool)hasLocation;
- (unsigned long long)hash;
- (float)horizontalAngle;
- (id)initWithCoder:(id)arg1;
- (id)initWithFaceObservationUUID:(id)arg1 direction:(long long)arg2 location:(struct CGPoint { double x1; double x2; })arg3 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 horizontalAngle:(float)arg5 lookedAtFaceObservationUUID:(id)arg6 gazeMask:(id)arg7 originatingRequestSpecifier:(id)arg8;
- (bool)isEqual:(id)arg1;
- (struct CGPoint { double x1; double x2; })location;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })locationBounds;
- (struct CGPoint { double x1; double x2; })locationInTopLeftOrigin:(bool)arg1 orientation:(unsigned int)arg2;
- (id)lookedAtFaceObservationUUID;
- (id)originatingRequestSpecifier;

@end
