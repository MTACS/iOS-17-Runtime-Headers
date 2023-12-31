
@interface PMLSpotlightReference : NSObject {
    NSString * _bundleIdentifier;
    NSString * _domainIdentifier;
    NSArray * _itemIdentifiers;
}

@property (nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic, readonly) NSString *domainIdentifier;
@property (nonatomic, readonly) NSArray *itemIdentifiers;

+ (id)referenceWithBundleId:(id)arg1 domainId:(id)arg2 itemIds:(id)arg3;

- (void).cxx_destruct;
- (id)bundleIdentifier;
- (id)domainIdentifier;
- (id)initWithBundleId:(id)arg1 domainId:(id)arg2 itemIds:(id)arg3;
- (id)itemIdentifiers;

@end
