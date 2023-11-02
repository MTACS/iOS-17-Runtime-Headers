
@interface _UIGroupCompletion : NSObject {
    NSMutableArray * _completions;
    unsigned long long  _refCount;
}

- (void).cxx_destruct;
- (void)_performAllCompletions;
- (void)addCompletion:(id /* block */)arg1;
- (void)complete;

@end
