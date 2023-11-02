
@interface SSUIShowScreenshotServiceRequest : SSUIServiceRequest {
    SSUIServiceOptions * _options;
}

@property (nonatomic, retain) SSUIServiceOptions *options;

+ (id)entitlement;
+ (bool)supportsBSXPCSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (id)initWithBSXPCCoder:(id)arg1;
- (id)options;
- (void)setOptions:(id)arg1;

@end
