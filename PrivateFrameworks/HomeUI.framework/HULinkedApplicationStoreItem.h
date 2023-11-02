
@interface HULinkedApplicationStoreItem : HULinkedApplicationItem <NSCopying> {
    AMSLookupItem * _storeItem;
}

@property (nonatomic, readonly) AMSLookupItem *storeItem;

- (void).cxx_destruct;
- (id)_imageForSize:(struct CGSize { double x1; double x2; })arg1 fromArtwork:(id)arg2;
- (id)_loadStoreIconWithArtwork:(id)arg1;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)bundleIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)initWithStoreItem:(id)arg1;
- (id)initWithStoreItem:(id)arg1 associatedAccessories:(id)arg2;
- (id)storeItem;

@end
