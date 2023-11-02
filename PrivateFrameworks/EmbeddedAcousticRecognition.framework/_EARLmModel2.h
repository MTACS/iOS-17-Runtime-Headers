
@interface _EARLmModel2 : _EARLmHandle {
    struct shared_ptr<quasar::LmModel2> { 
        struct LmModel2 {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _model;
}

@property (nonatomic, readonly) struct shared_ptr<quasar::LmModel2> { struct LmModel2 {} *x1; struct __shared_weak_count {} *x2; } model;

+ (id)deserializeModelData:(id)arg1;
+ (void)initialize;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_initWithModel:(struct shared_ptr<quasar::LmModel2> { struct LmModel2 {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (double)age;
- (id)metrics;
- (struct shared_ptr<quasar::LmModel2> { struct LmModel2 {} *x1; struct __shared_weak_count {} *x2; })model;
- (id)serializedModelWithLanguage:(id)arg1 modelData:(id)arg2 oovs:(id)arg3;
- (void)setProtectionClass:(id)arg1;
- (void)setWeight:(float)arg1;
- (float)weight;
- (bool)writeToDirectory:(id)arg1;

@end
