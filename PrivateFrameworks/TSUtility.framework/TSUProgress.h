
@interface TSUProgress : NSObject {
    NSString * mMessage;
    NSMutableSet * mProgressObservers;
    NSObject<OS_dispatch_queue> * mProgressObserversQueue;
}

@property (getter=isIndeterminate, readonly) bool indeterminate;
@property (readonly) double maxValue;
@property (copy) NSString *message;
@property (readonly) double value;

- (id)addProgressObserverWithValueInterval:(double)arg1 queue:(id)arg2 handler:(id /* block */)arg3;
- (void)dealloc;
- (id)init;
- (bool)isIndeterminate;
- (double)maxValue;
- (id)message;
- (bool)protected_hasProgressObservers;
- (double)protected_minProgressObserverValueInterval;
- (void)protected_progressDidChange;
- (void)removeProgressObserver:(id)arg1;
- (void)setMessage:(id)arg1;
- (double)value;

@end
