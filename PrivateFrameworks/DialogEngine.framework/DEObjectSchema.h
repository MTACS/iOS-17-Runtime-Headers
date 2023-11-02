
@interface DEObjectSchema : NSObject {
    struct shared_ptr<siri::dialogengine::ObjectSchema> { 
        struct ObjectSchema {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _This;
}

@property struct shared_ptr<siri::dialogengine::ObjectSchema> { struct ObjectSchema {} *x1; struct __shared_weak_count {} *x2; } This;
@property (readonly) NSString *baseObject;
@property (readonly) NSString *description;
@property (readonly) NSString *name;

+ (id)schema:(id)arg1 typeName:(id)arg2;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct shared_ptr<siri::dialogengine::ObjectSchema> { struct ObjectSchema {} *x1; struct __shared_weak_count {} *x2; })This;
- (id)baseObject;
- (id)description;
- (id)init;
- (id)initWithPtr:(struct shared_ptr<siri::dialogengine::ObjectSchema> { struct ObjectSchema {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (id)input:(id)arg1 name:(id)arg2;
- (id)inputNames:(id)arg1;
- (id)name;
- (id)property:(id)arg1 name:(id)arg2;
- (id)propertyNames:(id)arg1;
- (void)setThis:(struct shared_ptr<siri::dialogengine::ObjectSchema> { struct ObjectSchema {} *x1; struct __shared_weak_count {} *x2; })arg1;

@end
