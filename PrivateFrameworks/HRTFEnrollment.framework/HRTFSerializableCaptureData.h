
@interface HRTFSerializableCaptureData : NSObject <NSSecureCoding> {
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[3]; 
    }  _colorIntrinsics;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[3]; 
    }  _depthIntrinsics;
    struct CGPoint { 
        double x; 
        double y; 
    }  _distortionCenter;
    NSData * _distortionLookupTable;
    struct CGSize { 
        double width; 
        double height; 
    }  _referenceDimensions;
    _SerializableCVPixelBuffer * _serializableColorPixelBuffer;
    _SerializableCVPixelBuffer * _serializableDepthPixelBuffer;
    double  _timestamp;
}

@property (nonatomic, readonly) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; } colorIntrinsics;
@property (nonatomic, readonly) struct __CVBuffer { }*colorPixelBuffer;
@property (nonatomic, readonly) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; } depthIntrinsics;
@property (nonatomic, readonly) struct __CVBuffer { }*depthPixelBuffer;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } distortionCenter;
@property (nonatomic, readonly) NSData *distortionLookupTable;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } referenceDimensions;
@property (nonatomic, readonly) double timestamp;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })colorIntrinsics;
- (struct __CVBuffer { }*)colorPixelBuffer;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })depthIntrinsics;
- (struct __CVBuffer { }*)depthPixelBuffer;
- (struct CGPoint { double x1; double x2; })distortionCenter;
- (id)distortionLookupTable;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithColorPixelBuffer:(struct __CVBuffer { }*)arg1 depthPixelBuffer:(struct __CVBuffer { }*)arg2 colorIntrinsics:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })arg3 depthIntrinsics:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })arg4 distortionLookupTable:(id)arg5 referenceDimensions:(struct CGSize { double x1; double x2; })arg6 distortionCenter:(struct CGPoint { double x1; double x2; })arg7 timestamp:(double)arg8;
- (struct CGSize { double x1; double x2; })referenceDimensions;
- (double)timestamp;

@end
