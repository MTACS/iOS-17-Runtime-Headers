
@interface VSSpeechEngine : NSObject {
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
    VSSpeechSynthesisCallbackResult * _currentCallbackResult;
    unsigned long long  _pcmBufferSize;
    float  _pitch;
    long long  _powerProfile;
    float  _rate;
    NSLock * _synthesisLock;
    void * _synthesizer;
    NSString * _voicePath;
    float  _volume;
}

@property (nonatomic, readonly) struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; } asbd;
@property (nonatomic, retain) VSSpeechSynthesisCallbackResult *currentCallbackResult;
@property (nonatomic) unsigned long long pcmBufferSize;
@property (nonatomic) float pitch;
@property (nonatomic) long long powerProfile;
@property (nonatomic) float rate;
@property (nonatomic, retain) NSLock *synthesisLock;
@property (nonatomic) void*synthesizer;
@property (nonatomic, retain) NSString *voicePath;
@property (nonatomic) float volume;

+ (long long)engineCurrentCompatibility;
+ (long long)engineMinimumCompatibility;
+ (bool)hasPhaticResponses:(id)arg1;
+ (bool)isUserCancelError:(id)arg1;
+ (id)mimeForFileExtension:(id)arg1;

- (void).cxx_destruct;
- (struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; })asbd;
- (id)currentCallbackResult;
- (void)dealloc;
- (id)initWithVoicePath:(id)arg1 resourcePath:(id)arg2;
- (bool)initializeWithResourcePath:(id)arg1;
- (id)loadResource:(id)arg1 error:(id*)arg2;
- (id)loadResourceAtPath:(id)arg1 mimeType:(id)arg2 error:(id*)arg3;
- (unsigned long long)pcmBufferSize;
- (float)pitch;
- (long long)powerProfile;
- (void)preheat;
- (float)rate;
- (void)setCurrentCallbackResult:(id)arg1;
- (void)setPcmBufferSize:(unsigned long long)arg1;
- (void)setPitch:(float)arg1;
- (void)setPowerProfile:(long long)arg1;
- (void)setRate:(float)arg1;
- (void)setSynthesisLock:(id)arg1;
- (void)setSynthesizer:(void*)arg1;
- (void)setVoicePath:(id)arg1;
- (void)setVolume:(float)arg1;
- (void)stopAtMarker:(long long)arg1;
- (id)synthesisLock;
- (id)synthesizeText:(id)arg1 loggable:(bool)arg2 callback:(id /* block */)arg3;
- (void*)synthesizer;
- (void)unloadResource:(id)arg1;
- (id)voicePath;
- (float)volume;

@end
