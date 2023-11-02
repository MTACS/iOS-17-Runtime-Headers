
@interface AXSDAudioLevelsHelper : NSObject {
    NSMutableDictionary * _listenerBucketCounts;
    NSMutableDictionary * _listenerHanders;
    NSObject<OS_dispatch_queue> * _listenerQueue;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)deregisterListener:(id)arg1;
- (id)init;
- (void)registerListener:(id)arg1 forAudioLevelUpdates:(id /* block */)arg2 withBucketCount:(int)arg3;
- (void)updateListenersWithBuffer:(id)arg1;

@end
