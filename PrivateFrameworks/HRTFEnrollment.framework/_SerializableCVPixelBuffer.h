
@interface _SerializableCVPixelBuffer : NSObject <NSSecureCoding> {
    struct __CVBuffer { } * _pixelBuffer;
}

@property (nonatomic, readonly) struct __CVBuffer { }*pixelBuffer;

+ (bool)supportsSecureCoding;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCVPixelBufferRef:(struct __CVBuffer { }*)arg1;
- (id)initWithCoder:(id)arg1;
- (struct __CVBuffer { }*)pixelBuffer;

@end
