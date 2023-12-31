
@interface _UIActiveTimer : NSObject {
    CADisplayLink * _displayLink;
    id /* block */  _updateHandler;
}

@property (getter=isComplete, nonatomic, readonly) bool complete;

- (void).cxx_destruct;
- (void)_tick:(id)arg1;
- (id)initWithDuration:(double)arg1 updateHandler:(id /* block */)arg2;
- (void)invalidate;
- (bool)isComplete;

@end
