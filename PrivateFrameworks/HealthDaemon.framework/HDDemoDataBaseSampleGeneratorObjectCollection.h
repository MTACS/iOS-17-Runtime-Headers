
@interface HDDemoDataBaseSampleGeneratorObjectCollection : NSObject {
    NSMutableDictionary * _objectUUIDToAssocatedObjectUUIDs;
    NSMutableSet * _objectsFromPhone;
    NSMutableDictionary * _objectsFromPhoneApps;
    NSMutableSet * _objectsFromWatch;
}

- (void).cxx_destruct;
- (void)addObjectFromPhone:(id)arg1;
- (void)addObjectFromWatch:(id)arg1;
- (void)addObjects:(id)arg1 fromPhoneAppWithBundleIdentifier:(id)arg2;
- (void)addObjectsFromPhone:(id)arg1;
- (void)addObjectsFromWatch:(id)arg1;
- (void)enumerateObjectAssociations:(id /* block */)arg1;
- (id)init;
- (id)objectsFromPhone;
- (id)objectsFromPhoneApps;
- (id)objectsFromWatch;
- (void)setAssociatedObjectUUIDs:(id)arg1 forObjectUUID:(id)arg2;

@end
