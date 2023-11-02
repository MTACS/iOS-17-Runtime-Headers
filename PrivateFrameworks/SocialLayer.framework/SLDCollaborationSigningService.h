
@interface SLDCollaborationSigningService : NSObject <SLDCollaborationSigningService, SLDService> {
    SLPersonIdentityGenerator * _personIdentityGenerator;
    NSObject<OS_dispatch_queue> * _privateSerialQueue;
    SLDTaskManager * _taskManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) SLPersonIdentityGenerator *personIdentityGenerator;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *privateSerialQueue;
@property (readonly) Class superclass;
@property (nonatomic, retain) SLDTaskManager *taskManager;

+ (id)remoteObjectProtocol;
+ (id)sharedService;

- (void).cxx_destruct;
- (bool)allowsConnection:(id)arg1;
- (id)init;
- (id)personIdentityGenerator;
- (id)privateSerialQueue;
- (void)setTaskManager:(id)arg1;
- (id)signData:(id)arg1 forCollaborationIdentifier:(id)arg2 trackingPreventionSalt:(id)arg3 reply:(id /* block */)arg4;
- (id)signSourceProcessWithMetadata:(id)arg1 reply:(id /* block */)arg2;
- (id)taskManager;

@end
