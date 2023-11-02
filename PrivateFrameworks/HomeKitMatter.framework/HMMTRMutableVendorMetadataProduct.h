
@interface HMMTRMutableVendorMetadataProduct : HMMTRVendorMetadataProduct

@property (copy) NSNumber *categoryNumber;
@property (copy) NSNumber *identifier;
@property (copy) NSURL *installationGuideURL;
@property (copy) NSString *model;
@property (copy) NSString *name;

- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
