
@interface _EARNgramLmModel2 : _EARLmModel2 {
    struct shared_ptr<quasar::NgramLmModel2> { 
        struct NgramLmModel2 {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _ngramModel;
}

@property (nonatomic, readonly) NSString *arpaFileName;
@property (nonatomic, readonly) struct shared_ptr<quasar::NgramLmModel2> { struct NgramLmModel2 {} *x1; struct __shared_weak_count {} *x2; } ngramModel;

+ (void)initialize;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_initWithModel:(struct shared_ptr<quasar::NgramLmModel2> { struct NgramLmModel2 {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (id)arpaFileName;
- (struct shared_ptr<quasar::NgramLmModel2> { struct NgramLmModel2 {} *x1; struct __shared_weak_count {} *x2; })ngramModel;
- (void)setProtectionClass:(id)arg1;
- (bool)writeToDirectory:(id)arg1;

@end
