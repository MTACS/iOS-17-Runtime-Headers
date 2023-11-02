
@interface SSVGratisApplication : NSObject <NSCopying> {
    NSString * _bundleIdentifier;
    NSString * _bundleVersion;
    NSNumber * _externalVersionIdentifier;
    NSString * _itemIdentifier;
}

@property (nonatomic, copy) NSString *bundleIdentifier;
@property (nonatomic, copy) NSString *bundleVersion;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, copy) NSNumber *externalVersionIdentifier;
@property (nonatomic, copy) NSString *itemIdentifier;

- (void).cxx_destruct;
- (id)bundleIdentifier;
- (id)bundleVersion;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (id)externalVersionIdentifier;
- (id)itemIdentifier;
- (void)setBundleIdentifier:(id)arg1;
- (void)setBundleVersion:(id)arg1;
- (void)setExternalVersionIdentifier:(id)arg1;
- (void)setItemIdentifier:(id)arg1;

@end
