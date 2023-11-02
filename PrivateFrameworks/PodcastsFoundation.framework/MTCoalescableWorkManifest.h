
@interface MTCoalescableWorkManifest : NSObject {
    NSArray * _completions;
    id /* block */  _workBlock;
}

@property (nonatomic, retain) NSArray *completions;
@property (nonatomic, copy) id /* block */ workBlock;

- (void).cxx_destruct;
- (id)completions;
- (id)description;
- (id)initWithWorkBlock:(id /* block */)arg1 completion:(id /* block */)arg2;
- (id)initWithWorkBlock:(id /* block */)arg1 completions:(id)arg2;
- (id)manifestByReplacingWorkBlock:(id /* block */)arg1 appendingCompletion:(id /* block */)arg2;
- (void)setCompletions:(id)arg1;
- (void)setWorkBlock:(id /* block */)arg1;
- (id /* block */)workBlock;

@end
