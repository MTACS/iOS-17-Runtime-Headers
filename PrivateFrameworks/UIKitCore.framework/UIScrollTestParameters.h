
@interface UIScrollTestParameters : NSObject <NSCopying> {
    unsigned long long  _axis;
    id /* block */  _completionBlock;
    double  _delta;
    CADisplayLink * _displayLink;
    id /* block */  _extraResultsBlock;
    long long  _iterations;
    double  _length;
    double  _startOffset;
    NSString * _testName;
}

@property (nonatomic) unsigned long long axis;
@property (nonatomic, copy) id /* block */ completionBlock;
@property (nonatomic) double delta;
@property (nonatomic, retain) CADisplayLink *displayLink;
@property (nonatomic, readonly) double endOffset;
@property (nonatomic, copy) id /* block */ extraResultsBlock;
@property (nonatomic) long long iterations;
@property (nonatomic) double length;
@property (nonatomic) double startOffset;
@property (nonatomic, copy) NSString *testName;

- (void).cxx_destruct;
- (unsigned long long)axis;
- (id /* block */)completionBlock;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (double)delta;
- (id)displayLink;
- (double)endOffset;
- (id /* block */)extraResultsBlock;
- (id)init;
- (long long)iterations;
- (double)length;
- (void)setAxis:(unsigned long long)arg1;
- (void)setCompletionBlock:(id /* block */)arg1;
- (void)setDelta:(double)arg1;
- (void)setDisplayLink:(id)arg1;
- (void)setExtraResultsBlock:(id /* block */)arg1;
- (void)setIterations:(long long)arg1;
- (void)setLength:(double)arg1;
- (void)setStartOffset:(double)arg1;
- (void)setTestName:(id)arg1;
- (double)startOffset;
- (id)testName;

@end
