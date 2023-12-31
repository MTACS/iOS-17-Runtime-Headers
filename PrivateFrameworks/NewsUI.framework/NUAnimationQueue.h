
@interface NUAnimationQueue : NSObject {
    NSMutableArray * _queue;
    bool  _running;
}

@property (nonatomic, readonly) NSMutableArray *queue;
@property (getter=isRunning, nonatomic) bool running;

- (void).cxx_destruct;
- (void)addAnimation:(id /* block */)arg1;
- (void)cancel;
- (id)init;
- (bool)isRunning;
- (id)queue;
- (void)runUntilEmpty;
- (void)setRunning:(bool)arg1;

@end
