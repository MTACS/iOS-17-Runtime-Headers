
@interface MADVideoRemoveBackgroundPreviewFrame : NSObject <NSSecureCoding> {
    struct CF<__CVBuffer *> { 
        struct __CVBuffer {} *value_; 
    }  _pixelBuffer;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _presentationTimeStamp;
    IOSurface * _surface;
}

@property (nonatomic, readonly) struct __CVBuffer { }*pixelBuffer;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } presentationTimeStamp;

+ (bool)supportsSecureCoding;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPresentationTimeStamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 surface:(id)arg2;
- (struct __CVBuffer { }*)pixelBuffer;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })presentationTimeStamp;

@end
