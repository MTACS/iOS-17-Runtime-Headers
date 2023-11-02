
@interface AXMObjectDetectorNode : AXMEvaluationNode {
    VNRecognizeObjectsRequest * _recognizeObjectsRequest;
}

+ (bool)isSupported;
+ (id)possibleObjectClassifications;
+ (bool)supportsSecureCoding;
+ (id)title;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (void)evaluate:(id)arg1 metrics:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (bool)validateVisionKitSoftLinkSymbols;

@end
