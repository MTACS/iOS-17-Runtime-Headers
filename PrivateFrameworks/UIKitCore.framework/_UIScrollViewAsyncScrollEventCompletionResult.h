
@interface _UIScrollViewAsyncScrollEventCompletionResult : NSObject {
    bool  _finishedDecelerating;
    bool  _handled;
    double  _lastUpdateTime;
    double  _updateTime;
}

@property (nonatomic) bool finishedDecelerating;
@property (nonatomic) bool handled;
@property (nonatomic) double lastUpdateTime;
@property (nonatomic) double updateTime;

- (bool)finishedDecelerating;
- (bool)handled;
- (double)lastUpdateTime;
- (void)setFinishedDecelerating:(bool)arg1;
- (void)setHandled:(bool)arg1;
- (void)setLastUpdateTime:(double)arg1;
- (void)setUpdateTime:(double)arg1;
- (double)updateTime;

@end
