
@interface HMDDonationHandler : HMFObject <HMFLogging> {
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *workQueue;

+ (id)logCategory;
+ (id)sharedDonationHandler;

- (void).cxx_destruct;
- (void)_donateActionSet:(id)arg1 withMessage:(id)arg2;
- (void)_donateIntent:(id)arg1 withActionSet:(id)arg2;
- (id)_init;
- (void)_removeIntentForActionSet:(id)arg1;
- (void)donateActionSet:(id)arg1 withMessage:(id)arg2;
- (id)init;
- (void)removeIntentForActionSet:(id)arg1;
- (void)setWorkQueue:(id)arg1;
- (id)workQueue;

@end
