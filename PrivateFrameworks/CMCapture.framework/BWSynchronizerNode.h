
@interface BWSynchronizerNode : BWNode {
    struct OpaqueCMClock { } * _masterClock;
    int  _newestPTSSyncHistoryElement;
    int  _oldestPTSSyncHistoryElement;
    struct { 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } sourceTime; 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } syncedTime; 
    }  _ptsSyncHistory;
    struct OpaqueCMClock { } * _sourceClock;
}

+ (void)initialize;

- (void)dealloc;
- (void)didSelectFormat:(id)arg1 forInput:(id)arg2;
- (void)handleDroppedSample:(id)arg1 forInput:(id)arg2;
- (id)initWithMediaType:(unsigned int)arg1;
- (struct OpaqueCMClock { }*)masterClock;
- (id)nodeSubType;
- (id)nodeType;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInput:(id)arg2;
- (void)setMasterClock:(struct OpaqueCMClock { }*)arg1;
- (void)setSourceClock:(struct OpaqueCMClock { }*)arg1;
- (struct OpaqueCMClock { }*)sourceClock;

@end
