
@interface HAENStatistics : NSObject {
    NSObject<OS_dispatch_queue> * _eventQueue;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_sendMessage:(id)arg1;
- (id)init;
- (void)processMessage:(id)arg1;
- (void)processStatsForEvent:(id)arg1;
- (void)processStatsForLocationGating:(struct { id x1; id x2; id x3; bool x4; bool x5; })arg1;
- (id)volumeActionString:(unsigned int)arg1;

@end
