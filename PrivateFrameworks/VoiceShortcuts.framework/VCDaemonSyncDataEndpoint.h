
@interface VCDaemonSyncDataEndpoint : NSObject <VCSyncDataEndpoint> {
    SwiftVCDaemonXPCEventHandler * _eventHandler;
    NSMutableSet * _mutableSyncDataHandlers;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) SwiftVCDaemonXPCEventHandler *eventHandler;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSMutableSet *mutableSyncDataHandlers;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSSet *syncDataHandlers;

- (void).cxx_destruct;
- (id)eventHandler;
- (id)initWithEventHandler:(id)arg1;
- (id)mutableSyncDataHandlers;
- (id)queue;
- (id)syncDataHandlers;

@end
