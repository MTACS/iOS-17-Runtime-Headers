
@interface HFPlaceholderItem : HFItem <HFHomeKitItemProtocol> {
    <HFHomeKitObject> * _homeKitObject;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <HFHomeKitObject> *homeKitObject;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)homeKitObject;
- (id)init;
- (id)initWithHomeKitObject:(id)arg1;

@end
