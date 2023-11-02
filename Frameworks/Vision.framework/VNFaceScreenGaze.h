
@interface VNFaceScreenGaze : NSObject <NSCopying, NSSecureCoding, VNOriginatingRequestSpecifierProviding> {
    VNRequestSpecifier * _originatingRequestSpecifier;
    struct CGPoint { 
        double x; 
        double y; 
    }  _screenGaze;
}

@property (readonly) VNRequestSpecifier *originatingRequestSpecifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)originatingRequestSpecifier;
- (struct CGPoint { double x1; double x2; })screenGazeRawOutputInCentimeters;

@end
