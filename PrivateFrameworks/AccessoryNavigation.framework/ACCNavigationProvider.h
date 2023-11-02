
@interface ACCNavigationProvider : NSObject {
    NSMutableDictionary * _accessories;
    NSMutableArray * _delegates;
    NSString * _providerUID;
    <ACCNavigationXPCServerProtocol> * _remoteObject;
    NSXPCConnection * _serverConnection;
}

@property (nonatomic, retain) NSMutableDictionary *accessories;
@property (nonatomic, retain) NSMutableArray *delegates;
@property (nonatomic, retain) NSString *providerUID;
@property (nonatomic, retain) <ACCNavigationXPCServerProtocol> *remoteObject;
@property (nonatomic, retain) NSXPCConnection *serverConnection;

- (void).cxx_destruct;
- (id)accessories;
- (id)accessoryForUID:(id)arg1;
- (void)accessoryNavigationAttached:(id)arg1 componentList:(id)arg2;
- (void)accessoryNavigationDetached:(id)arg1;
- (void)accessoryNavigationObjectDetection:(id)arg1 componentIdList:(id)arg2 updateInfo:(id)arg3;
- (void)accessoryNavigationStartRouteGuidance:(id)arg1 componentIdList:(id)arg2 options:(unsigned long long)arg3;
- (void)accessoryNavigationStopRouteGuidance:(id)arg1 componentIdList:(id)arg2;
- (void)connectToServer;
- (void)dealloc;
- (id)delegates;
- (id)delegatesImplementing:(SEL)arg1;
- (void)detachAllAccessories;
- (id)initWithDelegate:(id)arg1;
- (void)objectDetection:(id)arg1 startComponentIdList:(id)arg2 objectTypes:(id)arg3;
- (void)objectDetection:(id)arg1 stopComponentIdList:(id)arg2;
- (id)providerUID;
- (id)remoteObject;
- (void)routeGuidance:(id)arg1 laneGuidanceInfo:(id)arg2 componentIdList:(id)arg3;
- (void)routeGuidance:(id)arg1 maneuverUpdateInfo:(id)arg2 componentIdList:(id)arg3;
- (void)routeGuidance:(id)arg1 updateInfo:(id)arg2 componentIdList:(id)arg3;
- (id)serverConnection;
- (void)setAccessories:(id)arg1;
- (void)setDelegates:(id)arg1;
- (void)setProviderUID:(id)arg1;
- (void)setRemoteObject:(id)arg1;
- (void)setServerConnection:(id)arg1;

@end
