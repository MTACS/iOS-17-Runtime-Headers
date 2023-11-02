
@interface IPProgressStubBehavior : NSObject <IPProgressServerBehavior> {
    <IPProgressServerBehaviorDelegate> * _delegate;
    IPXPCEventSubscriptionBlackhole * _streamBlackhole;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <IPProgressServerBehaviorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)delegate;
- (void)identityWasUninstalled:(id)arg1;
- (id)initWithEventStreamName:(id)arg1;
- (void)progressForIdentity:(id)arg1 changed:(id)arg2;
- (void)progressForIdentity:(id)arg1 finishedWithState:(unsigned long long)arg2;
- (void)progressForIdentityInitiated:(id)arg1;
- (id)queue;
- (void)resume;
- (void)setDelegate:(id)arg1;

@end
