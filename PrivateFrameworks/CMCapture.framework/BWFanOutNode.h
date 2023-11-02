
@interface BWFanOutNode : BWNode {
    id * _outputsCArray;
    int  _outputsCount;
    bool * _outputsDiscardsAttachedMedia;
}

+ (void)initialize;

- (void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3;
- (void)dealloc;
- (void)didReachEndOfDataForInput:(id)arg1;
- (void)didSelectFormat:(id)arg1 forInput:(id)arg2;
- (void)handleDroppedSample:(id)arg1 forInput:(id)arg2;
- (void)handleNodeError:(id)arg1 forInput:(id)arg2;
- (bool)hasNonLiveConfigurationChanges;
- (id)initWithFanOutCount:(int)arg1 mediaType:(unsigned int)arg2;
- (void)makeCurrentConfigurationLive;
- (id)nodeSubType;
- (id)nodeType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInput:(id)arg2;
- (void)setDiscardsAttachedMedia:(bool)arg1 forOutputIndex:(int)arg2;

@end
