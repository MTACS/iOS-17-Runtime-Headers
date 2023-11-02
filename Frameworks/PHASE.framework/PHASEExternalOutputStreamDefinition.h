
@interface PHASEExternalOutputStreamDefinition : NSObject {
    unsigned int  _audioSessionToken;
    AVAudioFormat * _format;
    unsigned int  _maximumFramesToRender;
    PHASEExternalStreamCollection * _streamCollection;
    unsigned long long  _streamIndex;
    long long  _streamType;
}

@property (nonatomic, readonly) unsigned int audioSessionToken;
@property (nonatomic, readonly) AVAudioFormat *format;
@property (nonatomic, readonly) unsigned int maximumFramesToRender;
@property (nonatomic, readonly) PHASEExternalStreamCollection *streamCollection;
@property (nonatomic, readonly) unsigned long long streamIndex;
@property (nonatomic, readonly) long long streamType;

+ (id)new;

- (void).cxx_destruct;
- (unsigned int)audioSessionToken;
- (id)description;
- (id)format;
- (id)init;
- (id)initWithStreamCollection:(id)arg1 index:(unsigned long long)arg2 format:(id)arg3 maximumFramesToRender:(unsigned int)arg4 audioSessionToken:(unsigned int)arg5;
- (id)initWithStreamType:(long long)arg1 format:(id)arg2 maximumFramesToRender:(unsigned int)arg3;
- (id)initWithStreamType:(long long)arg1 format:(id)arg2 maximumFramesToRender:(unsigned int)arg3 audioSessionToken:(unsigned int)arg4;
- (unsigned int)maximumFramesToRender;
- (void)setFormat:(id)arg1;
- (void)setMaximumFramesToRender:(unsigned int)arg1;
- (id)streamCollection;
- (unsigned long long)streamIndex;
- (long long)streamType;

@end
