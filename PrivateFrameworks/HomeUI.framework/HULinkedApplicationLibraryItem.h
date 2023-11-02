
@interface HULinkedApplicationLibraryItem : HULinkedApplicationItem <NSCopying> {
    LSApplicationProxy * _applicationProxy;
}

@property (nonatomic, readonly) LSApplicationProxy *applicationProxy;

- (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)applicationProxy;
- (id)bundleIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)initWithApplicationProxy:(id)arg1;
- (id)initWithApplicationProxy:(id)arg1 associatedAccessories:(id)arg2;

@end
