
@interface RPTDirectionalCrownTestParameters : NSObject <RPTTestParameters> {
    bool  _adjustRotationDurationForRevolution;
    id /* block */  _completionHandler;
    long long  _direction;
    double  _rotationDuration;
    double  _screenSpaceMultiplier;
    struct CGSize { 
        double width; 
        double height; 
    }  _scrollingSize;
    NSString * _testName;
}

@property (nonatomic) bool adjustRotationDurationForRevolution;
@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic, readonly, copy) id /* block */ composerBlock;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long direction;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool managesTestStartAndEnd;
@property (nonatomic) double rotationDuration;
@property (nonatomic) double screenSpaceMultiplier;
@property (nonatomic) struct CGSize { double x1; double x2; } scrollingSize;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *testName;

- (void).cxx_destruct;
- (bool)adjustRotationDurationForRevolution;
- (id /* block */)completionHandler;
- (id /* block */)composerBlock;
- (long long)direction;
- (id)initWithTestName:(id)arg1 scrollView:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)initWithTestName:(id)arg1 scrollingSize:(struct CGSize { double x1; double x2; })arg2 screenSpaceMultiplier:(double)arg3 rotationDuration:(double)arg4 direction:(long long)arg5 completionHandler:(id /* block */)arg6;
- (void)prepareWithComposer:(id)arg1;
- (double)rotationDuration;
- (double)screenSpaceMultiplier;
- (struct CGSize { double x1; double x2; })scrollingSize;
- (void)setAdjustRotationDurationForRevolution:(bool)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setDirection:(long long)arg1;
- (void)setRotationDuration:(double)arg1;
- (void)setScreenSpaceMultiplier:(double)arg1;
- (void)setScrollingSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setTestName:(id)arg1;
- (id)testName;

@end
