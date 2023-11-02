
@interface HAPAccessoryServerBrowser : HMFObject <HAPAccessoryServerNotification> {
    <HAPKeyStore> * _keyStore;
    long long  _linkType;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    HAPMetricsDispatcher * _logEvent;
    NSMutableSet * _pairedAccessoryIdentifiers;
    bool  _remoteBrowsingEnabled;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, readonly, copy) NSArray *attributeDescriptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <HAPKeyStore> *keyStore;
@property (nonatomic, readonly) long long linkType;
@property (nonatomic, readonly) HAPMetricsDispatcher *logEvent;
@property (nonatomic, retain) NSMutableSet *pairedAccessoryIdentifiers;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (nonatomic, readonly) bool recommendBrowserReset;
@property (nonatomic) bool remoteBrowsingEnabled;
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *workQueue;

- (void).cxx_destruct;
- (void)deRegisterAccessoryWithIdentifier:(id)arg1;
- (void)discoverAccessoryServerWithIdentifier:(id)arg1;
- (void)indicateNotificationFromServer:(id)arg1 notifyType:(unsigned long long)arg2 withDictionary:(id)arg3;
- (id)initWithQueue:(id)arg1;
- (bool)isPaired:(id)arg1;
- (id)keyStore;
- (long long)linkType;
- (id)logEvent;
- (id)logIdentifier;
- (void)matchAccessoryServerWithSetupID:(id)arg1 serverIdentifier:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)pairedAccessoryIdentifiers;
- (bool)recommendBrowserReset;
- (void)registerPairedAccessoryWithIdentifier:(id)arg1;
- (bool)remoteBrowsingEnabled;
- (void)resetPairedAccessories;
- (void)setDelegate:(id)arg1 queue:(id)arg2;
- (void)setKeyStore:(id)arg1;
- (void)setPairedAccessoryIdentifiers:(id)arg1;
- (void)setRemoteBrowsingEnabled:(bool)arg1;
- (void)setWorkQueue:(id)arg1;
- (void)startConfirmingPairedAccessoryReachability;
- (void)startDiscoveringAccessoryServers;
- (void)stopConfirmingPairedAccessoryReachability;
- (void)stopDiscoveringAccessoryServers;
- (id)workQueue;

@end
