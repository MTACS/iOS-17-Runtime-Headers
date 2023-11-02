
@interface RPTPagingScrollTestParameters : NSObject <RPTTestParameters, _RPTCoordinateSpaces> {
    double  _amplitude;
    id /* block */  _completionHandler;
    RPTCoordinateSpaceConverter * _conversion;
    long long  _direction;
    double  _iterationDuration;
    unsigned long long  _iterations;
    long long  _realDirection;
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
    NSString * _testName;
    bool  _useFlicks;
}

@property (nonatomic) double amplitude;
@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic, retain) RPTCoordinateSpaceConverter *conversion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long direction;
@property (readonly) unsigned long long hash;
@property (nonatomic) double iterationDuration;
@property (nonatomic) unsigned long long iterations;
@property (nonatomic, readonly) bool managesTestStartAndEnd;
@property (nonatomic, readonly) long long realDirection;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } scrollingBounds;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *testName;
@property (nonatomic) bool useFlicks;

- (void).cxx_destruct;
- (double)amplitude;
- (id /* block */)completionHandler;
- (id /* block */)composerBlock;
- (id)conversion;
- (long long)direction;
- (id)initWithTestName:(id)arg1 iterations:(unsigned long long)arg2 scrollingBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 amplitude:(double)arg4 direction:(long long)arg5 iterationDuration:(double)arg6 useFlicks:(bool)arg7 completionHandler:(id /* block */)arg8;
- (struct pair<CGPoint, CGPoint> { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; })initialAndFinalPositions;
- (double)iterationDuration;
- (unsigned long long)iterations;
- (void)prepareWithComposer:(id)arg1;
- (long long)realDirection;
- (void)scrollWithComposer:(id)arg1 fromPoint:(struct CGPoint { double x1; double x2; })arg2 toPoint:(struct CGPoint { double x1; double x2; })arg3 duration:(double)arg4;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })scrollingBounds;
- (void)setAmplitude:(double)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setConversion:(id)arg1;
- (void)setDirection:(long long)arg1;
- (void)setIterationDuration:(double)arg1;
- (void)setIterations:(unsigned long long)arg1;
- (void)setScrollingBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setTestName:(id)arg1;
- (void)setUseFlicks:(bool)arg1;
- (id)testName;
- (bool)useFlicks;

@end
