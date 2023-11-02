
@interface CSSelectiveChannelAudioFileWriter : NSObject <CSAudioFileWriter> {
    NSURL * _fileURL;
    unsigned int  _numberOfChannels;
    struct OpaqueExtAudioFile { } * fFile;
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
    }  inASBD;
    bool  isWriting;
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
    }  outASBD;
    NSArray * selectedChannelList;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSURL *fileURL;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned int numberOfChannels;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)addSamples:(const void*)arg1 numSamples:(long long)arg2;
- (void)dealloc;
- (bool)endAudio;
- (id)fileURL;
- (id)initWithURL:(id)arg1 inputFormat:(struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; })arg2 outputFormat:(struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; })arg3 channelBitset:(unsigned long long)arg4;
- (unsigned int)numberOfChannels;

@end
