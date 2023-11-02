
@interface HVSpotlightDeletionRequest : NSObject <NSCopying, NSSecureCoding> {
    NSString * _bundleIdentifier;
    _PASDomainSelection * _domainSelection;
    bool  _isPurge;
    NSSet * _uniqueIdentifiers;
}

@property (nonatomic, readonly) NSString *bundleIdentifier;

+ (void)addDeletableContentWithBundleIdentifier:(id)arg1 domainIdentifier:(id)arg2 uniqueIdentifier:(id)arg3 toBloomFilter:(id)arg4;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)accessCriteriaUsingBundleIdentifierBlock:(id /* block */)arg1 domainSelectionBlock:(id /* block */)arg2 incontrovertiblyDeletedUniqueIdentifiersBlock:(id /* block */)arg3 purgedUniqueIdentifiersBlock:(id /* block */)arg4;
- (void)accessCriteriaUsingBundleIdentifierBlock:(id /* block */)arg1 domainSelectionBlock:(id /* block */)arg2 uniqueIdentifiersBlock:(id /* block */)arg3;
- (id)bundleIdentifier;
- (id)copyWithBundleIdentifier:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithBundleIdentifier:(id)arg1;
- (id)initWithBundleIdentifier:(id)arg1 domainSelection:(id)arg2;
- (id)initWithBundleIdentifier:(id)arg1 purgedUniqueIdentifiers:(id)arg2;
- (id)initWithBundleIdentifier:(id)arg1 uniqueIdentifiers:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)matchesBloomFilter:(id)arg1;

@end
