
@interface TKSmartCardSlotManager : NSObject <TKProtocolSlotClientNotification> {
    NSXPCConnection * _connection;
    id /* block */  _connectionToServer;
    NSMutableDictionary * _endpoints;
    int  _notifyToken;
    NSArray * _slotNames;
    NSObject<OS_dispatch_queue> * _slotNamesQueue;
}

@property (readonly) NSArray *slotNames;

+ (id)defaultManager;

- (void).cxx_destruct;
- (void)dealloc;
- (void)getSlotWithName:(id)arg1 reply:(id /* block */)arg2;
- (id)init;
- (id)initWithServer:(id /* block */)arg1;
- (void)setSlotWithName:(id)arg1 endpoint:(id)arg2 type:(id)arg3 reply:(id /* block */)arg4;
- (bool)setupConnection;
- (id)slotNamed:(id)arg1;
- (id)slotNames;

@end
