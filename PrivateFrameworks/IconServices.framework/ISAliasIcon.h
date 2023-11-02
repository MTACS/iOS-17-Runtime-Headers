
@interface ISAliasIcon : ISConcreteIcon {
    id  _alias;
    NSArray * _decorations;
    ISConcreteIcon * _icon;
    ISConcreteIcon * _resolvedIcon;
}

@property (readonly) id alias;
@property (readonly) ISConcreteIcon *icon;
@property (readonly) ISConcreteIcon *resolvedIcon;

+ (id)_iconForBookmarkData:(id)arg1;
+ (id)_iconForValues:(id)arg1;
+ (id)aliasUUID;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)alias;
- (id)decorations;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)icon;
- (id)initWithAliasURL:(id)arg1;
- (id)initWithBookmarkData:(id)arg1;
- (id)initWithBookmarkData:(id)arg1 decorations:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)makeResourceProvider;
- (void)resolve;
- (id)resolvedIcon;

@end
