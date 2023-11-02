
@interface HMFTimerManagerTimerContext : NSObject <HMFTimerManagerTimerContext> {
    double  _expirationTime;
    NSObject * _object;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) double expirationTime;
@property (readonly) unsigned long long hash;
@property (readonly) NSObject *object;
@property (readonly) Class superclass;

+ (id /* block */)comparator;

- (void).cxx_destruct;
- (double)expirationTime;
- (id)initWithObject:(id)arg1 expirationTime:(double)arg2;
- (id)object;

@end
