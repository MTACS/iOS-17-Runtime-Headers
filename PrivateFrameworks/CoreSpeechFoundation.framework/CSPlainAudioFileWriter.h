
@interface CSPlainAudioFileWriter : NSObject <CSAudioFileWriter> {
    NSURL * _fileURL;
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
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSURL *fileURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)saveAudioChunck:(id)arg1 toURL:(id)arg2;

- (void).cxx_destruct;
- (void)addContextKey:(id)arg1 fromMetaFile:(id)arg2;
- (void)addContextKey:(id)arg1 withContext:(id)arg2;
- (bool)addSamples:(const void*)arg1 numSamples:(long long)arg2;
- (void)createAcousticMetaFileForContext:(id)arg1 withContext:(id)arg2;
- (void)dealloc;
- (bool)endAudio;
- (id)fileURL;
- (id)initWithFilepath:(id)arg1;
- (id)initWithURL:(id)arg1;
- (id)initWithURL:(id)arg1 inputFormat:(struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; })arg2 outputFormat:(struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; })arg3;

@end
