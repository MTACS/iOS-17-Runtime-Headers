
@interface PHASEExternalInputStreamDefinition : NSObject {
    unsigned int  _audioSessionToken;
    AVAudioFormat * _format;
    unsigned int  _maximumFrames;
    long long  _streamType;
}

@property (nonatomic, readonly) unsigned int audioSessionToken;
@property (nonatomic, readonly) AVAudioFormat *format;
@property (nonatomic, readonly) unsigned int maximumFrames;
@property (nonatomic, readonly) long long streamType;

+ (id)new;

- (void).cxx_destruct;
- (unsigned int)audioSessionToken;
- (id)description;
- (id)format;
- (id)init;
- (id)initWithStreamType:(long long)arg1 format:(id)arg2 maximumFrames:(unsigned int)arg3;
- (id)initWithStreamType:(long long)arg1 format:(id)arg2 maximumFrames:(unsigned int)arg3 audioSessionToken:(unsigned int)arg4;
- (unsigned int)maximumFrames;
- (void)setFormat:(id)arg1;
- (void)setMaximumFrames:(unsigned int)arg1;
- (long long)streamType;

@end
