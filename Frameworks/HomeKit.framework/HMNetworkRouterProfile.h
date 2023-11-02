
@interface HMNetworkRouterProfile : HMAccessoryProfile <_HMNetworkRouterProfileDelegate> {
    <HMNetworkRouterProfileDelegate> * _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property <HMNetworkRouterProfileDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool hf_isCableOrSatelliteNotConnected;
@property (nonatomic, readonly) bool hf_isConnected;
@property (nonatomic, readonly) bool hf_isReady;
@property (nonatomic, readonly) bool hf_isStatusKnown;
@property (nonatomic, readonly, copy) NSString *hf_statusLocalizedDescription;
@property (readonly) unsigned long long networkStatus;
@property (getter=isSatellite, readonly) bool satellite;
@property (readonly) NSArray *satelliteProfiles;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/HomeKit.framework/HomeKit

- (void).cxx_destruct;
- (id)delegate;
- (id)description;
- (id)identifiersForSatelliteProfiles;
- (id)initWithNetworkRouterProfile:(id)arg1;
- (bool)isSatellite;
- (bool)mergeFromNewObject:(id)arg1;
- (id)networkRouterProfile;
- (unsigned long long)networkStatus;
- (void)routerProfileDidUpdateIdentifiersForSatellites:(id)arg1;
- (void)routerProfileDidUpdateNetworkStatus:(id)arg1;
- (id)satelliteProfiles;
- (id)services;
- (void)setDelegate:(id)arg1;
- (void)setIdentifiersForSatelliteProfiles:(id)arg1;

// Image: /System/Library/PrivateFrameworks/Home.framework/Home

- (id)hf_iconDescriptor;
- (bool)hf_isCableOrSatelliteNotConnected;
- (bool)hf_isConnected;
- (bool)hf_isReady;
- (bool)hf_isStatusKnown;
- (Class)hf_itemClass;
- (id)hf_rootAccessoryLikeHomeKitObject;
- (id)hf_statusLocalizedDescription;

@end
