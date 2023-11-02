
@interface IPProgressServer : NSObject {
    <IPAccessAdjudicator> * _accessAdjudicator;
    NSMutableDictionary * _activeProgresses;
    <IPProgressServerBehavior> * _behavior;
    <IPProgressServerDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic) <IPProgressServerDelegate> *delegate;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *delegateQueue;

+ (id)defaultAccessAdjudicator;
+ (id)defaultBehavior;

- (void).cxx_destruct;
- (id)_progressForIdentity:(id)arg1 createIfMissing:(bool)arg2;
- (id)_queue_progressForIdentity:(id)arg1 createIfMissing:(bool)arg2;
- (void)_queue_removePublishedProgress:(id)arg1;
- (id)activeInstallationsForBehavior:(id)arg1;
- (id)delegate;
- (id)delegateQueue;
- (void)identityProgress:(id)arg1 didChangeProgressData:(id)arg2;
- (void)identityProgress:(id)arg1 didFinishWithState:(unsigned long long)arg2;
- (void)identityWasUninstalled:(id)arg1;
- (id)initWithDelegate:(id)arg1 delegateQueue:(id)arg2;
- (id)initWithDelegate:(id)arg1 delegateQueue:(id)arg2 accessAdjudicator:(id)arg3 behavior:(id)arg4;
- (id)initiateProgressForIdentity:(id)arg1;
- (void)resume;
- (id)resumeProgressForIdentity:(id)arg1;
- (void)serverBehavior:(id)arg1 acceptedClient:(id)arg2;
- (id)serverBehavior:(id)arg1 progressForIdentity:(id)arg2 error:(id*)arg3;
- (bool)serverBehavior:(id)arg1 shouldAcceptConnection:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setDelegateQueue:(id)arg1;

@end
