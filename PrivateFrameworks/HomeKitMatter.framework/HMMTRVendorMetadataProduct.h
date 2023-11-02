
@interface HMMTRVendorMetadataProduct : HMFObject <NSCopying, NSMutableCopying> {
    NSNumber * _categoryNumber;
    NSNumber * _identifier;
    NSURL * _installationGuideURL;
    NSString * _model;
    NSString * _name;
}

@property (copy) NSNumber *categoryNumber;
@property (readonly, copy) NSDictionary *dictionaryRepresentation;
@property (copy) NSNumber *identifier;
@property (copy) NSURL *installationGuideURL;
@property (copy) NSString *model;
@property (copy) NSString *name;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)categoryNumber;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 categoryNumber:(id)arg2;
- (id)initWithIdentifier:(id)arg1 dictionaryRepresentation:(id)arg2;
- (id)installationGuideURL;
- (bool)isEqual:(id)arg1;
- (id)model;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)name;
- (void)setCategoryNumber:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setInstallationGuideURL:(id)arg1;
- (void)setModel:(id)arg1;
- (void)setName:(id)arg1;

@end
