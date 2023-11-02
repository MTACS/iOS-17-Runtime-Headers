
@interface CNUICoreContactsAuthorizationModel : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _items;
}

@property (nonatomic, readonly) NSArray *bundleIdentifiers;
@property (nonatomic, readonly) NSArray *changedItems;
@property (nonatomic, readonly) bool isEmpty;
@property (nonatomic, readonly) NSArray *items;
@property (nonatomic, readonly) NSArray *remoteItems;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bundleIdentifiers;
- (id)changedItems;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithItems:(id)arg1;
- (bool)isEmpty;
- (bool)isEqual:(id)arg1;
- (id)itemWithMatchingBundleIdentifier:(id)arg1;
- (id)items;
- (id)modelByCopyingIconsOfRemoteItemsFromModel:(id)arg1;
- (id)modelByCopyingItemsWithBundleIdentifier:(id)arg1;
- (id)remoteItems;

@end
