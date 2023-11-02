
@interface HMFOperationBudget : HMFObject <HMFLogging, HMFTimerDelegate> {
    unsigned long long  _limit;
    struct os_unfair_recursive_lock_s { 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } ourl_lock; 
        unsigned int ourl_count; 
    }  _lock;
    struct _HMFRate { 
        unsigned long long value; 
        double period; 
    }  _rate;
    HMFTimer * _timer;
    unsigned long long  _value;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isEmpty, readonly) bool empty;
@property (getter=isFull, readonly) bool full;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long limit;
@property (nonatomic, readonly) struct _HMFRate { unsigned long long x1; double x2; } rate;
@property (readonly) Class superclass;
@property (readonly) unsigned long long value;

+ (bool)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)logCategory;

- (void).cxx_destruct;
- (bool)decrement;
- (bool)decrementByCount:(unsigned long long)arg1;
- (id)init;
- (id)initWithLimit:(unsigned long long)arg1 rate:(struct _HMFRate { unsigned long long x1; double x2; })arg2;
- (bool)isEmpty;
- (bool)isFull;
- (unsigned long long)limit;
- (struct _HMFRate { unsigned long long x1; double x2; })rate;
- (void)reset;
- (void)timerDidFire:(id)arg1;
- (unsigned long long)value;

@end
