
@interface WK_RTCVideoFrame : NSObject {
    <RTCVideoFrameBuffer> * _buffer;
    unsigned long long  _duration;
    long long  _rotation;
    long long  _timeStampNs;
    long long  timeStamp;
}

@property (nonatomic, readonly) <RTCVideoFrameBuffer> *buffer;
@property (nonatomic) unsigned long long duration;
@property (nonatomic, readonly) int height;
@property (nonatomic, readonly) long long rotation;
@property (nonatomic) long long timeStamp;
@property (nonatomic, readonly) long long timeStampNs;
@property (nonatomic, readonly) int width;

- (void).cxx_destruct;
- (id)buffer;
- (unsigned long long)duration;
- (int)height;
- (id)initWithBuffer:(id)arg1 rotation:(long long)arg2 timeStampNs:(long long)arg3;
- (id)initWithPixelBuffer:(struct __CVBuffer { }*)arg1 rotation:(long long)arg2 timeStampNs:(long long)arg3;
- (id)initWithPixelBuffer:(struct __CVBuffer { }*)arg1 scaledWidth:(int)arg2 scaledHeight:(int)arg3 cropWidth:(int)arg4 cropHeight:(int)arg5 cropX:(int)arg6 cropY:(int)arg7 rotation:(long long)arg8 timeStampNs:(long long)arg9;
- (id)newI420VideoFrame;
- (long long)rotation;
- (void)setDuration:(unsigned long long)arg1;
- (void)setTimeStamp:(long long)arg1;
- (long long)timeStamp;
- (long long)timeStampNs;
- (int)width;

@end
