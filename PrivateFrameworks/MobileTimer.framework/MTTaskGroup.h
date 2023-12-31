
@interface MTTaskGroup : NSObject {
    id /* block */  _completionBlock;
    NSArray * _tasks;
}

@property (nonatomic, copy) id /* block */ completionBlock;
@property (nonatomic, copy) NSArray *tasks;

+ (id)taskGroupWithTasks:(id)arg1 completionBlock:(id /* block */)arg2;

- (void).cxx_destruct;
- (id /* block */)completionBlock;
- (id)description;
- (void)setCompletionBlock:(id /* block */)arg1;
- (void)setTasks:(id)arg1;
- (id)tasks;

@end
