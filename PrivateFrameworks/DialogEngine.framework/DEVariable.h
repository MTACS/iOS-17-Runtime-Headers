
@interface DEVariable : NSObject {
    struct shared_ptr<siri::dialogengine::Variable> { 
        struct Variable {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _This;
}

@property struct shared_ptr<siri::dialogengine::Variable> { struct Variable {} *x1; struct __shared_weak_count {} *x2; } This;
@property (retain) NSString *name;
@property (retain) NSString *type;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct shared_ptr<siri::dialogengine::Variable> { struct Variable {} *x1; struct __shared_weak_count {} *x2; })This;
- (void*)getSharedPtr;
- (id)init;
- (id)initWithSharedPtr:(void*)arg1;
- (bool)isEmpty;
- (id)name;
- (void)setName:(id)arg1;
- (void)setThis:(struct shared_ptr<siri::dialogengine::Variable> { struct Variable {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (void)setType:(id)arg1;
- (id)toString:(int)arg1;
- (id)type;

@end
