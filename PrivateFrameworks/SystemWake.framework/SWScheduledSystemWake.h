
@interface SWScheduledSystemWake : NSObject <BSInvalidatable> {
    NSString * _identifier;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    bool  _lock_invalidated;
    long long  _lock_leeway;
    NSDate * _lock_wakeDate;
    NSString * _lock_wakeIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly) long long leeway;
@property (getter=isScheduled, nonatomic, readonly) bool scheduled;
@property (readonly) Class superclass;
@property (nonatomic, readonly) double wakeTime;

- (void).cxx_destruct;
- (void)cancelWake;
- (void)dealloc;
- (id)description;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1;
- (void)invalidate;
- (bool)isScheduled;
- (long long)leeway;
- (void)scheduleWake:(double)arg1 leeway:(long long)arg2;
- (double)wakeTime;

@end
