
@interface HFNetworkRouterItem : HFAccessoryProfileItem <HFAccessoryRepresentableItem>

@property (nonatomic, readonly) <HFAccessoryRepresentable> *accessoryRepresentableObject;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <HFHomeKitObject> *homeKitObject;
@property (nonatomic, readonly) HMNetworkRouterProfile *profile;
@property (readonly) Class superclass;

+ (id)itemWithAccessoryRepresentableObject:(id)arg1 valueSource:(id)arg2;

- (id)_subclass_updateWithOptions:(id)arg1;
- (id)accessoryRepresentableObject;

@end
