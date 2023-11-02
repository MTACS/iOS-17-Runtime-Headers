
@interface HULinkedApplicationInternalStoreItem : HULinkedApplicationItem <NSCopying> {
    NSString * _bundleIdentifier;
}

- (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)bundleIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithBundleIdentifier:(id)arg1;
- (id)initWithBundleIdentifier:(id)arg1 associatedAccessories:(id)arg2;

@end
