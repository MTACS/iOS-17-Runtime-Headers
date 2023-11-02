
@interface SBBackgroundActivityCoordinatorClient : NSObject {
    NSXPCConnection * _connection;
    NSSet * _registeredBackgroundActivityIdentifiers;
    NSObject<OS_dispatch_queue> * _registeredOverridesQueue;
}

@property (nonatomic, retain) NSXPCConnection *connection;
@property (nonatomic, copy) NSSet *registeredBackgroundActivityIdentifiers;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *registeredOverridesQueue;

- (void).cxx_destruct;
- (void)acquireAssertionAndDeliverTapContextToClient:(id)arg1;
- (id)connection;
- (id)initWithConnection:(id)arg1 andBackgroundActivityIdentifiers:(id)arg2;
- (id)registeredBackgroundActivityIdentifiers;
- (id)registeredOverridesQueue;
- (void)setConnection:(id)arg1;
- (void)setRegisteredBackgroundActivityIdentifiers:(id)arg1;
- (void)setRegisteredOverridesQueue:(id)arg1;

@end
