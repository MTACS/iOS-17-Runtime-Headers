
@interface VCAudioCaptionsBufferInfo : NSObject {
    struct opaqueVCAudioBufferList { } * _buffer;
    unsigned int  _countOfLowPrioritySamples;
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
    }  _format;
    unsigned char  _priority;
    long long  _token;
}

@property (nonatomic, readonly) unsigned int countOfLowPrioritySamples;
@property (nonatomic, readonly) struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; } format;
@property (nonatomic, readonly) unsigned char priority;
@property (nonatomic, readonly) long long token;

- (unsigned int)countOfLowPrioritySamples;
- (void)dealloc;
- (id)description;
- (struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; })format;
- (unsigned long long)hash;
- (id)initWithStreamToken:(long long)arg1 format:(struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; })arg2 bufferLength:(double)arg3;
- (bool)isEqual:(id)arg1;
- (unsigned char)priority;
- (long long)token;

@end
