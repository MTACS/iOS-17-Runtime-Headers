
@interface VGMLImageIOData : VGMLIOData <NSSecureCoding> {
    struct __CVBuffer { } * _pixelBuffer;
}

+ (bool)supportsSecureCoding;

- (struct __CVBuffer { }*)cvPixelBufferRef;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCVPixelBufferRef:(struct __CVBuffer { }*)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (struct __CVBuffer { }*)resizeToWidth:(unsigned long long)arg1 height:(unsigned long long)arg2;

@end
