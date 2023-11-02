
@interface _PXStoryAnalyticsSessionInfo : NSObject {
    long long  _appSuspensionCount;
    <CPAnalyticsEventProtocol> * _endEvent;
    long long  _pauseCount;
    <CPAnalyticsEventProtocol> * _startEvent;
}

@property (nonatomic, readonly) long long appSuspensionCount;
@property (nonatomic, retain) <CPAnalyticsEventProtocol> *endEvent;
@property (nonatomic, readonly) long long pauseCount;
@property (nonatomic, retain) <CPAnalyticsEventProtocol> *startEvent;

- (void).cxx_destruct;
- (long long)appSuspensionCount;
- (void)didPauseWithEvent:(id)arg1;
- (void)didSuspendAppWithEvent:(id)arg1;
- (id)endEvent;
- (void)finalizeWithEvent:(id)arg1;
- (id)initWithEvent:(id)arg1;
- (long long)pauseCount;
- (void)setEndEvent:(id)arg1;
- (void)setStartEvent:(id)arg1;
- (id)startEvent;

@end
