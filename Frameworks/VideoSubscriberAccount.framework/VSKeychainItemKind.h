
@interface VSKeychainItemKind : NSObject <NSCopying> {
    NSString * _itemClassName;
    NSArray * _properties;
    struct __CFString { } * _secItemClass;
}

@property (nonatomic, readonly, copy) NSDictionary *attributesByName;
@property (nonatomic, readonly, copy) NSDictionary *attributesBySecItemAttributeKey;
@property (nonatomic, copy) NSString *itemClassName;
@property (nonatomic, copy) NSArray *properties;
@property (nonatomic) struct __CFString { }*secItemClass;

- (void).cxx_destruct;
- (id)attributesByName;
- (id)attributesBySecItemAttributeKey;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)init;
- (id)itemClassName;
- (id)properties;
- (struct __CFString { }*)secItemClass;
- (void)setItemClassName:(id)arg1;
- (void)setProperties:(id)arg1;
- (void)setSecItemClass:(struct __CFString { }*)arg1;

@end
