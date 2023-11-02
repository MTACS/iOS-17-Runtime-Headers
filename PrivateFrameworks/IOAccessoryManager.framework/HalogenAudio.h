
@interface HalogenAudio : NSObject {
    struct OpaqueAudioComponentInstance { } * _audioComponentInst;
    int  _bitDepth;
    <HalogenAudioDelegate> * _halogenUnitDelegate;
    int  _inputFrameSizeInBytes;
    int  _nInputChannels;
    int  _nOutputChannels;
    int  _outputFrameSizeInBytes;
    int  _sampleRate;
}

@property struct OpaqueAudioComponentInstance { }*audioComponentInst;
@property int bitDepth;
@property (nonatomic, retain) <HalogenAudioDelegate> *halogenUnitDelegate;
@property int inputFrameSizeInBytes;
@property int nInputChannels;
@property int nOutputChannels;
@property int outputFrameSizeInBytes;
@property int sampleRate;

- (void)_deinitAudioInstance;
- (struct OpaqueAudioComponentInstance { }*)audioComponentInst;
- (int)bitDepth;
- (void)dealloc;
- (struct OpaqueAudioComponentInstance { }*)getAudioComponentInstance;
- (id)halogenUnitDelegate;
- (id)initAudioWithParameters:(id)arg1 nInputChannels:(int)arg2 nOutputChannels:(int)arg3 sampleRate:(int)arg4 bitDepth:(int)arg5 inputFrameSizeInBytes:(int)arg6 outputFrameSizeInBytes:(int)arg7;
- (int)inputFrameSizeInBytes;
- (int)nInputChannels;
- (int)nOutputChannels;
- (int)outputFrameSizeInBytes;
- (void)releaseAudioUnitInstance;
- (int)sampleRate;
- (void)setAudioComponentInst:(struct OpaqueAudioComponentInstance { }*)arg1;
- (void)setBitDepth:(int)arg1;
- (void)setHalogenUnitDelegate:(id)arg1;
- (void)setInputFrameSizeInBytes:(int)arg1;
- (void)setNInputChannels:(int)arg1;
- (void)setNOutputChannels:(int)arg1;
- (void)setOutputFrameSizeInBytes:(int)arg1;
- (void)setSampleRate:(int)arg1;
- (bool)startAudioUnit;
- (bool)stopAudioUnit;

@end
