
@interface BrightnessSystemInternal : NSObject <NSXPCListenerDelegate> {
    float  _cachedSlider;
    id /* block */  _callback;
    NSMutableArray * _callbackProps;
    bool  _checkConnections;
    NSMutableDictionary * _clients;
    NSMutableDictionary * _clientsConnectionState;
    NSMutableDictionary * _clientsProps;
    NSMutableDictionary * _combinableProps;
    double  _initDuration;
    NSXPCListener * _listener;
    NSObject<OS_os_log> * _logHandle;
    NSMutableDictionary * _ownedProps;
    BLControl * bl;
    id /* block */  connectionCheckBlock;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)adjustDictionaryToBeValidPropertyList:(id)arg1;
- (void)clientConnectedWithExpObj:(id)arg1;
- (void)clientDisconnectedWithExpObj:(id)arg1;
- (id)copyPropertyForKey:(id)arg1 client:(id)arg2;
- (void)dealloc;
- (void)destroyServer;
- (id)init;
- (bool)isACombinableProperty:(id)arg1;
- (bool)isAlsSupported;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)newAggregatedPropertyForCombinablePropertiesForKey:(id)arg1;
- (void)notifyClientsForProperty:(id)arg1 key:(id)arg2;
- (void)registerNotificationBlock:(id /* block */)arg1;
- (void)registerNotificationBlock:(id /* block */)arg1 forProperties:(id)arg2;
- (bool)setCombinableProperty:(id)arg1 forKey:(id)arg2 client:(id)arg3;
- (void)setNotificationProperties:(id)arg1 forClient:(id)arg2;
- (void)setOwnedProperty:(id)arg1 forKey:(id)arg2 client:(id)arg3;
- (bool)setProperty:(id)arg1 forKey:(id)arg2 client:(id)arg3;
- (void)undoCombinablePropertiesForClient:(id)arg1;
- (void)undoOwnedPropertiesForClient:(id)arg1;

@end
