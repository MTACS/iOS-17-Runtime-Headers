
@interface MADMLScalingResult : MADResult {
    struct CF<CGImage *> { 
        struct CGImage {} *value_; 
    }  _image;
    struct CF<__CVBuffer *> { 
        struct __CVBuffer {} *value_; 
    }  _pixelBuffer;
    IOSurface * _surface;
}

@property (nonatomic, readonly) struct CGImage { }*image;
@property (nonatomic, readonly) struct __CVBuffer { }*pixelBuffer;

+ (bool)supportsSecureCoding;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (struct CGImage { }*)image;
- (id)initWithCoder:(id)arg1;
- (id)initWithSurface:(id)arg1;
- (struct __CVBuffer { }*)pixelBuffer;

@end
