
@interface AXThreadTimerTask : NSObject {
    id /* block */  _block;
    bool  active;
    bool  cancel;
    bool  finished;
}

@property (getter=isActive, nonatomic) bool active;
@property (nonatomic, copy) id /* block */ block;
@property (getter=isCancelled, nonatomic) bool cancel;
@property (getter=isFinished, nonatomic) bool finished;

- (void).cxx_destruct;
- (id /* block */)block;
- (bool)isActive;
- (bool)isCancelled;
- (bool)isFinished;
- (void)run;
- (void)runAfterDelay:(float)arg1;
- (void)setActive:(bool)arg1;
- (void)setBlock:(id /* block */)arg1;
- (void)setCancel:(bool)arg1;
- (void)setFinished:(bool)arg1;

@end
