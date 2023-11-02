
@interface _EARLmEvaluator : NSObject {
    struct shared_ptr<quasar::LmEvaluator> { 
        struct LmEvaluator {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _evaluator;
    bool  _roundingEnabled;
}

@property (nonatomic) bool roundingEnabled;

+ (void)initialize;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithConfiguration:(id)arg1 recognizerConfiguration:(id)arg2;
- (id)initWithConfiguration:(id)arg1 root:(id)arg2 recognizerConfiguration:(id)arg3;
- (bool)roundingEnabled;
- (bool)runEvaluationWithData:(id)arg1 handle:(id)arg2 result:(id*)arg3;
- (bool)runEvaluationWithData:(id)arg1 handle:(id)arg2 result:(id*)arg3 bestWeight:(float*)arg4;
- (bool)runEvaluationWithData:(id)arg1 handle:(id)arg2 shouldStop:(id /* block */)arg3 result:(id*)arg4 bestWeight:(float*)arg5;
- (void)setRoundingEnabled:(bool)arg1;

@end
