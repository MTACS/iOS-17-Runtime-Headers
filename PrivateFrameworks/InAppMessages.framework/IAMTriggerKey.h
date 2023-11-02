
@interface IAMTriggerKey : NSObject <NSCopying> {
    NSString * _bundleIdentifier;
    NSString * _name;
}

@property (nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *nameSpacedKeyName;

+ (id)nameSpacedKeyNameForName:(id)arg1 bundleIdentifier:(id)arg2;

- (void).cxx_destruct;
- (id)bundleIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithName:(id)arg1 bundleIdentifier:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)name;
- (id)nameSpacedKeyName;

@end
