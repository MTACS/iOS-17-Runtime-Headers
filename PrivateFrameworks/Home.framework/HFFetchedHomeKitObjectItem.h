
@interface HFFetchedHomeKitObjectItem : HFItem <HFHomeKitItemProtocol> {
    <HFHomeKitObject> * _homeKitObject;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <HFHomeKitObject> *homeKitObject;
@property (readonly) Class superclass;

+ (bool)alwaysPerformFullFetch;

- (void).cxx_destruct;
- (id)_homeKitObjectFetch;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)homeKitObject;
- (id)initWithHomeKitObject:(id)arg1;
- (void)setHomeKitObject:(id)arg1;

@end
