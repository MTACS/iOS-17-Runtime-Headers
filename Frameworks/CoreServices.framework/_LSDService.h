
@interface _LSDService : NSObject <NSXPCListenerDelegate> {
    NSMapTable * _clientMap;
    struct unfair_lock_mutex { 
        unsigned int _os_unfair_lock_opaque; 
    }  _clientMapMutex;
    NSXPCListener * _listener;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)XPCConnectionIsAlwaysPrivileged;
+ (id)XPCConnectionToService;
+ (id)XPCInterface;
+ (Class)clientClass;
+ (unsigned short)connectionType;
+ (id)dispatchQueue;
+ (bool)isEnabled;
+ (id)replacementObjectForXPCConnection:(id)arg1 encoder:(id)arg2 object:(id)arg3;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)clientBorn:(id)arg1 forNewConnection:(id)arg2;
- (id)clientForConnection:(id)arg1;
- (void)connection:(id)arg1 handleInvocation:(id)arg2 isReply:(bool)arg3;
- (void)connectionWasInvalidated:(id)arg1;
- (id)initWithXPCListener:(id)arg1;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)replacementObjectForXPCConnection:(id)arg1 encoder:(id)arg2 object:(id)arg3;

@end
