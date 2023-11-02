
@interface HMICameraVideoFrame : HMFObject <HMFLogging, NSSecureCoding> {
    unsigned long long  _fragmentSequenceNumber;
    unsigned long long  _frameId;
    NSData * _jpegData;
    NSArray * _motionDetections;
    struct __CVBuffer { } * _pixelBuffer;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _presentationTime;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long fragmentSequenceNumber;
@property (readonly) unsigned long long frameId;
@property (readonly) unsigned long long hash;
@property (readonly) NSData *jpegData;
@property (retain) NSArray *motionDetections;
@property (readonly) struct __CVBuffer { }*pixelBuffer;
@property (readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } presentationTime;
@property (readonly) struct CGSize { double x1; double x2; } size;
@property (readonly) Class superclass;

+ (id)logCategory;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)fragmentSequenceNumber;
- (unsigned long long)frameId;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithJPEGData:(id)arg1 presentationTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 frameId:(unsigned long long)arg3 fragmentSequenceNumber:(unsigned long long)arg4 size:(struct CGSize { double x1; double x2; })arg5;
- (id)initWithPixelBuffer:(struct __CVBuffer { }*)arg1;
- (id)initWithPixelBuffer:(struct __CVBuffer { }*)arg1 presentationTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 frameId:(unsigned long long)arg3 fragmentSequenceNumber:(unsigned long long)arg4;
- (bool)isEqual:(id)arg1;
- (id)jpegData;
- (id)motionDetections;
- (struct __CVBuffer { }*)pixelBuffer;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })presentationTime;
- (void)setMotionDetections:(id)arg1;
- (struct CGSize { double x1; double x2; })size;

@end
