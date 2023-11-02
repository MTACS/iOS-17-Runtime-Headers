
@interface _EARLmModel : NSObject {
    struct shared_ptr<quasar::LmBuildConfig> { 
        struct LmBuildConfig {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _buildConfig;
    struct shared_ptr<quasar::LmModel2> { 
        struct LmModel2 {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _model;
}

@property (nonatomic, readonly) struct shared_ptr<quasar::LmBuildConfig> { struct LmBuildConfig {} *x1; struct __shared_weak_count {} *x2; } buildConfig;
@property (nonatomic, readonly) struct shared_ptr<quasar::LmModel2> { struct LmModel2 {} *x1; struct __shared_weak_count {} *x2; } model;

+ (void)initialize;
+ (void)removeWithDirectory:(id)arg1;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_initWithModel:(struct shared_ptr<quasar::LmModel2> { struct LmModel2 {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (double)age;
- (struct shared_ptr<quasar::LmBuildConfig> { struct LmBuildConfig {} *x1; struct __shared_weak_count {} *x2; })buildConfig;
- (id)deserializeModelData:(id)arg1;
- (id)handle;
- (id)initFromDirectory:(id)arg1;
- (id)initWithConfiguration:(id)arg1;
- (id)initWithConfiguration:(id)arg1 root:(id)arg2;
- (id)metrics;
- (struct shared_ptr<quasar::LmModel2> { struct LmModel2 {} *x1; struct __shared_weak_count {} *x2; })model;
- (id)serializedModelWithLanguage:(id)arg1 modelData:(id)arg2 oovs:(id)arg3;
- (void)setWeight:(float)arg1;
- (bool)trainWithData:(id)arg1;
- (bool)trainWithData:(id)arg1 shouldStop:(id /* block */)arg2;
- (float)weight;
- (bool)writeToDirectory:(id)arg1;

@end
