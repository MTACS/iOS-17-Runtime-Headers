
@interface HFServiceLikeTransformItem : HFHomeKitTransformItem <HFActionBuilderFactory, HFServiceVendor>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSSet *services;
@property (nonatomic, readonly) HFItem<HFHomeKitItemProtocol><HFServiceVendor><HFActionBuilderFactory> *sourceServicePickerItem;
@property (readonly) Class superclass;

- (id)accessories;
- (bool)actionsMayRequireDeviceUnlock;
- (bool)containsActions;
- (id)currentStateActionBuildersForHome:(id)arg1;
- (id)services;
- (id)sourceServicePickerItem;

@end
