
@interface SLDServiceListenerMultiplex : NSObject <NSXPCListenerDelegate> {
    <SLDServiceMultiplexDelegate> * _delegate;
    NSMapTable * _listenerToServiceTable;
    NSMapTable * _serviceToConnectionsTable;
    NSMapTable * _serviceToListenerTable;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SLDServiceMultiplexDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (getter=isEmpty, nonatomic, readonly) bool empty;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMapTable *listenerToServiceTable;
@property (nonatomic, retain) NSMapTable *serviceToConnectionsTable;
@property (nonatomic, retain) NSMapTable *serviceToListenerTable;
@property (readonly) Class superclass;

+ (id)emptyMultiplex;

- (void).cxx_destruct;
- (void)_acceptConnection:(id)arg1 forService:(id)arg2;
- (id)_listenerForService:(id)arg1;
- (void)_logFullDescription;
- (void)_notifyDelegateIfEmpty;
- (void)_service:(id)arg1 lostConnection:(id)arg2;
- (id)delegate;
- (id)description;
- (id)endpointForServiceClass:(Class)arg1;
- (id)init;
- (bool)isEmpty;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)listenerToServiceTable;
- (id)serviceToConnectionsTable;
- (id)serviceToListenerTable;
- (void)setDelegate:(id)arg1;
- (void)setListenerToServiceTable:(id)arg1;
- (void)setServiceToConnectionsTable:(id)arg1;
- (void)setServiceToListenerTable:(id)arg1;

@end
