
@interface ISURLRequestPerformance : NSObject {
    double  _finishTime;
    double  _receivedResponseTime;
    double  _renderBeginTime;
    double  _renderEndTime;
    double  _startTime;
    NSURLResponse * _urlResponse;
}

@property (nonatomic, copy) NSURLResponse *URLResponse;
@property (nonatomic, readonly) double finishInterval;
@property (nonatomic, readonly) double receivedResponseInterval;
@property (nonatomic, readonly) double renderBeginInterval;
@property (nonatomic, readonly) double renderEndInterval;
@property (nonatomic) double startTime;

- (id)URLResponse;
- (void)dealloc;
- (double)finishInterval;
- (double)receivedResponseInterval;
- (double)renderBeginInterval;
- (double)renderEndInterval;
- (void)setFinishTime:(double)arg1;
- (void)setReceivedResponseTime:(double)arg1;
- (void)setRenderBeginTime:(double)arg1;
- (void)setRenderFinishTime:(double)arg1;
- (void)setStartTime:(double)arg1;
- (void)setURLResponse:(id)arg1;
- (double)startTime;

@end
