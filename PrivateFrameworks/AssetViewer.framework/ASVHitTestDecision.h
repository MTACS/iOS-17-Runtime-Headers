
@interface ASVHitTestDecision : NSObject {
    ASVHitTestResult * _finalResult;
    ASVHitTestResult * _interpolatedOrFinalResult;
    ASVHitTestResult * _interpolatedResult;
    ASVRealHitTestResult * _originalResult;
}

@property (nonatomic, retain) ASVHitTestResult *finalResult;
@property (nonatomic, retain) ASVHitTestResult *interpolatedOrFinalResult;
@property (nonatomic, retain) ASVHitTestResult *interpolatedResult;
@property (nonatomic, retain) ASVRealHitTestResult *originalResult;

- (void).cxx_destruct;
- (id)finalResult;
- (id)initWithOriginalResult:(id)arg1 interpolatedResult:(id)arg2 finalResult:(id)arg3;
- (id)interpolatedOrFinalResult;
- (id)interpolatedResult;
- (id)originalResult;
- (void)setFinalResult:(id)arg1;
- (void)setInterpolatedOrFinalResult:(id)arg1;
- (void)setInterpolatedResult:(id)arg1;
- (void)setOriginalResult:(id)arg1;

@end
