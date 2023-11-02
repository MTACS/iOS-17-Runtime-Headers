
@interface AXMImageAestheticsNode : AXMEvaluationNode {
    VNClassifyImageAestheticsRequest * __imageAestheticsRequest;
}

@property (nonatomic, retain) VNClassifyImageAestheticsRequest *_imageAestheticsRequest;

+ (bool)isSupported;
+ (bool)supportsSecureCoding;
+ (id)title;

- (void).cxx_destruct;
- (id)_imageAestheticsRequest;
- (void)encodeWithCoder:(id)arg1;
- (void)evaluate:(id)arg1 metrics:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (void)set_imageAestheticsRequest:(id)arg1;
- (bool)validateVisionKitSoftLinkSymbols;

@end
