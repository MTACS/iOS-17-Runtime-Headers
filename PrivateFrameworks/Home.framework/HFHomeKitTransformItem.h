
@interface HFHomeKitTransformItem : HFTransformItem <HFAccessoryVendor, HFHomeKitItemProtocol>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <HFHomeKitObject> *homeKitObject;
@property (nonatomic, readonly) HFItem<HFHomeKitItemProtocol> *sourceHomeKitItem;
@property (readonly) Class superclass;

- (id)accessories;
- (id)homeKitObject;
- (id)sourceHomeKitItem;

@end
