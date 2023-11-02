
@interface PPLPeopleAppLauncher : NSObject {
    <PPLPeopleAppLauncherDelegate> * _delegate;
    RBSAssertion * _initializationAssertion;
    RBSProcessHandle * _peopleAppProcessHandle;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic) <PPLPeopleAppLauncherDelegate> *delegate;
@property (nonatomic, retain) RBSAssertion *initializationAssertion;
@property (nonatomic, retain) RBSProcessHandle *peopleAppProcessHandle;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;

+ (id)sharedLauncher;

- (void).cxx_destruct;
- (id)delegate;
- (id)init;
- (id)initializationAssertion;
- (void)launchPeopleAppIfNeededWithForegroundPriority:(bool)arg1;
- (id)peopleAppProcessHandle;
- (id)queue;
- (void)setDelegate:(id)arg1;
- (void)setInitializationAssertion:(id)arg1;
- (void)setPeopleAppProcessHandle:(id)arg1;
- (void)setQueue:(id)arg1;

@end
