
@interface CLHidEventManager : NSObject {
    <CLHidEventManagerDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    HIDEventSystemClient * _manager;
    NSMutableArray * _matching;
}

@property (nonatomic) <CLHidEventManagerDelegate> *delegate;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *delegateQueue;
@property (nonatomic, readonly) HIDEventSystemClient *manager;
@property (nonatomic, retain) NSMutableArray *matching;

- (void)dealloc;
- (id)delegate;
- (id)delegateQueue;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2 matching:(id)arg3 type:(long long)arg4;
- (id)manager;
- (id)matching;
- (void)setDelegate:(id)arg1;
- (void)setMatching:(id)arg1;

@end
