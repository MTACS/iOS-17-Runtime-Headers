
@interface LKCGImageCodingProxy : CACodingProxy {
    struct CGImage { } * _image;
}

+ (bool)supportsSecureCoding;

- (void)dealloc;
- (id)decodedObject;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithObject:(id)arg1;

@end
