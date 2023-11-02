
@interface _DKActivityThrottler : NSObject {
    NSCache * _cache;
    NSCountedSet * _delayScheduledActions;
    NSCountedSet * _minimumIntervalScheduledActions;
    <_DKSimpleKeyValueStore> * _store;
    NSObject<OS_dispatch_queue> * _storeQueue;
}

- (void).cxx_destruct;
- (id)description;

@end
