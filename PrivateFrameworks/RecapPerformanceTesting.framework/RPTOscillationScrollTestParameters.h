
@interface RPTOscillationScrollTestParameters : NSObject <RPTTestParameters, _RPTCoordinateSpaces> {
    double  _amplitudeVariationPerIteration;
    id /* block */  _completionHandler;
    RPTCoordinateSpaceConverter * _conversion;
    CAMediaTimingFunction * _curveFunction;
    bool  _finishWithHalfIteration;
    double  _initialAmplitude;
    long long  _initialDirection;
    double  _iterationDuration;
    unsigned long long  _iterations;
    bool  _preventDismissalGestures;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _scrollingBounds;
    bool  _shouldFlick;
    NSString * _testName;
    double  _useDefaultDurationForFlick;
}

@property (nonatomic) double amplitudeVariationPerIteration;
@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic, retain) RPTCoordinateSpaceConverter *conversion;
@property (nonatomic, retain) CAMediaTimingFunction *curveFunction;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool finishWithHalfIteration;
@property (readonly) unsigned long long hash;
@property (nonatomic) double initialAmplitude;
@property (nonatomic) long long initialDirection;
@property (nonatomic) double iterationDuration;
@property (nonatomic) unsigned long long iterations;
@property (nonatomic, readonly) bool managesTestStartAndEnd;
@property (nonatomic) bool preventDismissalGestures;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } scrollingBounds;
@property (nonatomic) bool shouldFlick;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *testName;
@property (nonatomic) double useDefaultDurationForFlick;

- (void).cxx_destruct;
- (struct CGPoint { double x1; double x2; })_incrementPoint:(struct CGPoint { double x1; double x2; })arg1 final:(bool)arg2;
- (double)amplitudeVariationPerIteration;
- (id /* block */)completionHandler;
- (id /* block */)composerBlock;
- (id)conversion;
- (id)curveFunction;
- (struct CGPoint { double x1; double x2; })finalFingerPosition;
- (bool)finishWithHalfIteration;
- (id)initWithTestName:(id)arg1 iterations:(unsigned long long)arg2 scrollingBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 useFlicks:(bool)arg4 preventDismissalGestures:(bool)arg5 initialAmplitude:(double)arg6 amplitudeVariationPerIteration:(double)arg7 initialDirection:(long long)arg8 iterationDuration:(double)arg9 finishWithHalfIteration:(bool)arg10;
- (id)initWithTestName:(id)arg1 iterations:(unsigned long long)arg2 scrollingBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 useFlicks:(bool)arg4 preventDismissalGestures:(bool)arg5 initialAmplitude:(double)arg6 amplitudeVariationPerIteration:(double)arg7 initialDirection:(long long)arg8 iterationDuration:(double)arg9 finishWithHalfIteration:(bool)arg10 completionHandler:(id /* block */)arg11;
- (double)initialAmplitude;
- (long long)initialDirection;
- (struct CGPoint { double x1; double x2; })initialFingerPosition;
- (double)iterationDuration;
- (unsigned long long)iterations;
- (void)prepareWithComposer:(id)arg1;
- (bool)preventDismissalGestures;
- (void)scrollWithComposer:(id)arg1 fromPoint:(struct CGPoint { double x1; double x2; })arg2 toPoint:(struct CGPoint { double x1; double x2; })arg3 duration:(double)arg4;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })scrollingBounds;
- (void)setAmplitudeVariationPerIteration:(double)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setConversion:(id)arg1;
- (void)setCurveFunction:(id)arg1;
- (void)setFinishWithHalfIteration:(bool)arg1;
- (void)setInitialAmplitude:(double)arg1;
- (void)setInitialDirection:(long long)arg1;
- (void)setIterationDuration:(double)arg1;
- (void)setIterations:(unsigned long long)arg1;
- (void)setPreventDismissalGestures:(bool)arg1;
- (void)setScrollingBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setShouldFlick:(bool)arg1;
- (void)setTestName:(id)arg1;
- (void)setUseDefaultDurationForFlick:(double)arg1;
- (bool)shouldFlick;
- (id)testName;
- (double)useDefaultDurationForFlick;

@end
