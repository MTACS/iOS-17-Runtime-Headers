
@interface VSOpusEncoder : NSObject {
    AVAudioConverter * _converter;
    id /* block */  _errorHandler;
    AVAudioFormat * _fromFormat;
    id /* block */  _opusDataHandler;
    long long  _opusDataOffset;
    AVAudioCompressedBuffer * _outputBuffer;
    AVAudioFormat * _toFormat;
}

@property (nonatomic, retain) AVAudioConverter *converter;
@property (nonatomic, copy) id /* block */ errorHandler;
@property (nonatomic, retain) AVAudioFormat *fromFormat;
@property (nonatomic, copy) id /* block */ opusDataHandler;
@property (nonatomic) long long opusDataOffset;
@property (nonatomic, retain) AVAudioCompressedBuffer *outputBuffer;
@property (nonatomic, retain) AVAudioFormat *toFormat;

- (void).cxx_destruct;
- (void)beginEncoding;
- (id)converter;
- (void)encodeChunk:(id)arg1;
- (void)endEncoding;
- (id /* block */)errorHandler;
- (id)fromFormat;
- (id)initWithSourceASBD:(struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; })arg1;
- (id /* block */)opusDataHandler;
- (long long)opusDataOffset;
- (id)outputBuffer;
- (void)setConverter:(id)arg1;
- (void)setErrorHandler:(id /* block */)arg1;
- (void)setFromFormat:(id)arg1;
- (void)setOpusDataHandler:(id /* block */)arg1;
- (void)setOpusDataOffset:(long long)arg1;
- (void)setOutputBuffer:(id)arg1;
- (void)setToFormat:(id)arg1;
- (id)toFormat;

@end
