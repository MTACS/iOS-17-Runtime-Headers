
@interface NRMockXPCStuff : NSObject {
    NSMutableDictionary * _mockListeners;
    NSObject<OS_dispatch_queue> * _queue;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;

@end
