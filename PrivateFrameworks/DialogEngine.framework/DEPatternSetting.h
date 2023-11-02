
@interface DEPatternSetting : DEParameter {
    struct shared_ptr<siri::dialogengine::PatternSetting> { 
        struct PatternSetting {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _This;
}

@property struct shared_ptr<siri::dialogengine::PatternSetting> { struct PatternSetting {} *x1; struct __shared_weak_count {} *x2; } This;
@property (readonly) NSString *defaultValueFromSetting;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct shared_ptr<siri::dialogengine::PatternSetting> { struct PatternSetting {} *x1; struct __shared_weak_count {} *x2; })This;
- (id)defaultValueFromSetting;
- (void*)getSharedPtr;
- (id)init;
- (id)initWithSharedPtr:(void*)arg1;
- (void)setThis:(struct shared_ptr<siri::dialogengine::PatternSetting> { struct PatternSetting {} *x1; struct __shared_weak_count {} *x2; })arg1;

@end
