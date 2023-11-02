
@interface _PIVideoStabilizeFlowControl : NSObject <ICFlowControl> {
    id /* block */  _progressHandler;
    double  _rangeMax;
    double  _rangeMin;
    id /* block */  _shouldCancelHandler;
}

@property (nonatomic, copy) id /* block */ progressHandler;
@property (nonatomic) double rangeMax;
@property (nonatomic) double rangeMin;
@property (nonatomic, copy) id /* block */ shouldCancelHandler;

- (void).cxx_destruct;
- (void)ICReportProgress:(float)arg1;
- (bool)ICShouldBeCanceled;
- (id /* block */)progressHandler;
- (double)rangeMax;
- (double)rangeMin;
- (void)setProgressHandler:(id /* block */)arg1;
- (void)setRangeMax:(double)arg1;
- (void)setRangeMin:(double)arg1;
- (void)setShouldCancelHandler:(id /* block */)arg1;
- (id /* block */)shouldCancelHandler;

@end
