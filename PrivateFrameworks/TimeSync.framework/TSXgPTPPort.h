
@interface TSXgPTPPort : TSXAnonymousClient <TSXgPTPPortClientProtocol> {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _clientLock;
    NSPointerArray * _clients;
    unsigned long long  _clockIdentifier;
    NSObject<OS_dispatch_queue> * _internalPropertyUpdateQueue;
    unsigned short  _portNumber;
    int  _portRole;
    int  _portType;
    NSObject<OS_dispatch_queue> * _propertyUpdateQueue;
}

@property (nonatomic) unsigned long long clockIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned short portNumber;
@property (nonatomic) int portRole;
@property (nonatomic) int portType;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *propertyUpdateQueue;
@property (readonly) Class superclass;

+ (id)clientProtocol;
+ (id)frameworkClassNameForDaemonClassName:(id)arg1;
+ (id)gPTPPortWithClockIdentifier:(unsigned long long)arg1 portNumber:(unsigned short)arg2;
+ (id)serverProtocol;
+ (id)xpcClassNameForDaemonClassName:(id)arg1;

- (void).cxx_destruct;
- (void)_updateFromProperties:(id)arg1;
- (void)addConnectionClient:(id)arg1;
- (unsigned long long)clockIdentifier;
- (id)exportedObject;
- (id)initWithEndpoint:(id)arg1;
- (void)interruptedConnection;
- (void)invalidatedConnection;
- (unsigned short)portNumber;
- (int)portRole;
- (int)portType;
- (id)propertyUpdateQueue;
- (void)removeConnectionClient:(id)arg1;
- (void)serviceTerminated;
- (void)setClockIdentifier:(unsigned long long)arg1;
- (void)setPortNumber:(unsigned short)arg1;
- (void)setPortRole:(int)arg1;
- (void)setPortType:(int)arg1;
- (void)setPropertyUpdateQueue:(id)arg1;
- (bool)startAutomaticPropertyUpdates;
- (bool)stopAutomaticPropertyUpdates;
- (void)updateProperties;
- (void)updatedPortProperties:(id)arg1;

@end
