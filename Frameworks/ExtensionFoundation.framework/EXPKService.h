
@interface EXPKService : NSObject <NSXPCListenerDelegate> {
    <EXPKServiceDelegate> * _delegate;
    unsigned int  _extensionPointPlatform;
    NSObject<OS_dispatch_source> * _firstHostRequestTimer;
    bool  _isSystemService;
    NSMutableDictionary * _personalities;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _personalityLock;
    <PKProxyFactory> * _proxyFactory;
    NSXPCListener * _serviceListener;
    bool  _shared;
    PKServicePersonality * _solePersonality;
    NSArray * _subsystems;
    NSObject<OS_dispatch_source> * _terminationTimer;
    NSObject<OS_dispatch_queue> * _timerQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (retain) <EXPKServiceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property unsigned int extensionPointPlatform;
@property (retain) NSObject<OS_dispatch_source> *firstHostRequestTimer;
@property (readonly) unsigned long long hash;
@property bool isSystemService;
@property (retain) NSMutableDictionary *personalities;
@property (readonly) struct os_unfair_lock_s { unsigned int x1; } personalityLock;
@property (nonatomic, readonly) <PKProxyFactory> *proxyFactory;
@property (retain) NSXPCListener *serviceListener;
@property bool shared;
@property (retain) PKServicePersonality *solePersonality;
@property (retain) NSArray *subsystems;
@property (readonly) Class superclass;
@property (retain) NSObject<OS_dispatch_source> *terminationTimer;
@property (readonly) NSObject<OS_dispatch_queue> *timerQueue;

+ (int)_defaultRun:(int)arg1 arguments:(const char **)arg2;
+ (id)defaultService;
+ (void)main;

- (void).cxx_destruct;
- (void)_prepareToRun;
- (bool)_processDefaultSubsystemName:(id)arg1;
- (id)_serviceType;
- (id)_subDictionaryOfSDKWithKey:(id)arg1;
- (id)_subServices;
- (id)_subsystems;
- (id)_xpcServiceDict;
- (void)beganUsingServicePersonality:(id)arg1;
- (void)cancelTermination;
- (void)checkEnvironment:(id)arg1;
- (id)configuredSubsystemList;
- (id)connectionForPlugInNamed:(id)arg1;
- (id)defaultsForPlugInNamed:(id)arg1;
- (id)delegate;
- (id)discoverSubsystemNamed:(id)arg1 options:(id)arg2 required:(bool)arg3;
- (void)discoverSubsystems;
- (id)embeddedPrincipalForPlugInNamed:(id)arg1;
- (unsigned int)extensionPointPlatform;
- (id)firstHostRequestTimer;
- (id)hostPrincipalForPlugInNamed:(id)arg1;
- (id)init;
- (id)initWithProxyFactory:(id)arg1;
- (bool)isSystemService;
- (void)launchContainingApplicationForPlugInNamed:(id)arg1;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)mergeSubsystemList:(id)arg1 from:(id)arg2;
- (void)mergeSubsystems:(id)arg1 from:(id)arg2;
- (id)personalities;
- (struct os_unfair_lock_s { unsigned int x1; })personalityLock;
- (id)personalityNamed:(id)arg1;
- (id)personalityNamed:(id)arg1 forHostPid:(int)arg2;
- (id)plugInPrincipalForPlugInNamed:(id)arg1;
- (id)proxyFactory;
- (void)registerPersonality:(id)arg1;
- (void)run;
- (void)scheduleTermination:(double)arg1;
- (id)serviceListener;
- (void)setDelegate:(id)arg1;
- (void)setExtensionPointPlatform:(unsigned int)arg1;
- (void)setFirstHostRequestTimer:(id)arg1;
- (void)setIsSystemService:(bool)arg1;
- (void)setPersonalities:(id)arg1;
- (void)setServiceListener:(id)arg1;
- (void)setShared:(bool)arg1;
- (void)setSolePersonality:(id)arg1;
- (void)setSubsystems:(id)arg1;
- (void)setTerminationTimer:(id)arg1;
- (bool)shared;
- (id)solePersonality;
- (id)subsystems;
- (bool)supportsAutoreleasePoolDuringPlugInLaunch;
- (id)terminationTimer;
- (id)timerQueue;
- (bool)unregisterPersonality:(id)arg1;

@end
