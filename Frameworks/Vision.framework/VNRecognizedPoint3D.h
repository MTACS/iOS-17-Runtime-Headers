
@interface VNRecognizedPoint3D : VNPoint3D {
    NSString * _identifier;
}

@property (readonly, copy) NSString *identifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithPosition:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1 identifier:(id)arg2;
- (bool)isEqual:(id)arg1;

@end
