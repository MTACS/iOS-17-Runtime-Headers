
@interface AWAttentionAwarenessClientConfig : NSObject {
    unsigned long long  _nextTagIndex;
    NSMutableDictionary * _notifyBlocks;
    NSMutableDictionary * _notifyQueues;
    int  _notifyToken;
    NSObject<OS_dispatch_queue> * _queue;
    unsigned long long  _supportedEvents;
    bool  _supportedEventsValid;
    NSMutableDictionary * _tagMap;
    NSMutableDictionary * _tagRefCount;
}

+ (id)sharedClientConfig;

- (void).cxx_destruct;
- (unsigned long long)addTag:(id)arg1;
- (void)cancelNotification:(struct AWNotification_s { }*)arg1;
- (void)dealloc;
- (void)decrementTagIndexRefCount:(unsigned long long)arg1;
- (void)incrementTagIndexRefCount:(unsigned long long)arg1;
- (id)init;
- (struct AWNotification_s { }*)notifySupportedEventsChangedWithQueue:(id)arg1 block:(id /* block */)arg2;
- (unsigned long long)supportedEvents;
- (id)tagForIndex:(unsigned long long)arg1;
- (void)updateState:(bool)arg1;

@end
