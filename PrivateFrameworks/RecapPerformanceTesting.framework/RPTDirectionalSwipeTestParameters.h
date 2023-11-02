
@interface RPTDirectionalSwipeTestParameters : NSObject <RPTTestParameters> {
    id /* block */  _completionHandler;
    RPTCoordinateSpaceConverter * _conversion;
    long long  _direction;
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
    long long  _swipeCount;
    NSNumber * _swipeSpeedFactor;
    NSString * _testName;
}

@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic, readonly, copy) id /* block */ composerBlock;
@property (nonatomic, retain) RPTCoordinateSpaceConverter *conversion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long direction;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool managesTestStartAndEnd;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } scrollingBounds;
@property (nonatomic) bool shouldFlick;
@property (readonly) Class superclass;
@property (nonatomic) long long swipeCount;
@property (nonatomic, retain) NSNumber *swipeSpeedFactor;
@property (nonatomic, copy) NSString *testName;

- (void).cxx_destruct;
- (id /* block */)completionHandler;
- (id /* block */)composerBlock;
- (id)conversion;
- (long long)direction;
- (id)initWithTestName:(id)arg1 scrollView:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)initWithTestName:(id)arg1 scrollingBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 swipeCount:(long long)arg3 direction:(long long)arg4 completionHandler:(id /* block */)arg5;
- (void)prepareWithComposer:(id)arg1;
- (void)scrollWithComposer:(id)arg1 fromPoint:(struct CGPoint { double x1; double x2; })arg2 toPoint:(struct CGPoint { double x1; double x2; })arg3 speedFactor:(id)arg4;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })scrollingBounds;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setConversion:(id)arg1;
- (void)setDirection:(long long)arg1;
- (void)setScrollingBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setShouldFlick:(bool)arg1;
- (void)setSwipeCount:(long long)arg1;
- (void)setSwipeSpeedFactor:(id)arg1;
- (void)setTestName:(id)arg1;
- (bool)shouldFlick;
- (long long)swipeCount;
- (id)swipeSpeedFactor;
- (id)testName;

@end
