
@interface _PXAnalyticsSlideshowInfo : NSObject {
    long long  _appSuspensionCount;
    <CPAnalyticsEventProtocol> * _endEvent;
    <CPAnalyticsEventProtocol> * _lastPauseEvent;
    long long  _pauseCount;
    long long  _signpostID;
    <CPAnalyticsEventProtocol> * _startEvent;
    double  _timePaused;
}

@property (nonatomic) long long appSuspensionCount;
@property (nonatomic, retain) <CPAnalyticsEventProtocol> *endEvent;
@property (nonatomic, readonly) <CPAnalyticsEventProtocol> *lastPauseEvent;
@property (nonatomic, readonly) long long pauseCount;
@property (nonatomic) long long signpostID;
@property (nonatomic, retain) <CPAnalyticsEventProtocol> *startEvent;
@property (nonatomic, readonly) double timePaused;

- (void).cxx_destruct;
- (long long)appSuspensionCount;
- (id)endEvent;
- (id)lastPauseEvent;
- (long long)pauseCount;
- (void)pauseWithEvent:(id)arg1;
- (void)setAppSuspensionCount:(long long)arg1;
- (void)setEndEvent:(id)arg1;
- (void)setSignpostID:(long long)arg1;
- (void)setStartEvent:(id)arg1;
- (long long)signpostID;
- (id)startEvent;
- (double)timePaused;
- (void)unpauseWithEvent:(id)arg1;

@end
