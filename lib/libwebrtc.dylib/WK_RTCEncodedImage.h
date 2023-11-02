
@interface WK_RTCEncodedImage : NSObject {
    NSData * _buffer;
    long long  _captureTimeMs;
    bool  _completeFrame;
    unsigned long long  _contentType;
    unsigned long long  _duration;
    long long  _encodeFinishMs;
    long long  _encodeStartMs;
    int  _encodedHeight;
    int  _encodedWidth;
    unsigned char  _flags;
    unsigned long long  _frameType;
    long long  _ntpTimeMs;
    NSNumber * _qp;
    long long  _rotation;
    long long  _timeStamp;
}

@property (nonatomic, retain) NSData *buffer;
@property (nonatomic) long long captureTimeMs;
@property (nonatomic) bool completeFrame;
@property (nonatomic) unsigned long long contentType;
@property (nonatomic) unsigned long long duration;
@property (nonatomic) long long encodeFinishMs;
@property (nonatomic) long long encodeStartMs;
@property (nonatomic) int encodedHeight;
@property (nonatomic) int encodedWidth;
@property (nonatomic) unsigned char flags;
@property (nonatomic) unsigned long long frameType;
@property (nonatomic) long long ntpTimeMs;
@property (nonatomic, retain) NSNumber *qp;
@property (nonatomic) long long rotation;
@property (nonatomic) long long timeStamp;

- (void).cxx_destruct;
- (id)buffer;
- (long long)captureTimeMs;
- (bool)completeFrame;
- (unsigned long long)contentType;
- (unsigned long long)duration;
- (long long)encodeFinishMs;
- (long long)encodeStartMs;
- (struct scoped_refptr<webrtc::EncodedImageBufferInterface> { struct EncodedImageBufferInterface {} *x1; })encodedData;
- (int)encodedHeight;
- (int)encodedWidth;
- (unsigned char)flags;
- (unsigned long long)frameType;
- (id)initWithNativeEncodedImage:(const void*)arg1;
- (struct EncodedImage { unsigned int x1; unsigned int x2; long long x3; long long x4; int x5; int x6; unsigned char x7; int x8; struct VideoPlayoutDelay { int x_9_1_1; int x_9_1_2; } x9; struct Timing { unsigned char x_10_1_1; long long x_10_1_2; long long x_10_1_3; long long x_10_1_4; long long x_10_1_5; long long x_10_1_6; long long x_10_1_7; long long x_10_1_8; long long x_10_1_9; } x10; struct scoped_refptr<webrtc::EncodedImageBufferInterface> { struct EncodedImageBufferInterface {} *x_11_1_1; } x11; unsigned long long x12; unsigned int x13; struct optional<int> { bool x_14_1_1; union { int x_2_2_1; struct dummy_type { struct empty_struct { } x_2_3_1[4]; } x_2_2_2; } x_14_1_2; } x14; struct optional<webrtc::Timestamp> { bool x_15_1_1; union { struct Timestamp { long long x_1_3_1; } x_2_2_1; struct dummy_type { struct empty_struct { } x_2_3_1[8]; } x_2_2_2; } x_15_1_2; } x15; struct optional<int> { bool x_16_1_1; union { int x_2_2_1; struct dummy_type { struct empty_struct { } x_2_3_1[4]; } x_2_2_2; } x_16_1_2; } x16; struct optional<int> { bool x_17_1_1; union { int x_2_2_1; struct dummy_type { struct empty_struct { } x_2_3_1[4]; } x_2_2_2; } x_17_1_2; } x17; })nativeEncodedImage;
- (long long)ntpTimeMs;
- (id)qp;
- (long long)rotation;
- (void)setBuffer:(id)arg1;
- (void)setCaptureTimeMs:(long long)arg1;
- (void)setCompleteFrame:(bool)arg1;
- (void)setContentType:(unsigned long long)arg1;
- (void)setDuration:(unsigned long long)arg1;
- (void)setEncodeFinishMs:(long long)arg1;
- (void)setEncodeStartMs:(long long)arg1;
- (void)setEncodedData:(struct scoped_refptr<webrtc::EncodedImageBufferInterface> { struct EncodedImageBufferInterface {} *x1; })arg1;
- (void)setEncodedHeight:(int)arg1;
- (void)setEncodedWidth:(int)arg1;
- (void)setFlags:(unsigned char)arg1;
- (void)setFrameType:(unsigned long long)arg1;
- (void)setNtpTimeMs:(long long)arg1;
- (void)setQp:(id)arg1;
- (void)setRotation:(long long)arg1;
- (void)setTimeStamp:(long long)arg1;
- (long long)timeStamp;

@end
