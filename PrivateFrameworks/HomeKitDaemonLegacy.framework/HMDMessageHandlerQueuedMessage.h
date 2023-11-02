
@interface HMDMessageHandlerQueuedMessage : HMFObject <HMFTimerDelegate> {
    <HMDMessageHandlerQueuedMessageDelegate> * _delegate;
    HMFMessage * _message;
    HMFTimer * _timer;
}

@property (readonly, copy) NSString *debugDescription;
@property <HMDMessageHandlerQueuedMessageDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSUUID *identifier;
@property (readonly) HMFMessage *message;
@property (readonly, copy) NSString *name;
@property (readonly) Class superclass;
@property (readonly) HMFTimer *timer;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)delegate;
- (id)identifier;
- (id)initWithMessage:(id)arg1;
- (id)initWithMessage:(id)arg1 timeInterval:(double)arg2;
- (id)logIdentifier;
- (id)message;
- (id)name;
- (id)privateDescription;
- (void)resumeTimer;
- (void)setDelegate:(id)arg1;
- (void)suspendTimer;
- (id)timer;
- (void)timerDidFire:(id)arg1;

@end
