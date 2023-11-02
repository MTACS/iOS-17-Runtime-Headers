
@interface NWNetworkAgentRegistration : NSObject {
    NSObject<NWNetworkAgent> * _networkAgent;
    Class  _networkAgentClass;
    NSObject<OS_dispatch_queue> * _queue;
    NSObject<OS_dispatch_source> * _readSource;
    NSUUID * _registeredUUID;
    int  _registrationSocket;
}

@property (retain) NSObject<NWNetworkAgent> *networkAgent;
@property Class networkAgentClass;
@property (retain) NSObject<OS_dispatch_queue> *queue;
@property (retain) NSObject<OS_dispatch_source> *readSource;
@property (getter=isRegistered, nonatomic, readonly) bool registered;
@property (retain) NSUUID *registeredUUID;
@property int registrationSocket;
@property (nonatomic, readonly) unsigned int tokenCount;
@property (nonatomic) unsigned long long useCount;

+ (bool)addActiveAssertionToNetworkAgent:(id)arg1;
+ (int)newRegistrationFileDescriptor;
+ (bool)removeActiveAssertionFromNetworkAgent:(id)arg1;
+ (bool)useNetworkAgent:(id)arg1 returnUseCount:(unsigned long long*)arg2;

- (void).cxx_destruct;
- (bool)addNetworkAgentToInterfaceNamed:(id)arg1;
- (bool)addToken:(id)arg1;
- (bool)assignDiscoveredEndpoints:(id)arg1 toClient:(id)arg2;
- (bool)assignNexusData:(id)arg1 toClient:(id)arg2;
- (bool)assignResolvedEndpoints:(id)arg1 toClient:(id)arg2;
- (bool)createReadSourceWithRegistrationSocket:(int)arg1;
- (void)dealloc;
- (id)description;
- (id)descriptionWithIndent:(int)arg1 showFullContent:(bool)arg2;
- (int)dupRegistrationFileDescriptor;
- (bool)flushTokens;
- (void)handleMessageFromAgent;
- (id)initWithNetworkAgentClass:(Class)arg1;
- (id)initWithNetworkAgentClass:(Class)arg1 queue:(id)arg2;
- (bool)isRegistered;
- (id)networkAgent;
- (Class)networkAgentClass;
- (id)queue;
- (id)readSource;
- (bool)registerNetworkAgent:(id)arg1;
- (bool)registerNetworkAgent:(id)arg1 withFileDescriptor:(int)arg2;
- (id)registeredUUID;
- (int)registrationSocket;
- (bool)removeNetworkAgentFromInterfaceNamed:(id)arg1;
- (bool)resetError;
- (bool)setLowWaterMark:(unsigned int)arg1;
- (void)setNetworkAgent:(id)arg1;
- (void)setNetworkAgentClass:(Class)arg1;
- (void)setQueue:(id)arg1;
- (void)setReadSource:(id)arg1;
- (bool)setRegisteredNetworkAgent:(id)arg1 fileDescriptor:(int)arg2;
- (void)setRegisteredUUID:(id)arg1;
- (void)setRegistrationSocket:(int)arg1;
- (void)setUseCount:(unsigned long long)arg1;
- (unsigned int)tokenCount;
- (bool)unregisterNetworkAgent;
- (bool)updateNetworkAgent:(id)arg1;
- (unsigned long long)useCount;

@end
