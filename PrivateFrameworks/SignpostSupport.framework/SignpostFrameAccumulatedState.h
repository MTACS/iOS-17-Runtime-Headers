
@interface SignpostFrameAccumulatedState : NSObject {
    NSMutableDictionary * _contextIDtoContextInfoDict;
    SignpostFrameLatencyInterval * _frameLatency;
    unsigned int  _frameSeed;
    NSMutableDictionary * _frameSeedToSkippedRenderIntervals;
    SignpostHIDLatencyInterval * _hidLatency;
    SignpostRenderServerRenderInterval * _renderInterval;
}

@property (nonatomic, retain) NSMutableDictionary *contextIDtoContextInfoDict;
@property (nonatomic, retain) SignpostFrameLatencyInterval *frameLatency;
@property (nonatomic, readonly) unsigned int frameSeed;
@property (nonatomic, retain) NSMutableDictionary *frameSeedToSkippedRenderIntervals;
@property (nonatomic, retain) SignpostHIDLatencyInterval *hidLatency;
@property (nonatomic, retain) SignpostRenderServerRenderInterval *renderInterval;

- (void).cxx_destruct;
- (void)_addSkippedRender:(id)arg1;
- (id)contextIDtoContextInfoDict;
- (id)frameLatency;
- (unsigned int)frameSeed;
- (id)frameSeedToSkippedRenderIntervals;
- (id)hidLatency;
- (id)initWithFrameSeed:(unsigned int)arg1;
- (id)renderInterval;
- (void)setContextIDtoContextInfoDict:(id)arg1;
- (void)setFrameLatency:(id)arg1;
- (void)setFrameSeedToSkippedRenderIntervals:(id)arg1;
- (void)setHidLatency:(id)arg1;
- (void)setRenderInterval:(id)arg1;

@end
