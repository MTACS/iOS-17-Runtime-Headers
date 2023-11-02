
@interface JFXVideoEncoderInterface : NSObject {
    struct opaqueCMSampleBuffer { } * _currentBuffer;
    struct HEVCLosslessEncoder { int x1; int x2; double x3; struct OpaqueVTCompressionSession {} *x4; struct EncoderConfig { int x_5_1_1; int x_5_1_2; int x_5_1_3; int x_5_1_4; double x_5_1_5; bool x_5_1_6; bool x_5_1_7; bool x_5_1_8; bool x_5_1_9; } x5; struct { long long x_6_1_1; int x_6_1_2; unsigned int x_6_1_3; long long x_6_1_4; } x6; unsigned int x7; unsigned int x8; unsigned int x9; } * m_encoder;
    bool  m_encoderInitialized;
    double  m_expectedFrameRate;
    struct __CVBuffer { } * m_preparedPixelBuffer;
    struct promise<opaqueCMSampleBuffer *> { 
        void *__state_; 
    }  m_sampleBufferPromise;
}

@property struct opaqueCMSampleBuffer { }*currentBuffer;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)closeEncoder;
- (struct opaqueCMSampleBuffer { }*)currentBuffer;
- (void)dealloc;
- (struct opaqueCMSampleBuffer { }*)encodeFrame:(struct __CVBuffer { }*)arg1 presentationTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 frameProperties:(struct __CFDictionary { }*)arg3;
- (id)init;
- (id)initWithExpectedFrameRate:(double)arg1;
- (void)setCurrentBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (void)setupEncoderWithWidth:(int)arg1 andHeight:(int)arg2 imageFormat:(int)arg3 andFramerate:(double)arg4;
- (void)skipFrame;
- (void)writeSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;

@end
