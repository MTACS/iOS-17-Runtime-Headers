
@interface VNRecognizedPoint : VNDetectedPoint {
    NSString * _identifier;
}

@property (readonly, copy) NSString *identifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithLocation:(struct CGPoint { double x1; double x2; })arg1 confidence:(float)arg2 identifier:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)transformedWith:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;

@end
