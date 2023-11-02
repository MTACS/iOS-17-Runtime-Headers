
@interface ICQLinkInAppAction : ICQInAppAction <ICQUpgradeFlowManagerDelegate, NSSecureCoding> {
    ICQUpgradeFlowManager * _flowManager;
    ICQLink * _link;
    ICQOffer * _offer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) ICQUpgradeFlowManager *flowManager;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) ICQLink *link;
@property (nonatomic, retain) ICQOffer *offer;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_launchFlowManagerWithContext:(id)arg1;
- (id)_linkURLWithContext:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)flowManager;
- (id)initWithCoder:(id)arg1;
- (id)initWithLink:(id)arg1;
- (id)initWithLink:(id)arg1 inOffer:(id)arg2;
- (id)link;
- (id)offer;
- (void)performActionWithContext:(id)arg1;
- (void)setFlowManager:(id)arg1;
- (void)setLink:(id)arg1;
- (void)setOffer:(id)arg1;
- (void)upgradeFlowManagerDidCancel:(id)arg1;
- (void)upgradeFlowManagerDidComplete:(id)arg1;

@end
