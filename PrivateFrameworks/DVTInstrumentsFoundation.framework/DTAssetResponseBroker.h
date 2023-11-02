
@interface DTAssetResponseBroker : NSObject {
    NSMutableDictionary * _activeHandlers;
    NSObject<OS_dispatch_queue> * _activeHandlersQueue;
}

@property (nonatomic, retain) NSMutableDictionary *activeHandlers;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *activeHandlersQueue;

+ (id)sharedBroker;

- (void).cxx_destruct;
- (id)activeHandlerWithIdentifier:(id)arg1;
- (id)activeHandlers;
- (id)activeHandlersQueue;
- (bool)canContinueServingRequestWithIdentifier:(id)arg1;
- (void)forwardMessage:(id)arg1;
- (id)init;
- (void)registerHandler:(id)arg1;
- (void)setActiveHandlers:(id)arg1;
- (void)setActiveHandlersQueue:(id)arg1;
- (void)unregisterHandler:(id)arg1;

@end
