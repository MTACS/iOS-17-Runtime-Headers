
@interface RPTScrollViewTestParameters : NSObject <RPTTestParameters> {
    double  _amplitudeFactor;
    id /* block */  _completionHandler;
    RPTCoordinateSpaceConverter * _conversion;
    CAMediaTimingFunction * _curveFunction;
    long long  _direction;
    unsigned long long  _forceMaxVersion;
    unsigned long long  _forceMinVersion;
    double  _iterationDurationFactor;
    bool  _preventSheetDismissal;
    UIScrollView * _scrollView;
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
    double  _scrollingContentLength;
    bool  _shouldFlick;
    NSString * _testName;
}

@property (nonatomic) double amplitude;
@property (nonatomic) double amplitudeFactor;
@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic, readonly, copy) id /* block */ composerBlock;
@property (nonatomic, retain) RPTCoordinateSpaceConverter *conversion;
@property (nonatomic, retain) CAMediaTimingFunction *curveFunction;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long direction;
@property (nonatomic, readonly) unsigned long long effectiveVersion;
@property (nonatomic) unsigned long long forceMaxVersion;
@property (nonatomic) unsigned long long forceMinVersion;
@property (readonly) unsigned long long hash;
@property (nonatomic) double iterationDurationFactor;
@property (nonatomic, readonly) bool managesTestStartAndEnd;
@property (nonatomic) bool preventSheetDismissal;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } scrollingBounds;
@property (nonatomic) double scrollingContentLength;
@property (nonatomic) bool shouldFlick;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *testName;

+ (id)newWithTestName:(id)arg1 scrollBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 amplitude:(double)arg3 direction:(long long)arg4 completionHandler:(id /* block */)arg5;
+ (id)newWithTestName:(id)arg1 scrollView:(id)arg2 completionHandler:(id /* block */)arg3;

- (void).cxx_destruct;
- (double)_effectiveAmplitudeFactor;
- (id /* block */)_v1_composerBlock;
- (id /* block */)_v2_composerBlock;
- (id /* block */)_v3_4_composerBlock;
- (double)amplitude;
- (double)amplitudeFactor;
- (id /* block */)completionHandler;
- (id /* block */)composerBlock;
- (id)conversion;
- (id)curveFunction;
- (long long)direction;
- (unsigned long long)effectiveVersion;
- (unsigned long long)forceMaxVersion;
- (unsigned long long)forceMinVersion;
- (id)initWithTestName:(id)arg1 scrollBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 amplitude:(double)arg3 direction:(long long)arg4 completionHandler:(id /* block */)arg5;
- (id)initWithTestName:(id)arg1 scrollBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 scrollContentLength:(double)arg3 direction:(long long)arg4 completionHandler:(id /* block */)arg5;
- (id)initWithTestName:(id)arg1 scrollView:(id)arg2 completionHandler:(id /* block */)arg3;
- (double)iterationDurationFactor;
- (void)prepareWithComposer:(id)arg1;
- (bool)preventSheetDismissal;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })scrollingBounds;
- (double)scrollingContentLength;
- (void)setAmplitude:(double)arg1;
- (void)setAmplitudeFactor:(double)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setConversion:(id)arg1;
- (void)setCurveFunction:(id)arg1;
- (void)setDirection:(long long)arg1;
- (void)setForceMaxVersion:(unsigned long long)arg1;
- (void)setForceMinVersion:(unsigned long long)arg1;
- (void)setIterationDurationFactor:(double)arg1;
- (void)setPreventSheetDismissal:(bool)arg1;
- (void)setScrollingBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setScrollingContentLength:(double)arg1;
- (void)setShouldFlick:(bool)arg1;
- (void)setTestName:(id)arg1;
- (bool)shouldFlick;
- (id)testName;
- (void)waitForPostEventStreamDelayWithHandler:(id /* block */)arg1;

@end
