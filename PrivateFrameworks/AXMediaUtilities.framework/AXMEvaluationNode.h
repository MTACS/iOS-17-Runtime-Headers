
@interface AXMEvaluationNode : AXMVisionEngineNode <NSSecureCoding> {
    unsigned long long  _effectivePriority;
    double  _minimumConfidence;
    unsigned long long  _priority;
}

@property (nonatomic) unsigned long long effectivePriority;
@property (nonatomic) double minimumConfidence;
@property (nonatomic) unsigned long long priority;

+ (void)configureForRunningOnANEIfPossibleWithRequest:(id)arg1;
+ (unsigned long long)defaultPriority;
+ (bool)isANEDeviceAvailable;
+ (struct CGSize { double x1; double x2; })preferredModelInputSize;
+ (bool)supportsSecureCoding;

- (id)_diagnosticNameForRequests:(id)arg1 metrics:(id)arg2;
- (void)boostEffectivePriority;
- (unsigned long long)effectivePriority;
- (void)encodeWithCoder:(id)arg1;
- (void)evaluate:(id)arg1 metrics:(id)arg2;
- (bool)evaluateRequests:(id)arg1 withContext:(id)arg2 requestHandlerOptions:(id)arg3 metrics:(id)arg4 error:(id*)arg5;
- (id)initWithCoder:(id)arg1;
- (double)minimumConfidence;
- (void)nodeInitialize;
- (unsigned long long)priority;
- (void)resetEffectivePriority;
- (void)setEffectivePriority:(unsigned long long)arg1;
- (void)setMinimumConfidence:(double)arg1;
- (void)setPriority:(unsigned long long)arg1;
- (bool)shouldEvaluate:(id)arg1;
- (bool)validateVisionKitSoftLinkSymbols;

@end
