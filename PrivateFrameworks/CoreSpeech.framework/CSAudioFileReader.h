
@interface CSAudioFileReader : NSObject {
    NSObject<OS_dispatch_source> * _audioFeedTimer;
    double  _bufferDuration;
    <CSAudioFileReaderDelegate> * _delegate;
    struct OpaqueExtAudioFile { } * _fFile;
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
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic) <CSAudioFileReaderDelegate> *delegate;

- (void).cxx_destruct;
- (void)_readAudioBufferAndFeed;
- (void)close;
- (void)dealloc;
- (id)delegate;
- (id)initWithURL:(id)arg1;
- (bool)prepareRecording:(id)arg1;
- (id)readSamplesFromChannelIdx:(unsigned int)arg1;
- (void)setDelegate:(id)arg1;
- (bool)setRecordBufferDuration:(double)arg1;
- (bool)startRecording;
- (void)stopRecording;

@end
