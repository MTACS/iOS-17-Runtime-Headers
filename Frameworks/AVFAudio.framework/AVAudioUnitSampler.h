
@interface AVAudioUnitSampler : AVAudioUnitMIDIInstrument

@property (nonatomic) float globalTuning;
@property (nonatomic) float masterGain;
@property (nonatomic) float overallGain;
@property (nonatomic) float stereoPan;

- (float)globalTuning;
- (id)init;
- (id)initWithAudioComponentDescription:(struct AudioComponentDescription { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; })arg1;
- (bool)loadAudioFilesAtURLs:(id)arg1 error:(id*)arg2;
- (bool)loadInstrumentAtURL:(id)arg1 error:(id*)arg2;
- (bool)loadSoundBankInstrumentAtURL:(id)arg1 program:(unsigned char)arg2 bankMSB:(unsigned char)arg3 bankLSB:(unsigned char)arg4 error:(id*)arg5;
- (float)masterGain;
- (float)overallGain;
- (void)setGlobalTuning:(float)arg1;
- (void)setMasterGain:(float)arg1;
- (void)setOverallGain:(float)arg1;
- (void)setStereoPan:(float)arg1;
- (float)stereoPan;

@end
