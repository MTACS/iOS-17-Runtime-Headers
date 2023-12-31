
@interface ASReachabilityStatusCache : NSObject {
    NSMutableDictionary * _cache;
    NSObject<OS_dispatch_queue> * _serialQueue;
}

- (void).cxx_destruct;
- (void)addStatusesByDestination:(id)arg1;
- (id)init;
- (void)setStatus:(id)arg1 forDestination:(id)arg2;
- (id)statusForDestination:(id)arg1;
- (id)statusesForDestinations:(id)arg1;

@end
