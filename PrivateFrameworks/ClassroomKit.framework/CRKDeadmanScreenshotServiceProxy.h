
@interface CRKDeadmanScreenshotServiceProxy : NSObject <CRKScreenshotServiceInterface> {
    unsigned long long  _countOfInFlightRequests;
    double  _timeout;
    NSTimer * _timer;
    <CRKScreenshotServiceInterface> * _underlyingProxy;
}

@property (nonatomic) unsigned long long countOfInFlightRequests;
@property (nonatomic, readonly) double timeout;
@property (nonatomic, retain) NSTimer *timer;
@property (nonatomic, retain) <CRKScreenshotServiceInterface> *underlyingProxy;

- (void).cxx_destruct;
- (unsigned long long)countOfInFlightRequests;
- (void)dealloc;
- (void)fetchScreenshotDataWithMaximumSizeInPixels:(struct CGSize { double x1; double x2; })arg1 completion:(id /* block */)arg2;
- (id)initWithTimeout:(double)arg1;
- (void)setCountOfInFlightRequests:(unsigned long long)arg1;
- (void)setTimer:(id)arg1;
- (void)setUnderlyingProxy:(id)arg1;
- (void)startTimer;
- (void)stopTimer;
- (double)timeout;
- (id)timer;
- (id)underlyingProxy;

@end
