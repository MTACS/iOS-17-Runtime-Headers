
@interface VideoEncoderInterface : NSObject <EncoderConfigDelegate> {
    bool  _customEncoderConfig;
    unsigned int  _lastEncodingInfoFlags;
    unsigned int  _lastEncodingStatus;
    long long  _pendigFrames;
    MOVStreamEncoderConfig * m_config;
    <VideoEncoderInterfaceDelegate> * m_delegate;
    bool  m_enableAVEHighPerformanceProfile;
    struct HEVCLosslessEncoder { bool x1; id x2; int x3; int x4; double x5; struct OpaqueVTCompressionSession {} *x6; struct EncoderConfig { int x_7_1_1; int x_7_1_2; int x_7_1_3; int x_7_1_4; double x_7_1_5; bool x_7_1_6; bool x_7_1_7; bool x_7_1_8; bool x_7_1_9; bool x_7_1_10; int x_7_1_11; } x7; struct { long long x_8_1_1; int x_8_1_2; unsigned int x_8_1_3; long long x_8_1_4; } x8; unsigned int x9; unsigned int x10; unsigned int x11; bool x12; bool x13; } * m_encoder;
    bool  m_encoderInitialized;
    NSObject<OS_dispatch_queue> * m_encodingQueue;
    double  m_expectedFrameRate;
    bool  m_firstFrameReceived;
    int  m_qpValue;
    NSString * m_stream;
}

@property bool customEncoderConfig;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) bool frameReorderingEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned int lastEncodingInfoFlags;
@property (readonly) unsigned int lastEncodingStatus;
@property long long pendigFrames;
@property (readonly) Class superclass;

+ (struct __CVBuffer { }*)createHEVCCompatiblePixelBuffer:(struct __CVBuffer { }*)arg1;

- (void).cxx_destruct;
- (void)closeEncoder;
- (void)closeEncoderInDispatchGroup:(id)arg1;
- (unsigned int)codecTypeOverride;
- (bool)configureSessionOverride:(struct OpaqueVTCompressionSession { }*)arg1;
- (bool)customEncoderConfig;
- (void)dealloc;
- (void)encodeFrame:(struct __CVBuffer { }*)arg1 pst:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 frameProperties:(struct __CFDictionary { }*)arg3 metadata:(id)arg4;
- (bool)frameReorderingEnabled;
- (id)init;
- (id)initForStream:(id)arg1 configuration:(id)arg2 delegate:(id)arg3;
- (id)initWithExpectedFrameRate:(double)arg1 forStream:(id)arg2 delegate:(id)arg3 enableAVEHighPerformanceProfile:(bool)arg4;
- (unsigned int)lastEncodingInfoFlags;
- (unsigned int)lastEncodingStatus;
- (id)overrideVideoEncoderSpecification;
- (long long)pendigFrames;
- (void)processFrame:(struct __CVBuffer { }*)arg1 pst:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 frameProperties:(struct __CFDictionary { }*)arg3 metadata:(id)arg4;
- (void)setCustomEncoderConfig:(bool)arg1;
- (void)setPendigFrames:(long long)arg1;
- (void)setupEncoderWithWidth:(int)arg1 andHeight:(int)arg2 imageFormat:(int)arg3 formatDescription:(struct opaqueCMFormatDescription { }*)arg4 andFramerate:(double)arg5;
- (void)skipFrameWithStatus:(int)arg1 andFlags:(unsigned int)arg2;
- (void)useQPEncoding:(int)arg1;
- (void)writeSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 pts:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 metadata:(id)arg3 withStatus:(int)arg4 andFlags:(unsigned int)arg5;

@end
