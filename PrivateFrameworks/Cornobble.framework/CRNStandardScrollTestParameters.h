
@interface CRNStandardScrollTestParameters : CRNGroupScrollTestParameters {
    double  _amplitude;
    id /* block */  _completionHandler;
    long long  _direction;
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
}

@property (nonatomic) double amplitude;
@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic) long long direction;
@property (nonatomic) double iterationDuration;
@property (nonatomic) unsigned long long iterations;
@property (nonatomic) bool preventDismissalGestures;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } scrollingBounds;
@property (nonatomic) bool shouldFlick;

+ (id)parametersForTestName:(id)arg1 scrollView:(id)arg2 iterations:(unsigned long long)arg3 amplitude:(double)arg4 direction:(long long)arg5 preventDismissalGestures:(bool)arg6 canUseFlicks:(bool)arg7 completionHandler:(id /* block */)arg8;
+ (id)parametersForTestName:(id)arg1 scrollView:(id)arg2 iterations:(unsigned long long)arg3 direction:(long long)arg4 preventDismissalGestures:(bool)arg5 canUseFlicks:(bool)arg6;
+ (id)parametersForTestName:(id)arg1 scrollView:(id)arg2 iterations:(unsigned long long)arg3 direction:(long long)arg4 preventDismissalGestures:(bool)arg5 canUseFlicks:(bool)arg6 completionHandler:(id /* block */)arg7;
+ (id)parametersForTestName:(id)arg1 scrollView:(id)arg2 iterations:(unsigned long long)arg3 preventDismissalGestures:(bool)arg4 canUseFlicks:(bool)arg5 completionHandler:(id /* block */)arg6;

- (void).cxx_destruct;
- (double)amplitude;
- (id /* block */)completionHandler;
- (id /* block */)composerBlock;
- (long long)direction;
- (id)initWithTestName:(id)arg1 iterations:(unsigned long long)arg2 scrollingBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 amplitude:(double)arg4 direction:(long long)arg5 preventDismissalGestures:(bool)arg6 iterationDuration:(double)arg7 canUseFlicks:(bool)arg8;
- (id)initWithTestName:(id)arg1 iterations:(unsigned long long)arg2 scrollingBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 amplitude:(double)arg4 direction:(long long)arg5 preventDismissalGestures:(bool)arg6 iterationDuration:(double)arg7 canUseFlicks:(bool)arg8 completionHandler:(id /* block */)arg9;
- (double)iterationDuration;
- (unsigned long long)iterations;
- (bool)preventDismissalGestures;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })scrollingBounds;
- (void)setAmplitude:(double)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setDirection:(long long)arg1;
- (void)setIterationDuration:(double)arg1;
- (void)setIterations:(unsigned long long)arg1;
- (void)setPreventDismissalGestures:(bool)arg1;
- (void)setScrollingBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setShouldFlick:(bool)arg1;
- (void)setTestName:(id)arg1;
- (bool)shouldFlick;
- (id)testName;

@end
