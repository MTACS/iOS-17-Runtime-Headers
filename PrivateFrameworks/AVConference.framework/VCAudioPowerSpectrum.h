
@interface VCAudioPowerSpectrum : NSObject <VCAudioPowerSpectrumProtocol> {
    struct _VCAudioPowerSpectrumRealtimeContext { 
        bool powerSpectrumConfigured; 
        struct AudioStreamBasicDescription { 
            double mSampleRate; 
            unsigned int mFormatID; 
            unsigned int mFormatFlags; 
            unsigned int mBytesPerPacket; 
            unsigned int mFramesPerPacket; 
            unsigned int mBytesPerFrame; 
            unsigned int mChannelsPerFrame; 
            unsigned int mBitsPerChannel; 
            unsigned int mReserved; 
        } format; 
        struct _VCRange { 
            float min; 
            float max; 
        } frequencyRange; 
        unsigned int sampleRate; 
        unsigned int fftSampleCount; 
        float *hanningWindow; 
        unsigned int *octave2IndexTable6; 
        unsigned int octave2IndexTable6Count; 
        unsigned int outputBinCount; 
        float *lerpIdxs; 
        float fftNormFactor; 
        long long streamToken; 
        float averageLevel; 
        struct opaqueVCAudioBufferList {} *sampleBuffer; 
        struct _VCAudioPowerSpectrumChannel {} *channels; 
        void *sinkContext; 
        int (*sinkCallback)(); 
    }  _realtimeContext;
    long long  _streamToken;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) struct _VCRange { float x1; float x2; } frequencyRange;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) void*realtimeContext;
@property (nonatomic, readonly) long long streamToken;
@property (readonly) Class superclass;

- (void)dealloc;
- (id)description;
- (struct _VCRange { float x1; float x2; })frequencyRange;
- (id)initWithBinCount:(unsigned int)arg1 streamToken:(long long)arg2 sinkContext:(void*)arg3 sinkCallback:(int (*)arg4;
- (void*)realtimeContext;
- (long long)streamToken;

@end
