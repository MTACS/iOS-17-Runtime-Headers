
@interface HMIVideoFrame : HMFObject <HMFLogging, HMIVideoEvent, NSSecureCoding> {
    NSData * _data;
    struct __CVBuffer { } * _pixelBuffer;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _presentationTimeStamp;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
    long long  _store;
}

@property (readonly) NSData *data;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) struct __CVBuffer { }*pixelBuffer;
@property (readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } presentationTimeStamp;
@property (readonly) struct CGSize { double x1; double x2; } size;
@property (readonly) Class superclass;
@property (readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } time;

+ (id)logCategory;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)base64Encoded;
- (id)compressedFrameWithScale:(double)arg1 quality:(double)arg2 error:(id*)arg3;
- (id)data;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithJPEGData:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 presentationTimeStamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3;
- (id)initWithPixelBuffer:(struct __CVBuffer { }*)arg1 presentationTimeStamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (id)initWithSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (struct __CVBuffer { }*)pixelBuffer;
- (id)pixelBufferFrameWithError:(id*)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })presentationTimeStamp;
- (void)printWithHeight:(unsigned long long)arg1;
- (void)printWithScale:(double)arg1;
- (id)redactedCopy;
- (struct CGSize { double x1; double x2; })size;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })time;

@end
