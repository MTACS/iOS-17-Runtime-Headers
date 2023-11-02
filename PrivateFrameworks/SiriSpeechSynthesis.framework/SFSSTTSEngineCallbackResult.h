
@interface SFSSTTSEngineCallbackResult : NSObject {
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
    id /* block */  _beginCallback;
    id /* block */  _chunkCallback;
    id /* block */  _endCallback;
    NSError * _error;
    struct vector<TTSSynthesizer::Marker, std::allocator<TTSSynthesizer::Marker>> { 
        struct Marker {} *__begin_; 
        struct Marker {} *__end_; 
        struct __compressed_pair<TTSSynthesizer::Marker *, std::allocator<TTSSynthesizer::Marker>> { 
            struct Marker {} *__value_; 
        } __end_cap_; 
    }  _marker;
    struct vector<unsigned char, std::allocator<unsigned char>> { 
        char *__begin_; 
        char *__end_; 
        struct __compressed_pair<unsigned char *, std::allocator<unsigned char>> { 
            char *__value_; 
        } __end_cap_; 
    }  _pcmDataBuffer;
}

@property (nonatomic) struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; } asbd;
@property (nonatomic, copy) id /* block */ beginCallback;
@property (nonatomic, copy) id /* block */ chunkCallback;
@property (nonatomic, copy) id /* block */ endCallback;
@property (nonatomic, readonly) NSError *error;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; })asbd;
- (id /* block */)beginCallback;
- (id /* block */)chunkCallback;
- (id /* block */)endCallback;
- (id)error;
- (id)initWithBeginCallback:(id /* block */)arg1 chunkCallback:(id /* block */)arg2 endCallback:(id /* block */)arg3;
- (void*)marker;
- (id)pcmData;
- (void*)pcmDataBuffer;
- (void)setAsbd:(struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; })arg1;
- (void)setBeginCallback:(id /* block */)arg1;
- (void)setChunkCallback:(id /* block */)arg1;
- (void)setEndCallback:(id /* block */)arg1;
- (int)synthesisCallback:(int)arg1;

@end
