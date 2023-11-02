
@interface AXMHorizonDetectorNode : AXMEvaluationNode {
    VNDetectHorizonRequest * __detectHorizonRequest;
}

@property (setter=_setDetectHorizonRequest:, nonatomic, retain) VNDetectHorizonRequest *_detectHorizonRequest;

+ (bool)isSupported;
+ (bool)supportsSecureCoding;
+ (id)title;

- (void).cxx_destruct;
- (id)_detectHorizonRequest;
- (void)_setDetectHorizonRequest:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)evaluate:(id)arg1 metrics:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (void)nodeInitialize;
- (bool)requiresVisionFramework;
- (bool)validateVisionKitSoftLinkSymbols;

@end
