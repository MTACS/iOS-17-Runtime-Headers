
@interface CRKDownloadResourcesRequest : CATTaskRequest {
    DMFControlGroupIdentifier * _courseIdentifier;
    bool  _openAfterDownloadCompletes;
    NSData * _previewImageData;
    NSArray * _resources;
    NSString * _resourcesDescription;
    NSString * _sourceBundleIdentifier;
}

@property (nonatomic, copy) DMFControlGroupIdentifier *courseIdentifier;
@property (nonatomic) bool openAfterDownloadCompletes;
@property (nonatomic, retain) NSData *previewImageData;
@property (nonatomic, copy) NSArray *resources;
@property (nonatomic, copy) NSString *resourcesDescription;
@property (nonatomic, copy) NSString *sourceBundleIdentifier;

+ (Class)allowlistedClassForResultObject;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)courseIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)openAfterDownloadCompletes;
- (id)previewImageData;
- (id)resources;
- (id)resourcesDescription;
- (void)setCourseIdentifier:(id)arg1;
- (void)setOpenAfterDownloadCompletes:(bool)arg1;
- (void)setPreviewImageData:(id)arg1;
- (void)setResources:(id)arg1;
- (void)setResourcesDescription:(id)arg1;
- (void)setSourceBundleIdentifier:(id)arg1;
- (id)sourceBundleIdentifier;

@end
