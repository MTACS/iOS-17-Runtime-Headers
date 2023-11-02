
@interface _DASSystemContext : NSObject {
    <_CDLocalContext> * _context;
    NSObject<OS_os_log> * _dasSystemContextLog;
    long long  _inexpensiveNetworkPathStatus;
    long long  _networkPathStatus;
    NSMutableArray * _registrations;
}

@property (nonatomic, retain) <_CDLocalContext> *context;
@property (nonatomic, retain) NSObject<OS_os_log> *dasSystemContextLog;
@property (nonatomic) long long inexpensiveNetworkPathStatus;
@property (nonatomic) long long networkPathStatus;
@property (nonatomic, retain) NSMutableArray *registrations;

+ (id)defaultInexpensivePathEvaluator;
+ (id)defaultPathEvaluator;
+ (id)initWithContext:(id)arg1;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)addNotificationHandlerForTaskName:(id)arg1 withPriority:(unsigned long long)arg2 withParameters:(id)arg3 withHandler:(id /* block */)arg4;
- (bool)allowDiscretionaryWorkForBackgroundTask:(id)arg1 withParameters:(id)arg2;
- (bool)allowDiscretionaryWorkForUtilityTask:(id)arg1 withParameters:(id)arg2;
- (bool)allowsDiscretionaryWorkForTask:(id)arg1 withPriority:(unsigned long long)arg2 withParameters:(id)arg3;
- (id)context;
- (id)dasSystemContextLog;
- (long long)inexpensiveNetworkPathStatus;
- (id)init;
- (bool)isApplicationFocalForPushTask:(id)arg1;
- (bool)isInexpensiveNetworkAvailable;
- (bool)isNetworkAvailable;
- (id)keyPathForPriority:(unsigned long long)arg1;
- (long long)networkPathStatus;
- (id)registrations;
- (void)removeNotificationHandlerForTaskName:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setDasSystemContextLog:(id)arg1;
- (void)setInexpensiveNetworkPathStatus:(long long)arg1;
- (void)setNetworkPathStatus:(long long)arg1;
- (void)setRegistrations:(id)arg1;
- (void)updateSystemConstraintsWithParameters:(id)arg1;

@end
