
@interface AXMProminentObjectsDetectorNode : AXMEvaluationNode {
    VNGenerateAttentionBasedSaliencyImageRequest * __imageSaliencyRequest;
}

@property (nonatomic, retain) VNGenerateAttentionBasedSaliencyImageRequest *_imageSaliencyRequest;

+ (bool)isSupported;
+ (bool)supportsSecureCoding;
+ (id)title;

- (void).cxx_destruct;
- (id)_imageSaliencyRequest;
- (void)encodeWithCoder:(id)arg1;
- (void)evaluate:(id)arg1 metrics:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (void)nodeInitialize;
- (bool)requiresVisionFramework;
- (void)set_imageSaliencyRequest:(id)arg1;
- (bool)validateVisionKitSoftLinkSymbols;

@end
