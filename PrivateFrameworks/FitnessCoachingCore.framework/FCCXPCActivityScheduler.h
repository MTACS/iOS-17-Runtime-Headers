
@interface FCCXPCActivityScheduler : NSObject {
    FCCDateProvider * _dateProvider;
    <FCCXPCActivitySchedulerDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
}

@property (nonatomic) <FCCXPCActivitySchedulerDelegate> *delegate;

- (void).cxx_destruct;
- (void)_checkInActivity:(id)arg1 name:(id)arg2 scheduledDate:(id)arg3;
- (void)_runActivity:(id)arg1 name:(id)arg2;
- (id)_stringForXPCActivityState:(long long)arg1;
- (void)cancelActivityWithName:(id)arg1;
- (id)delegate;
- (id)init;
- (id)initWithDateProvider:(id)arg1 dispatchQueue:(id)arg2;
- (void)scheduleActivityWithName:(id)arg1 scheduledDate:(id)arg2;
- (void)setDelegate:(id)arg1;

@end
