
@interface ICQUIOutOfProcessUpgradeFlowManager : NSObject {
    <ICQUpgradeFlowManagerDelegate> * _delegate;
    ICQUpgradeFlowManager * _flowManager;
    ICQUpgradeFlowOptions * _flowOptions;
    bool  _isPresented;
    ICQLink * _link;
    ICQRemoteUIDataLoader * _loader;
    ICQOffer * _offer;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _presentationLock;
    NSString * _presentingSceneBundleIdentifier;
    NSString * _presentingSceneIdentifier;
    ICQRemoteContext * _remoteContext;
}

@property (nonatomic) <ICQUpgradeFlowManagerDelegate> *delegate;
@property (nonatomic) ICQUpgradeFlowManager *flowManager;
@property (nonatomic, copy) ICQUpgradeFlowOptions *flowOptions;
@property (nonatomic) bool isPresented;
@property (nonatomic, retain) ICQLink *link;
@property (nonatomic, retain) ICQRemoteUIDataLoader *loader;
@property (nonatomic, retain) ICQOffer *offer;
@property (nonatomic, copy) NSString *presentingSceneBundleIdentifier;
@property (nonatomic, copy) NSString *presentingSceneIdentifier;
@property (nonatomic, retain) ICQRemoteContext *remoteContext;

+ (id)sharedManager;

- (void).cxx_destruct;
- (void)_beginExtensionKitFlowWithViewController:(id)arg1;
- (void)_beginSBRemoteAlertFlow;
- (bool)_canUseExtensionKitForURL:(id)arg1;
- (void)_clearServerUIURL;
- (bool)_isDefaultOfferFlow:(id)arg1;
- (id)_rootViewController;
- (void)_startUpsellWithOffer:(id)arg1 link:(id)arg2 preloadedRemoteUIData:(id)arg3 error:(id)arg4;
- (id)_topMostPresentingViewController;
- (void)beginFlowWithViewController:(id)arg1;
- (id)delegate;
- (id)flowManager;
- (id)flowOptions;
- (id)init;
- (bool)isPresented;
- (id)link;
- (id)loader;
- (id)offer;
- (id)presentingSceneBundleIdentifier;
- (id)presentingSceneIdentifier;
- (id)remoteContext;
- (void)setDelegate:(id)arg1;
- (void)setFlowManager:(id)arg1;
- (void)setFlowOptions:(id)arg1;
- (void)setIsPresented:(bool)arg1;
- (void)setLink:(id)arg1;
- (void)setLoader:(id)arg1;
- (void)setOffer:(id)arg1;
- (void)setPresentingSceneBundleIdentifier:(id)arg1;
- (void)setPresentingSceneIdentifier:(id)arg1;
- (void)setRemoteContext:(id)arg1;

@end
