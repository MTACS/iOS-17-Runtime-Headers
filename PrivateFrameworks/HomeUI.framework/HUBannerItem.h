
@interface HUBannerItem : HFItem <HFHomeKitItemProtocol, NSCopying> {
    bool  _forceShowBanner;
    HMHome * _home;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool forceShowBanner;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HMHome *home;
@property (nonatomic, readonly) <HFHomeKitObject> *homeKitObject;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)forceShowBanner;
- (id)home;
- (id)homeKitObject;
- (id)init;
- (id)initWithHome:(id)arg1;
- (void)setForceShowBanner:(bool)arg1;

@end
