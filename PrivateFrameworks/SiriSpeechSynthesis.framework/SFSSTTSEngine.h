
@interface SFSSTTSEngine : NSObject {
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
    SFSSTTSEngineCallbackResult * _callbackResult;
    struct unique_ptr<TTSSynthesizer, std::default_delete<TTSSynthesizer>> { 
        struct __compressed_pair<TTSSynthesizer *, std::default_delete<TTSSynthesizer>> { 
            struct TTSSynthesizer {} *__value_; 
        } __ptr_; 
    }  _synthesizer;
    NSString * _voicePath;
}

@property (nonatomic, readonly) struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; } asbd;
@property (nonatomic, retain) SFSSTTSEngineCallbackResult *callbackResult;
@property (nonatomic, retain) NSString *voicePath;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; })asbd;
- (id)callbackResult;
- (struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; })constructPcmAsbdWithSampleRate:(float)arg1;
- (void)dealloc;
- (id)initWithVoicePath:(id)arg1 resourcePath:(id)arg2;
- (id)loadResourceAtPath:(id)arg1 mimeType:(id)arg2;
- (void)preheat;
- (void)setCallbackResult:(id)arg1;
- (void)setVoicePath:(id)arg1;
- (void)stopSynthesis;
- (id)synthesizeText:(id)arg1 loggable:(bool)arg2 synthesisBegin:(id /* block */)arg3 synthesisChunk:(id /* block */)arg4 synthesisEnd:(id /* block */)arg5;
- (id)voicePath;

@end
