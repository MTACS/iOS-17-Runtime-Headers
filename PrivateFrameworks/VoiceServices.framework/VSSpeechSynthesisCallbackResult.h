
@interface VSSpeechSynthesisCallbackResult : NSObject {
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
    id /* block */  _callback;
    NSError * _error;
    bool  _hasAlignmentStall;
    bool  _hasAudioClick;
    unsigned long long  _lastUTF16Offset;
    unsigned long long  _lastUTF8Offset;
    struct vector<TTSSynthesizer::Marker, std::allocator<TTSSynthesizer::Marker>> { 
        struct Marker {} *__begin_; 
        struct Marker {} *__end_; 
        struct __compressed_pair<TTSSynthesizer::Marker *, std::allocator<TTSSynthesizer::Marker>> { 
            struct Marker {} *__value_; 
        } __end_cap_; 
    }  _markers;
    bool  _neuralDidFallback;
    unsigned long long  _numOfPromptsTriggered;
    struct vector<std::string, std::allocator<std::string>> { 
        void *__begin_; 
        void *__end_; 
        struct __compressed_pair<std::string *, std::allocator<std::string>> { 
            void *__value_; 
        } __end_cap_; 
    }  _phonemeBuffer;
    struct vector<unsigned char, std::allocator<unsigned char>> { 
        char *__begin_; 
        char *__end_; 
        struct __compressed_pair<unsigned char *, std::allocator<unsigned char>> { 
            char *__value_; 
        } __end_cap_; 
    }  _samples;
    unsigned long long  _samplesProcessed;
    long long  _state;
    long long  _stopMark;
    NSString * _text;
    NSMutableArray * _wordTimings;
}

@property (nonatomic) struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; } asbd;
@property (nonatomic, copy) id /* block */ callback;
@property (nonatomic, retain) NSError *error;
@property (nonatomic) bool hasAlignmentStall;
@property (nonatomic) bool hasAudioClick;
@property (nonatomic) unsigned long long lastUTF16Offset;
@property (nonatomic) unsigned long long lastUTF8Offset;
@property (nonatomic) bool neuralDidFallback;
@property (nonatomic) unsigned long long numOfPromptsTriggered;
@property (nonatomic) unsigned long long samplesProcessed;
@property (nonatomic) long long state;
@property (nonatomic) long long stopMark;
@property (nonatomic, retain) NSString *text;
@property (nonatomic, retain) NSMutableArray *wordTimings;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; })asbd;
- (id /* block */)callback;
- (id)error;
- (bool)hasAlignmentStall;
- (bool)hasAudioClick;
- (id)initWithCallback:(id /* block */)arg1;
- (unsigned long long)lastUTF16Offset;
- (unsigned long long)lastUTF8Offset;
- (void*)markerBuffer;
- (id)mutablePCMData;
- (bool)neuralDidFallback;
- (unsigned long long)numOfPromptsTriggered;
- (id)pcmData;
- (void*)phonemeBuffer;
- (id)phonemes;
- (void)processMarkerBuffer;
- (void*)sampleBuffer;
- (unsigned long long)samplesProcessed;
- (void)setAsbd:(struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; })arg1;
- (void)setCallback:(id /* block */)arg1;
- (void)setError:(id)arg1;
- (void)setHasAlignmentStall:(bool)arg1;
- (void)setHasAudioClick:(bool)arg1;
- (void)setLastUTF16Offset:(unsigned long long)arg1;
- (void)setLastUTF8Offset:(unsigned long long)arg1;
- (void)setNeuralDidFallback:(bool)arg1;
- (void)setNumOfPromptsTriggered:(unsigned long long)arg1;
- (void)setSamplesProcessed:(unsigned long long)arg1;
- (void)setState:(long long)arg1;
- (void)setStopMark:(long long)arg1;
- (void)setText:(id)arg1;
- (void)setWordTimings:(id)arg1;
- (long long)state;
- (long long)stopMark;
- (int)synthesisCallback:(int)arg1;
- (id)text;
- (unsigned long long)utf16OffsetFromUTF8:(unsigned long long)arg1;
- (unsigned long long)utf8BytesForChar:(unsigned short)arg1;
- (id)wordTimingInfos;
- (id)wordTimings;

@end
