
@protocol CellThroughputAdviserDelegate <NSObject>

@required

- (void)postAWDMetric:(PBCodable *)arg1 withIdentifier:(unsigned int)arg2;
- (void)postCAEvent:(NSDictionary *)arg1 withName:(NSString *)arg2;
- (void)relayAudioVideoStatus:(unsigned int)arg1 rxThroughput:(double)arg2 txThroughput:(double)arg3 at:(double)arg4 reset:(bool)arg5;
- (void)relayCellThroughputAdvice:(unsigned int)arg1 at:(double)arg2;
- (void)sendPowerLogReport:(NSDictionary *)arg1 isStart:(bool)arg2;

@end
