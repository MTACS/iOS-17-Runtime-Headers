
@interface CSAudioDecoder : NSObject {
    struct OpaqueAudioConverter { } * _decoder;
    <CSAudioDecoderDelegate> * _delegate;
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
    }  _inASBD;
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
    }  _outASBD;
}

@property <CSAudioDecoderDelegate> *delegate;

- (void).cxx_destruct;
- (void)addPackets:(id)arg1 audioStreamHandleId:(unsigned long long)arg2 remoteVAD:(id)arg3 timestamp:(unsigned long long)arg4 arrivalTimestampToAudioRecorder:(unsigned long long)arg5 wasBuffered:(bool)arg6 receivedNumChannels:(unsigned int)arg7;
- (id)delegate;
- (id)initWithInASBD:(struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; })arg1 outASBD:(struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; })arg2;
- (void)setDelegate:(id)arg1;

@end
