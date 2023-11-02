
@interface HMFOperation : NSOperation <HMFLogging, HMFObject, HMFTimerDelegate> {
    HMFActivity * _activity;
    NSError * _error;
    bool  _executing;
    bool  _finished;
    NSUUID * _identifier;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    bool  _qosWasSet;
    NSObject<OS_dispatch_queue> * _queue;
    HMFTimer * _timer;
    NSObject<OS_voucher> * _voucher;
}

@property (retain) HMFActivity *activity;
@property (nonatomic, readonly, copy) NSArray *attributeDescriptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSError *error;
@property (readonly) unsigned long long hash;
@property (readonly) NSUUID *identifier;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;
@property (readonly, copy) NSDate *timeoutDate;
@property (nonatomic, readonly) HMFTimer *timer;
@property (readonly) NSObject<OS_dispatch_queue> *underlyingQueue;

+ (bool)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)logCategory;
+ (id)shortDescription;

- (void).cxx_destruct;
- (id)activity;
- (id)attributeDescriptions;
- (void)cancel;
- (void)cancelWithError:(id)arg1;
- (id)description;
- (id)error;
- (void)finish;
- (id)identifier;
- (id)init;
- (id)initWithTimeout:(double)arg1;
- (bool)isAsynchronous;
- (bool)isExecuting;
- (bool)isFinished;
- (id)logIdentifier;
- (void)main;
- (id)privateDescription;
- (void)setActivity:(id)arg1;
- (void)setQualityOfService:(long long)arg1;
- (id)shortDescription;
- (void)start;
- (id)timeoutDate;
- (id)timer;
- (void)timerDidFire:(id)arg1;
- (id)underlyingQueue;

@end
