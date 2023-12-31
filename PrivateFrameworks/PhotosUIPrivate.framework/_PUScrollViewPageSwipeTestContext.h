
@interface _PUScrollViewPageSwipeTestContext : NSObject {
    long long  _currentDirection;
    long long  _currentIteration;
    long long  _currentPage;
    double  _currentPageSwipeProgress;
    long long  _currentState;
    long long  _numberOfIterations;
    long long  _numberOfPages;
    struct CGPoint { 
        double x; 
        double y; 
    }  _originContentOffset;
    unsigned long long  _scrollAxis;
    NSString * _testName;
}

@property (nonatomic) long long currentDirection;
@property (nonatomic) long long currentIteration;
@property (nonatomic) long long currentPage;
@property (nonatomic) double currentPageSwipeProgress;
@property (nonatomic) long long currentState;
@property (nonatomic) long long numberOfIterations;
@property (nonatomic) long long numberOfPages;
@property (nonatomic) struct CGPoint { double x1; double x2; } originContentOffset;
@property (nonatomic) unsigned long long scrollAxis;
@property (nonatomic, copy) NSString *testName;

- (void).cxx_destruct;
- (long long)currentDirection;
- (long long)currentIteration;
- (long long)currentPage;
- (double)currentPageSwipeProgress;
- (long long)currentState;
- (id)init;
- (long long)numberOfIterations;
- (long long)numberOfPages;
- (struct CGPoint { double x1; double x2; })originContentOffset;
- (unsigned long long)scrollAxis;
- (void)setCurrentDirection:(long long)arg1;
- (void)setCurrentIteration:(long long)arg1;
- (void)setCurrentPage:(long long)arg1;
- (void)setCurrentPageSwipeProgress:(double)arg1;
- (void)setCurrentState:(long long)arg1;
- (void)setNumberOfIterations:(long long)arg1;
- (void)setNumberOfPages:(long long)arg1;
- (void)setOriginContentOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setScrollAxis:(unsigned long long)arg1;
- (void)setTestName:(id)arg1;
- (id)testName;

@end
