
@interface DEPatternSchema : NSObject {
    struct shared_ptr<siri::dialogengine::PatternSchema> { 
        struct PatternSchema {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _This;
}

@property struct shared_ptr<siri::dialogengine::PatternSchema> { struct PatternSchema {} *x1; struct __shared_weak_count {} *x2; } This;
@property (readonly) NSString *description;
@property (readonly) NSString *name;

+ (id)schema:(id)arg1 typeName:(id)arg2;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct shared_ptr<siri::dialogengine::PatternSchema> { struct PatternSchema {} *x1; struct __shared_weak_count {} *x2; })This;
- (id)computedParameter:(id)arg1;
- (id)computedParameterNames;
- (id)description;
- (id)init;
- (id)initWithPtr:(struct shared_ptr<siri::dialogengine::PatternSchema> { struct PatternSchema {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (id)name;
- (id)requiredParameter:(id)arg1;
- (id)requiredParameterNames;
- (void)setThis:(struct shared_ptr<siri::dialogengine::PatternSchema> { struct PatternSchema {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (id)setting:(id)arg1;
- (id)settingNames;

@end
