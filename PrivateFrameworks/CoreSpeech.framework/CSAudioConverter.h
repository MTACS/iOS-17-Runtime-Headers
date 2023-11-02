
@interface CSAudioConverter : NSObject {
    NSMutableData * _bufferedLPCM;
    unsigned int  _convertAudioCapacity;
    unsigned int  _convertPacketCount;
    <CSAudioConverterDelegate> * _delegate;
    unsigned long long  _lastArrivalTimestampToAudioRecorder;
    unsigned long long  _lastTimestamp;
    struct OpaqueAudioConverter { } * _opusConverter;
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
    }  _opusOutASBD;
    float  _outPacketSizeInSec;
    unsigned int  _recordBasePacketsPerSecond;
}

@property <CSAudioConverterDelegate> *delegate;

+ (id)narrowBandOpusConverter;
+ (id)opusConverter;
+ (id)speexConverter;

- (void).cxx_destruct;
- (void)_configureAudioConverter:(struct OpaqueAudioConverter { }*)arg1;
- (void)_convertBufferedLPCM:(id)arg1 allowPartial:(bool)arg2 timestamp:(unsigned long long)arg3 arrivalTimestampToAudioRecorder:(unsigned long long)arg4;
- (void)addSamples:(id)arg1 timestamp:(unsigned long long)arg2 arrivalTimestampToAudioRecorder:(unsigned long long)arg3;
- (void)dealloc;
- (id)delegate;
- (void)flush;
- (id)initWithInASBD:(struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; })arg1 outASBD:(struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; })arg2;
- (void)reset;
- (void)setDelegate:(id)arg1;

@end
