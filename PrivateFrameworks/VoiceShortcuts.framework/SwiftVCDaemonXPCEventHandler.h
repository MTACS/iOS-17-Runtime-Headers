
@interface SwiftVCDaemonXPCEventHandler : NSObject {
    void observers;
    void queue;
    void streamForEvent;
    void streams;
}

@property (nonatomic, readonly) NSArray *streams;

- (void).cxx_destruct;
- (void)addObserver:(id)arg1 selector:(SEL)arg2 name:(id)arg3;
- (id)init;
- (id)initWithStreams:(id)arg1;
- (id)initWithStreams:(id)arg1 queue:(id)arg2;
- (void)removeObserver:(id)arg1;
- (void)removeObserver:(id)arg1 name:(id)arg2;
- (id)streams;

@end
