
@interface TIInlineCompletionGenerator : NSObject {
    struct shared_ptr<TIInlineCompletionGeneratorImpl> { 
        struct TIInlineCompletionGeneratorImpl {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _completionGenerator;
}

@property (nonatomic) struct shared_ptr<TIInlineCompletionGeneratorImpl> { struct TIInlineCompletionGeneratorImpl {} *x1; struct __shared_weak_count {} *x2; } completionGenerator;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)completionForContext:(id)arg1 withPrefix:(id)arg2;
- (struct shared_ptr<TIInlineCompletionGeneratorImpl> { struct TIInlineCompletionGeneratorImpl {} *x1; struct __shared_weak_count {} *x2; })completionGenerator;
- (id)init:(id)arg1;
- (id)initWithLocale:(id)arg1 minWordsPerPrediction:(unsigned long long)arg2 maxWordsPerPrediction:(unsigned long long)arg3;
- (void)registerLearningForCompletion:(id)arg1 fullCompletion:(id)arg2 context:(id)arg3 prefix:(id)arg4 mode:(id)arg5;
- (void)setCompletionGenerator:(struct shared_ptr<TIInlineCompletionGeneratorImpl> { struct TIInlineCompletionGeneratorImpl {} *x1; struct __shared_weak_count {} *x2; })arg1;

@end
