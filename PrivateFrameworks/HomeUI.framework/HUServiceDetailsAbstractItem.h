
@interface HUServiceDetailsAbstractItem : HFItem {
    HMHome * _home;
    HFItem<HFServiceLikeItem> * _sourceServiceItem;
}

@property (nonatomic, retain) HMHome *home;
@property (nonatomic, retain) HFItem<HFServiceLikeItem> *sourceServiceItem;

- (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)arg1;
- (bool)canShowAsIndividualTiles;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)home;
- (id)initWithSourceServiceItem:(id)arg1 home:(id)arg2;
- (bool)isAccessory;
- (bool)isAccessoryDisplayedAsIndividualTiles;
- (bool)isAudioAnalysisSupportedDevice;
- (bool)isBridge;
- (bool)isBridged;
- (bool)isCHIPAccessory;
- (bool)isCamera;
- (bool)isContainedInAParent;
- (bool)isContainedWithinItemGroup;
- (bool)isItemGroup;
- (bool)isMediaAccessory;
- (bool)isMediaAccessoryGroup;
- (bool)isMultiServiceAccessory;
- (bool)isNetworkRouter;
- (bool)isNetworkRouterSatellite;
- (bool)isNotificationSupportedCamera;
- (bool)isSensorService;
- (bool)isService;
- (bool)isVisibleAsBridge;
- (void)setHome:(id)arg1;
- (void)setSourceServiceItem:(id)arg1;
- (id)sourceAccessory;
- (id)sourceServiceItem;

@end
