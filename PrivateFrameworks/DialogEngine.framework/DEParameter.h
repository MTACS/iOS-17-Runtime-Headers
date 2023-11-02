
@interface DEParameter : NSObject {
    struct shared_ptr<siri::dialogengine::Parameter> { 
        struct Parameter {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _This;
}

@property struct shared_ptr<siri::dialogengine::Parameter> { struct Parameter {} *x1; struct __shared_weak_count {} *x2; } This;
@property (readonly) NSString *defaultValue;
@property (retain) NSString *description;
@property (retain) NSString *name;
@property (readonly) bool overridable;
@property (retain) NSString *semanticConcept;
@property (retain) NSString *type;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct shared_ptr<siri::dialogengine::Parameter> { struct Parameter {} *x1; struct __shared_weak_count {} *x2; })This;
- (id)defaultValue;
- (id)description;
- (void*)getSharedPtr;
- (id)init;
- (id)initWithSharedPtr:(void*)arg1;
- (id)name;
- (bool)overridable;
- (id)semanticConcept;
- (void)setDescription:(id)arg1;
- (void)setName:(id)arg1;
- (void)setSemanticConcept:(id)arg1;
- (void)setThis:(struct shared_ptr<siri::dialogengine::Parameter> { struct Parameter {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (void)setType:(id)arg1;
- (id)type;

@end
