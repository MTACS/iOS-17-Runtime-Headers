
@interface CRKDownloadResourcesResultObject : CATTaskResultObject {
    NSArray * _resourceFileURLs;
}

@property (nonatomic, retain) NSArray *resourceFileURLs;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)resourceFileURLs;
- (void)setResourceFileURLs:(id)arg1;

@end
