
@interface VCEmulatedNetworkElement : NSObject {
    struct opaqueCMSimpleQueue { } * _networkElementQueue;
    NSDictionary * _policies;
    id /* block */  _processCompleteHandler;
}

@property (nonatomic, copy) id /* block */ processCompleteHandler;

- (void)connectFrom:(id)arg1;
- (void)connectTo:(id)arg1;
- (void)dealloc;
- (void)drainAndReleasePackets;
- (id)initWithPolicies:(id)arg1;
- (id /* block */)processCompleteHandler;
- (void)runUntilTime:(double)arg1;
- (void)setProcessCompleteHandler:(id /* block */)arg1;
- (int)write:(id)arg1;

@end
