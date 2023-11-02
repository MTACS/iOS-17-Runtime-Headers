
@interface FPDSharedSchedulerExecutor : NSObject {
    id /* block */  _executor;
    bool  _isDone;
}

@property (nonatomic, readonly) id /* block */ executor;
@property (nonatomic) bool isDone;

- (void).cxx_destruct;
- (id /* block */)executor;
- (id)initWithExecutor:(id /* block */)arg1;
- (bool)isDone;
- (void)setIsDone:(bool)arg1;

@end
