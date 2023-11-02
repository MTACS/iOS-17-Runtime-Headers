
@interface AXMSignificantEventDetectorNode : AXMEvaluationNode {
    VN6Mb1ME89lyW3HpahkEygIG * _request;
}

+ (bool)addSignificantEventResultToContext:(id)arg1 forIdentifier:(id)arg2 confidence:(double)arg3 markAsSensitiveCaptionContent:(bool)arg4;
+ (bool)isSupported;
+ (bool)supportsSecureCoding;
+ (id)title;

- (void).cxx_destruct;
- (void)evaluate:(id)arg1 metrics:(id)arg2;
- (bool)validateVisionKitSoftLinkSymbols;

@end
