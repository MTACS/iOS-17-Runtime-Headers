
@interface AVScrubbingGesturePlatformAdapter : NSObject {
    <AVScrubbingGesturePlatformAdapterDelegate> * _delegate;
    bool  _gestureEnabled;
}

@property (nonatomic) <AVScrubbingGesturePlatformAdapterDelegate> *delegate;
@property (nonatomic, readonly) bool gestureActive;
@property (nonatomic) bool gestureEnabled;
@property (nonatomic, readonly) float timelineVelocity;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } translation;

- (void).cxx_destruct;
- (id)_abstractInit;
- (id)delegate;
- (bool)gestureActive;
- (bool)gestureEnabled;
- (void)setDelegate:(id)arg1;
- (void)setGestureEnabled:(bool)arg1;
- (float)timelineVelocity;
- (struct CGPoint { double x1; double x2; })translation;

@end
