
@interface WFPHAssetCollectionDescriptor : MTLModel <NSSecureCoding> {
    NSString * _localIdentifier;
    NSString * _localizedTitle;
}

@property (nonatomic, readonly, copy) NSString *localIdentifier;
@property (nonatomic, readonly, copy) NSString *localizedTitle;

+ (id)JSONKeyPathsByPropertyKey;
+ (unsigned long long)storageBehaviorForPropertyWithKey:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithLocalIdentifier:(id)arg1 localizedTitle:(id)arg2;
- (id)localIdentifier;
- (id)localizedTitle;

@end
