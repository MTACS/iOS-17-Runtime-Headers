
@interface MapsSuggestionsBlockCondition : MapsSuggestionsBaseCondition {
    id /* block */  _block;
    NSObject<OS_dispatch_queue> * _queue;
}

- (void).cxx_destruct;
- (id)initWithName:(id)arg1 block:(id /* block */)arg2;
- (id)initWithName:(id)arg1 queue:(id)arg2 block:(id /* block */)arg3;
- (bool)isTrue;

@end
