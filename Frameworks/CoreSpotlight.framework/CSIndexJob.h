
@interface CSIndexJob : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _bundleIDs;
    NSArray * _excludedBundleIDs;
    NSString * _extensionBundleID;
    NSArray * _fileAttributeSets;
    NSString * _fileType;
    NSArray * _identifiersToReindex;
    NSData * _importData;
    long long  _jobOptions;
    long long  _jobType;
    NSArray * _protectionClasses;
    NSString * _providerIdentifier;
    NSArray * _providerIdentifiers;
    NSString * _providerType;
    CSSearchContext * _searchContext;
}

@property (nonatomic, retain) NSArray *bundleIDs;
@property (nonatomic, retain) NSArray *excludedBundleIDs;
@property (nonatomic, retain) NSString *extensionBundleID;
@property (nonatomic, copy) NSArray *fileAttributeSets;
@property (nonatomic, retain) NSString *fileType;
@property (nonatomic, retain) NSArray *identifiersToReindex;
@property (nonatomic, retain) NSData *importData;
@property (nonatomic) long long jobOptions;
@property (nonatomic) long long jobType;
@property (nonatomic, retain) NSArray *protectionClasses;
@property (nonatomic, retain) NSString *providerIdentifier;
@property (nonatomic, retain) NSArray *providerIdentifiers;
@property (nonatomic, retain) NSString *providerType;
@property (nonatomic, retain) CSSearchContext *searchContext;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bundleIDs;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)excludedBundleIDs;
- (id)extensionBundleID;
- (id)fileAttributeSets;
- (id)fileType;
- (unsigned long long)hash;
- (id)identifiersToReindex;
- (id)importData;
- (id)initWithCoder:(id)arg1;
- (id)initWithJobType:(long long)arg1;
- (id)initWithJobType:(long long)arg1 jobOptions:(long long)arg2;
- (id)initWithXPCDict:(id)arg1;
- (bool)isEqual:(id)arg1;
- (long long)jobOptions;
- (long long)jobType;
- (id)protectionClasses;
- (id)providerIdentifier;
- (id)providerIdentifiers;
- (id)providerType;
- (id)searchContext;
- (void)setBundleIDs:(id)arg1;
- (void)setExcludedBundleIDs:(id)arg1;
- (void)setExtensionBundleID:(id)arg1;
- (void)setFileAttributeSets:(id)arg1;
- (void)setFileType:(id)arg1;
- (void)setIdentifiersToReindex:(id)arg1;
- (void)setImportData:(id)arg1;
- (void)setJobOptions:(long long)arg1;
- (void)setJobType:(long long)arg1;
- (void)setProtectionClasses:(id)arg1;
- (void)setProviderIdentifier:(id)arg1;
- (void)setProviderIdentifiers:(id)arg1;
- (void)setProviderType:(id)arg1;
- (void)setSearchContext:(id)arg1;
- (id)xpc_dictionary;

@end
