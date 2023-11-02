
@interface _EARCustomPronData : NSObject {
    struct shared_ptr<quasar::CustomPronData> { 
        struct CustomPronData {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _data;
}

@property (nonatomic) struct shared_ptr<quasar::CustomPronData> { struct CustomPronData {} *x1; struct __shared_weak_count {} *x2; } data;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct shared_ptr<quasar::CustomPronData> { struct CustomPronData {} *x1; struct __shared_weak_count {} *x2; })data;
- (id)getProns;
- (id)getRejectedProns;
- (id)initWithCustomPronData:(struct shared_ptr<quasar::CustomPronData> { struct CustomPronData {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (bool)isValid;
- (void)setData:(struct shared_ptr<quasar::CustomPronData> { struct CustomPronData {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (id)validationError;

@end
