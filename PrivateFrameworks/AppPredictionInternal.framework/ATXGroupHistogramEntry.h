
@interface ATXGroupHistogramEntry : NSObject {
    int  _count;
    double  _score;
}

@property (nonatomic, readonly) int count;
@property (nonatomic, readonly) double score;

- (void)addScore:(double)arg1;
- (int)count;
- (id)initWithScore:(double)arg1;
- (double)score;

@end
