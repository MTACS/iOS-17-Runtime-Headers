
@interface AVAudioUnitDSPGraph : AVAudioUnit

@property (nonatomic, readonly) NSURL *auProcessingStripURL;
@property (nonatomic, readonly) NSURL *dspGraphURL;

- (id)auProcessingStripURL;
- (id)dspGraphURL;
- (id)init;
- (bool)loadAudioDSPManager;
- (bool)loadAudioUnitProcessingStripAtURL:(id)arg1 error:(id*)arg2;
- (bool)loadDSPGraphAtURL:(id)arg1 error:(id*)arg2;

@end
