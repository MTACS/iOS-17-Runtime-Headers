
@interface SSUIShowScreenshotUIWithImageServiceRequest : SSUIServiceRequest {
    UIImage * _image;
    SSUIServiceOptions * _options;
}

@property (nonatomic, retain) UIImage *image;
@property (nonatomic, retain) SSUIServiceOptions *options;

+ (id)entitlement;
+ (bool)supportsBSXPCSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (id)image;
- (id)initWithBSXPCCoder:(id)arg1;
- (id)options;
- (void)setImage:(id)arg1;
- (void)setOptions:(id)arg1;

@end
