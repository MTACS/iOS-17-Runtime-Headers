
@interface SGSearchableItemIdTriple : NSObject <NSCopying> {
    NSString * _bundleId;
    NSString * _domainId;
    NSString * _uniqueId;
}

@property (nonatomic, readonly) NSString *bundleId;
@property (nonatomic, readonly) NSString *domainId;
@property (nonatomic, readonly) NSString *uniqueId;

+ (id)searchableItemIdTripleWithBundleId:(id)arg1 domainId:(id)arg2 uniqueId:(id)arg3;

- (void).cxx_destruct;
- (id)bundleId;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)domainId;
- (unsigned long long)hash;
- (id)init;
- (id)initWithBundleId:(id)arg1 domainId:(id)arg2 uniqueId:(id)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToSearchableItemIdTriple:(id)arg1;
- (id)uniqueId;

@end
