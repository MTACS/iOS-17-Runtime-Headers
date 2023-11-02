
@interface HUNaturalLightingItem : HFTransformItem <HFHomeKitItemProtocol, HFRoomContextProviding> {
    bool  _selected;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HMRoom *hf_parentRoom;
@property (nonatomic, readonly) <HFHomeKitObject> *homeKitObject;
@property (nonatomic, readonly) NSSet *lightProfiles;
@property (nonatomic) bool selected;
@property (readonly) Class superclass;

- (id)_subclass_updateWithOptions:(id)arg1;
- (id)accessory;
- (id)hf_parentRoom;
- (id)homeKitObject;
- (id)initWithSourceItem:(id)arg1 defaultSelected:(bool)arg2;
- (id)lightProfiles;
- (bool)selected;
- (void)setSelected:(bool)arg1;

@end
