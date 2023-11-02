
@interface _WBSDeallocationSentinel : NSObject {
    id  _context;
    <WBSDeallocationSentinelObserver> * _observer;
}

@property (nonatomic, readonly) id context;
@property (nonatomic) <WBSDeallocationSentinelObserver> *observer;

- (void).cxx_destruct;
- (id)context;
- (void)dealloc;
- (id)initWithObserver:(id)arg1 context:(id)arg2;
- (id)observer;
- (void)setObserver:(id)arg1;

@end
