
@interface SFSSDeviceTTSTask : SFSpeechSynthesisTask {
    SFSSTTSEngine * _ttsEngine;
}

@property (nonatomic) SFSSTTSEngine *ttsEngine;

- (void).cxx_destruct;
- (void)cancelTask;
- (id)initWithRequest:(id)arg1;
- (void)setTtsEngine:(id)arg1;
- (void)startTask:(id /* block */)arg1;
- (id)ttsEngine;

@end
