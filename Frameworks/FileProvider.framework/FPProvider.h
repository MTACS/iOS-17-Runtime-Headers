
@interface FPProvider : FPProviderDomain <NSSecureCoding> {
    NSArray * _supportedSortDescriptors;
    long long  _type;
}

@property (nonatomic, readonly) NSURL *bundleURL;
@property (nonatomic, readonly) NSFileProviderDomain *domain;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *localizedName;
@property (nonatomic, readonly) NSString *providerIdentifier;
@property (nonatomic, readonly) NSURL *storageURL;
@property (nonatomic, readonly) NSArray *supportedSortDescriptors;
@property (nonatomic, readonly) long long type;

+ (id)beginMonitoringProviderChangesWithHandler:(id /* block */)arg1;
+ (void)endMonitoringProviderChanges:(id)arg1;
+ (void)fetchProviderForItem:(id)arg1 completionHandler:(id /* block */)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bundleURL;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)localizedName;
- (id)localizedTitleForSortDescriptor:(id)arg1;
- (id)providerIdentifier;
- (id)storageURL;
- (id)supportedSortDescriptors;
- (long long)type;

@end
