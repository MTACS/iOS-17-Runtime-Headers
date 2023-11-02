
@interface MPDispatchQueueExclusiveAccessToken : NSObject <MPExclusiveAccessToken> {
    NSObject<OS_dispatch_queue> * _accessQueue;
    id  _owner;
}

+ (id)tokenWithQueue:(id)arg1 owner:(id)arg2;

- (void).cxx_destruct;
- (id)_init;
- (void)assertHasExclusiveAccessForOwner:(id)arg1;

@end
