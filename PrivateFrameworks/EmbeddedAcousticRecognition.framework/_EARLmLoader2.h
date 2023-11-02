
@interface _EARLmLoader2 : NSObject {
    struct shared_ptr<quasar::LmLoader2> { 
        struct LmLoader2 {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _loader;
}

+ (void)initialize;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)fetchOrLoadModelWithDirectory:(id)arg1 recognizer:(id)arg2;
- (id)init;
- (id)initWithRoot:(id)arg1;
- (void)invalidate;
- (id)loadForRecognitionWithDirectory:(id)arg1 recognizer:(id)arg2 task:(id)arg3 applicationName:(id)arg4;

@end
