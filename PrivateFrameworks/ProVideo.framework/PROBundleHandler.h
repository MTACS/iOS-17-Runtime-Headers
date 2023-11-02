
@interface PROBundleHandler : NSObject <PROAPIAccessing, PROPlugInDelegate, PROPlugInFirewallErrorHandler> {
    PROPlugInFirewall * apiAccessPoint;
    <PROVersionedAPIAccess> * apiManager;
    NSBundle * bundle;
    struct { 
        unsigned int canCreateInstances : 1; 
        unsigned int askedAboutCreatingInstances : 1; 
        unsigned int shouldBeLoaded : 1; 
        unsigned int  : 29; 
    }  bundleFlags;
    id /* block */  deferralCompletionBlock;
    bool  deferred;
    <PROBundleHandlerDelegate> * delegate;
    NSMutableDictionary * groups;
    NSMutableArray * plugIns;
    <PKPlugIn> * pluginKitPlug;
    <PROPlugInRegistering> * principalClassInstance;
    NSArray * requestedProtocols;
    <PROPluginDynamicRegCompletion> * setupCallbackObject;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (bool)_plugInHasReservedUUID:(id)arg1;
- (void)addPlugIn:(id)arg1;
- (id)apiForProtocol:(id)arg1;
- (id)apiManager;
- (id)apiManagerForPlugInInstances;
- (void)completeRegistrationWithGroups:(id*)arg1 plugIns:(id*)arg2 requestedProtocols:(id*)arg3;
- (void)dealloc;
- (id)delegate;
- (bool)dynamicPluginRequestedProtocolArray:(id*)arg1 groupArray:(id*)arg2 plugInArray:(id*)arg3 actuallyLoad:(bool)arg4;
- (void)finishRegisteringPlugIns:(bool)arg1;
- (id)getBundle;
- (id)groupsDictionary;
- (id)initWithBundle:(id)arg1;
- (id)initWithBundle:(id)arg1 actuallyLoad:(bool)arg2;
- (bool)isDeferred;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToBundleHandler:(id)arg1;
- (bool)isPrincipalClassAvailable;
- (void)loadDeferredPlugins;
- (bool)loadingInProMSRendererTool;
- (void)notifyDeferralComplete;
- (void)plugIn:(id)arg1 didError:(id)arg2;
- (void)plugInCouldNotInitialize:(id)arg1;
- (void)plugInFirewall:(id)arg1 receivedBadMessage:(SEL)arg2;
- (id)plugInGroupWithUUID:(struct __CFUUID { }*)arg1;
- (bool)plugInShouldLoadPlugInInstanceForTheFirstTime:(id)arg1;
- (id)plugIns;
- (id)pluginKitPlug;
- (id)principalClassInstance;
- (void)registerAndLoadPlugIns:(bool)arg1;
- (void)registerDynamicPlugInsAsynch:(id)arg1;
- (void)registerPlugIns;
- (void)reportError:(id)arg1;
- (void)setAPIManager:(id)arg1;
- (void)setDeferralNotification:(id /* block */)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPluginKitPlug:(id)arg1;
- (void)setRegistrationCallbackObject:(id)arg1;
- (bool)shouldDeferLoading;

@end
