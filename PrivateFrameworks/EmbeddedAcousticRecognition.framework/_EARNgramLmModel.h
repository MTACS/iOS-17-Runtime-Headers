
@interface _EARNgramLmModel : _EARLmModel {
    struct shared_ptr<quasar::NgramFstConfig> { 
        struct NgramFstConfig {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _ngramBuildConfig;
    struct shared_ptr<quasar::NgramLmModel2> { 
        struct NgramLmModel2 {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _ngramModel;
}

@property (nonatomic, readonly) NSString *arpaFileName;
@property (nonatomic, readonly) struct shared_ptr<quasar::NgramFstConfig> { struct NgramFstConfig {} *x1; struct __shared_weak_count {} *x2; } ngramBuildConfig;
@property (nonatomic, readonly) struct shared_ptr<quasar::NgramLmModel2> { struct NgramLmModel2 {} *x1; struct __shared_weak_count {} *x2; } ngramModel;

+ (void)initialize;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_initWithModel:(struct shared_ptr<quasar::NgramLmModel2> { struct NgramLmModel2 {} *x1; struct __shared_weak_count {} *x2; })arg1 config:(struct shared_ptr<quasar::NgramFstConfig> { struct NgramFstConfig {} *x1; struct __shared_weak_count {} *x2; })arg2;
- (id)arpaFileName;
- (id)generateNgramCounts:(id)arg1;
- (id)initFromDirectory:(id)arg1;
- (id)initWithConfiguration:(id)arg1;
- (id)initWithConfiguration:(id)arg1 root:(id)arg2;
- (struct shared_ptr<quasar::NgramFstConfig> { struct NgramFstConfig {} *x1; struct __shared_weak_count {} *x2; })ngramBuildConfig;
- (struct shared_ptr<quasar::NgramLmModel2> { struct NgramLmModel2 {} *x1; struct __shared_weak_count {} *x2; })ngramModel;
- (bool)writeToDirectory:(id)arg1;

@end
