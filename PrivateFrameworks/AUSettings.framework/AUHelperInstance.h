
@interface AUHelperInstance : NSObject {
    NSXPCConnection * _xpcConnection;
}

@property (readonly) <AUHelperServiceProtocol> *remoteObject;

+ (id)sharedInstance;
+ (id)xpcConnectionToHelper;

- (void).cxx_destruct;
- (id)init;
- (id)remoteObject;

@end
