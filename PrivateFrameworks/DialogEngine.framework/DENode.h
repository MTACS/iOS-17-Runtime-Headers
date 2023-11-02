
@interface DENode : NSObject {
    struct shared_ptr<siri::dialogengine::Node> { 
        struct Node {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _This;
}

@property struct shared_ptr<siri::dialogengine::Node> { struct Node {} *x1; struct __shared_weak_count {} *x2; } This;
@property (retain) NSString *conditionName;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct shared_ptr<siri::dialogengine::Node> { struct Node {} *x1; struct __shared_weak_count {} *x2; })This;
- (id)conditionName;
- (id)getDialog;
- (id)getGlobalId:(id)arg1;
- (struct shared_ptr<siri::dialogengine::Node> { struct Node {} *x1; struct __shared_weak_count {} *x2; })getSharedPtr;
- (id)init;
- (id)initWithSharedPtr:(struct shared_ptr<siri::dialogengine::Node> { struct Node {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (bool)isOfType:(unsigned long long)arg1;
- (void)setConditionName:(id)arg1;
- (void)setThis:(struct shared_ptr<siri::dialogengine::Node> { struct Node {} *x1; struct __shared_weak_count {} *x2; })arg1;

@end
