
@interface DTKTraceTapLocalVFSTracePathsProducer : NSObject <DTKTraceTapLocalEventProducer>

+ (bool)supportsConfig:(id)arg1;

- (void)_emitVFSDump;
- (id)init;
- (void)pause;
- (void)start;
- (void)stop;
- (void)unpause;

@end
