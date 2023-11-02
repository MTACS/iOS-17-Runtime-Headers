
@interface UIOServer : NSObject <BSServiceConnectionListenerDelegate> {
    bool  _activated;
    BSServiceConnectionListener * _connectionListener;
    NSMutableSet * _connections;
    NSMapTable * _displayDelegateTable;
    NSObject<OS_dispatch_queue> * _serviceQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_identifierForSceneType:(long long)arg1 displayHardwareIdentifier:(id)arg2;
+ (id)displayDelegateIdentifierForScene:(id)arg1;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)activate;
- (id)displayDelegateForAction:(id)arg1;
- (id)displayDelegateForAction:(id)arg1 sceneType:(long long)arg2;
- (id)displayDelegateForIdentifier:(id)arg1;
- (id)init;
- (void)invalidate;
- (void)listener:(id)arg1 didReceiveConnection:(id)arg2 withContext:(id)arg3;
- (void)registerDisplayDelegate:(id)arg1 forIdentifier:(id)arg2;
- (void)unregisterDisplayDelegateForIdentifier:(id)arg1;

@end
