
@interface SiriTTSSynthesisEngine : NSObject {
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
    }  _asbd;
    NSLock * _lock;
    NSString * _resourcePath;
    void * _synthesizer;
    NSString * _tag;
    NSString * _voicePath;
}

@property (nonatomic) struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; } asbd;
@property (nonatomic, retain) NSLock *lock;
@property (nonatomic, readonly) NSString *resourcePath;
@property (nonatomic) void*synthesizer;
@property (nonatomic, retain) NSString *tag;
@property (nonatomic, readonly) NSString *voicePath;

+ (bool)hasPhaticResponsesWithVoicePath:(id)arg1;

- (void).cxx_destruct;
- (bool)_preheatWithError:(id*)arg1;
- (bool)_unlockedLoadResourceWithPath:(id)arg1 error:(id*)arg2;
- (bool)_unlockedSynthesize:(id)arg1 error:(id*)arg2;
- (void)_unlockedUnloadResource:(id)arg1;
- (struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; })asbd;
- (void)dealloc;
- (id)initWithVoicePath:(id)arg1 resourcePath:(id)arg2 error:(id*)arg3;
- (bool)loadResourceWithPath:(id)arg1 error:(id*)arg2;
- (id)lock;
- (bool)preheatWithError:(id*)arg1;
- (id)resourcePath;
- (void)setAsbd:(struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; })arg1;
- (void)setLock:(id)arg1;
- (void)setSynthesizer:(void*)arg1;
- (void)setTag:(id)arg1;
- (void)stopSynthesis;
- (bool)synthesize:(id)arg1 error:(id*)arg2;
- (void*)synthesizer;
- (id)tag;
- (void)unloadResource:(id)arg1;
- (id)voicePath;

@end
