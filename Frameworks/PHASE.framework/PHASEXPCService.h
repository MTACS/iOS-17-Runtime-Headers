
@interface PHASEXPCService : NSObject <NSXPCListenerDelegate> {
    unsigned long long  _connectionUIDGenerator;
    NSXPCInterface * _interface;
    NSXPCListener * _mainListener;
    <PHASEPlatform> * _platform;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;
+ (id)sharedInstanceWithPlatform:(id)arg1;

- (void).cxx_destruct;
- (id)init;
- (id)initWithXPCListener:(id)arg1;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (unsigned long long)newConnectionUID;
- (void)resumeListener;

@end
