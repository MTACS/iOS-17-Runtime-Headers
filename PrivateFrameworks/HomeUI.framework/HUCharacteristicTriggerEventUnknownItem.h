
@interface HUCharacteristicTriggerEventUnknownItem : HFItem <HFServiceVendor>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSSet *services;
@property (readonly) Class superclass;

- (id)accessories;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)services;

@end
