
@interface CALNXPCActivityScheduler : NSObject <CALNActivityScheduler> {
    NSString * _activityIdentifier;
    <CALNActivitySchedulerDelegate> * _delegate;
    NSObject<OS_xpc_object> * _otherCriteria;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CALNActivitySchedulerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)delegate;
- (id)initWithActivityIdentifier:(id)arg1 otherCriteria:(id)arg2;
- (void)scheduleWithTimeInterval:(long long)arg1 gracePeriod:(long long)arg2;
- (void)setDelegate:(id)arg1;
- (void)unschedule;

@end
