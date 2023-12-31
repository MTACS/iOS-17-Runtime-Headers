
@interface GKEventEmitter : NSObject {
    NSHashTable * _listeners;
    NSMutableArray * _queuedEvents;
    bool  _shouldQueue;
    NSMutableArray * _supportedProtocols;
}

@property (nonatomic, retain) NSHashTable *listeners;
@property (nonatomic, retain) NSMutableArray *queuedEvents;
@property (nonatomic) bool shouldQueue;
@property (nonatomic, retain) NSMutableArray *supportedProtocols;

+ (id)eventEmitterForProtocols:(id)arg1;
+ (id)eventEmitterForProtocols:(id)arg1 shouldQueue:(bool)arg2;

- (void).cxx_destruct;
- (void)dispatchQueuedEventsToListener:(id)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)initWithSupportedProtocols:(id)arg1 shouldQueue:(bool)arg2;
- (id)invocationForProtocol:(id)arg1 selector:(SEL)arg2;
- (bool)listenerRegisteredForSelector:(SEL)arg1;
- (id)listeners;
- (id)methodSignatureForProtocol:(id)arg1 selector:(SEL)arg2;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)queuedEvents;
- (void)registerListener:(id)arg1;
- (void)setListeners:(id)arg1;
- (void)setQueuedEvents:(id)arg1;
- (void)setShouldQueue:(bool)arg1;
- (void)setSupportedProtocols:(id)arg1;
- (bool)shouldQueue;
- (id)supportedProtocols;
- (void)unregisterAllListeners;
- (void)unregisterListener:(id)arg1;

@end
