
@interface SHAudioConverter : NSObject {
    AVAudioConverter * _converter;
}

@property (nonatomic, retain) AVAudioConverter *converter;

- (void).cxx_destruct;
- (id)audioConverterWithInputFormat:(id)arg1 outputFormat:(id)arg2;
- (id)converter;
- (void)setConverter:(id)arg1;
- (id)supportedPCMBufferFromBuffer:(id)arg1 error:(id*)arg2;

@end
